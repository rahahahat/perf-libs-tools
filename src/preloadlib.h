/*
    perf-libs-tools
    Copyright 2017-20 Arm Limited. 
    All rights reserved.
*/

#ifndef PRELOADLIB_DOT_H
#define PRELOADLIB_DOT_H

#include <stdio.h>
#include <stdlib.h>
#define _GNU_SOURCE
#define __GNU_SOURCE
#define  __USE_GNU
#include <dlfcn.h>

#ifdef LOGGING
#include "logging.h"
#else
#include "summary.h"
#endif

#include <cuda_runtime.h>
#include "cublas_v2.h"
#include "cublas_api.h"


#endif
