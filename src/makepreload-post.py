#!/usr/bin/env python

#    perf-libs-tools
#    Copyright 2017 Arm Limited. 
#    All rights reserved.
#

# Program to turn armpl.h into a library that can be preloaded to do logging

# 1. Manually preprocess armpl.h into PROTOTYPES to only have the BLAS/LAPACK/FFT prototypes - no semicolons!
# 2. Create output file and add header line
# 3. Loop over lines of PROTOTYPES
#    a. Read line
#    b. Get interface details
#    c. Make logging function
#       i. Prototype line without semicolon and a following bracket
#      i2. Declare "armpl_logging_struct logger;"
#      ii. Count <num_integer> and <num_char> porameters that we'll record
#     iii. "armpl_logging_enter(&logger, <fn_name>, <num_integer>, <num_char>," followed by list of integers and chars with dereferences but not types, ");"
#      iv. "real_<fn_name> = dlsym(RTLD_NEXT, "<fn_name>");"
#       v. Call line to "real_<fn_name>" without types and dereferencing
#      vi. "armpl_logging_leave(&logger," followed by list of integers and chars with dereferences but not types, ");"
#     vii. return <return_val>
#    viii. Closing bracket

# NOTES :
#        At present LAPACKE functions are not in as:
#        * not recording the right data as derefencing stage is wrong in the armpl_logging_enter call
#        * the presence of const all over the place
#        * most importantly they just call the versions with underscores at the end

import re		# Regular expressions toolbox
import itertools	# Iteration toolbox

def main(args=None):

  # Load appropriately made file
  fname = "./blasinfo/CUBLAS_"
  inputfile = open(fname, 'r')

  # Create output file (Step 2)
  fname = "preload-sumgen.c"
  outputfile = open(fname, 'w')
  outputfile.write('#include "preloadlib.h"\n\n')

  # Loop over input lines (Step 3 - inc step3a)
  for line in  inputfile:
      IargsToLog = []
      DEREFEDARGS = ""
      dtset = {
         "int", "float", "double", "long", "cublasHandle_t", "cublasOperation_t", 
         "cublasFillMode_t", "cublasDiagType_t", "cublasSideMode_t", "cublasPointerMode_t",
         "cublasAtomicsMode_t", "cublasGemmAlgo_t", "cublasMath_t", "cublasComputeType_t",
         "cudaDataType_t", "libraryPropertyType_t", "cuComplex", "cuDoubleComplex", "const",
         "void", "cudaDataType", "__half", "unsigned", "char", "short"
      }
      # First get interface details
      splitline = re.findall(r"[\w']+", line)
      ReturnType = splitline[0]
      FNNAME = splitline[1]
      REAL_FNNAME = "(*real_%s)" % FNNAME
      prototype = line.replace(FNNAME, REAL_FNNAME)
      # Now make logging function (Step 3.c.i)
      outputfile.write("%s{\n" % line)
      if (ReturnType != "void") :
         outputfile.write("\t%s returnVal;\n" % ReturnType)
      outputfile.write("\tarmpl_logging_struct logger;\n")
      # Count int and char parameters for recording (Step 3.c.ii)
      numInt = 0
      numM = 0
      numN = 0
      numK = 0
      numLDA = 0
      numLDB = 0
      numLDC = 0
      numBC = 0
      for entry in range(2, len(splitline)):
         strn = splitline[entry]
         if strn == "m":
            numM += 1
         if strn == "n":
            numN += 1
         if strn == "k":
            numK += 1
         if strn == "lda":
            numLDA += 1
         if strn == "ldb":
            numLDB += 1
         if strn == "ldc":
            numLDC += 1
         if strn == "batchCount":
            numBC += 1
      Iargs = ""
      args = [(numM, "m"), (numN, "n"), (numK, "k"), (numLDA, "lda"), (numLDB, "ldb"), (numLDC, "ldc"), (numBC, "batchCount")]
      for arg in args:
         count, strn = arg
         if count > 0:
            numInt+=1
            IargsToLog.append("%s" % strn)
      if numInt > 0:
         Iargs = ", ".join(IargsToLog)
      # Start logging (Step 3.c.iii)
      outputfile.write('\tarmpl_logging_enter(&logger, "%s", 0, %d, 0, 0);\n' % (FNNAME, numInt)) 

      # Do the symbol linking (Step 3.c.iv)
      outputfile.write('\t%s = dlsym(RTLD_NEXT, "%s");\n' % (prototype.rstrip('\n'), FNNAME))
      
      # getting arg names
      for entry in range (2, len(splitline)):
         if splitline[entry] not in dtset:
            DEREFEDARGS = "%s %s" % (DEREFEDARGS, str(splitline[entry]))
            if (entry < len(splitline)-2):
               DEREFEDARGS = "%s," % DEREFEDARGS

      # Now call the function (Step 3.c.v)
      if (ReturnType != "void") :
        outputfile.write('\treturnVal = real_%s(%s);\n' % (FNNAME, DEREFEDARGS) )
      else :
        outputfile.write('\treal_%s(%s);\n' % (FNNAME, DEREFEDARGS) )

     # Now finish function (Step 3.c.vi-vii)
      outputfile.write("\tarmpl_logging_leave(&logger")
      if numInt > 0:
         outputfile.write(', %s' % (str(Iargs)))
      outputfile.write(');\n')

      if (ReturnType != "void"):
        outputfile.write("\treturn returnVal;\n")
      outputfile.write("}\n")

if __name__ == '__main__':
    main()

