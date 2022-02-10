#include "preloadlib.h"

cublasStatus_t cublasNrm2Ex(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, void* result, cudaDataType resultType, cudaDataType executionType)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasNrm2Ex", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasNrm2Ex)(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, void* result, cudaDataType resultType, cudaDataType executionType) = dlsym(RTLD_NEXT, "cublasNrm2Ex");
	returnVal = real_cublasNrm2Ex( handle, n, x, xType, incx, result, resultType, executionType);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSnrm2_v2(cublasHandle_t handle, int n, const float* x, int incx, float* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSnrm2_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSnrm2_v2)(cublasHandle_t handle, int n, const float* x, int incx, float* result) = dlsym(RTLD_NEXT, "cublasSnrm2_v2");
	returnVal = real_cublasSnrm2_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDnrm2_v2(cublasHandle_t handle, int n, const double* x, int incx, double* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDnrm2_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDnrm2_v2)(cublasHandle_t handle, int n, const double* x, int incx, double* result) = dlsym(RTLD_NEXT, "cublasDnrm2_v2");
	returnVal = real_cublasDnrm2_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasScnrm2_v2(cublasHandle_t handle, int n, const cuComplex* x, int incx, float* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasScnrm2_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasScnrm2_v2)(cublasHandle_t handle, int n, const cuComplex* x, int incx, float* result) = dlsym(RTLD_NEXT, "cublasScnrm2_v2");
	returnVal = real_cublasScnrm2_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDznrm2_v2( cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, double* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDznrm2_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDznrm2_v2)( cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, double* result) = dlsym(RTLD_NEXT, "cublasDznrm2_v2");
	returnVal = real_cublasDznrm2_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDotEx(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, const void* y, cudaDataType yType, int incy, void* result, cudaDataType resultType, cudaDataType executionType)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDotEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDotEx)(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, const void* y, cudaDataType yType, int incy, void* result, cudaDataType resultType, cudaDataType executionType) = dlsym(RTLD_NEXT, "cublasDotEx");
	returnVal = real_cublasDotEx( handle, n, x, xType, incx, y, yType, incy, result, resultType, executionType);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDotcEx(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, const void* y, cudaDataType yType, int incy, void* result, cudaDataType resultType, cudaDataType executionType)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDotcEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDotcEx)(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, const void* y, cudaDataType yType, int incy, void* result, cudaDataType resultType, cudaDataType executionType) = dlsym(RTLD_NEXT, "cublasDotcEx");
	returnVal = real_cublasDotcEx( handle, n, x, xType, incx, y, yType, incy, result, resultType, executionType);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSdot_v2(cublasHandle_t handle, int n, const float* x, int incx, const float* y, int incy, float* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSdot_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSdot_v2)(cublasHandle_t handle, int n, const float* x, int incx, const float* y, int incy, float* result) = dlsym(RTLD_NEXT, "cublasSdot_v2");
	returnVal = real_cublasSdot_v2( handle, n, x, incx, y, incy, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDdot_v2(cublasHandle_t handle, int n, const double* x, int incx, const double* y, int incy, double* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDdot_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDdot_v2)(cublasHandle_t handle, int n, const double* x, int incx, const double* y, int incy, double* result) = dlsym(RTLD_NEXT, "cublasDdot_v2");
	returnVal = real_cublasDdot_v2( handle, n, x, incx, y, incy, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCdotu_v2(cublasHandle_t handle, int n, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCdotu_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCdotu_v2)(cublasHandle_t handle, int n, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* result) = dlsym(RTLD_NEXT, "cublasCdotu_v2");
	returnVal = real_cublasCdotu_v2( handle, n, x, incx, y, incy, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCdotc_v2(cublasHandle_t handle, int n, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCdotc_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCdotc_v2)(cublasHandle_t handle, int n, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* result) = dlsym(RTLD_NEXT, "cublasCdotc_v2");
	returnVal = real_cublasCdotc_v2( handle, n, x, incx, y, incy, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZdotu_v2(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZdotu_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZdotu_v2)(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* result) = dlsym(RTLD_NEXT, "cublasZdotu_v2");
	returnVal = real_cublasZdotu_v2( handle, n, x, incx, y, incy, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZdotc_v2(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZdotc_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZdotc_v2)(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* result) = dlsym(RTLD_NEXT, "cublasZdotc_v2");
	returnVal = real_cublasZdotc_v2( handle, n, x, incx, y, incy, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasScalEx(cublasHandle_t handle, int n, const void* alpha, cudaDataType alphaType, void* x, cudaDataType xType, int incx, cudaDataType executionType)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasScalEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasScalEx)(cublasHandle_t handle, int n, const void* alpha, cudaDataType alphaType, void* x, cudaDataType xType, int incx, cudaDataType executionType) = dlsym(RTLD_NEXT, "cublasScalEx");
	returnVal = real_cublasScalEx( handle, n, alpha, alphaType, x, xType, incx, executionType);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSscal_v2(cublasHandle_t handle, int n, const float* alpha, float* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSscal_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSscal_v2)(cublasHandle_t handle, int n, const float* alpha, float* x, int incx) = dlsym(RTLD_NEXT, "cublasSscal_v2");
	returnVal = real_cublasSscal_v2( handle, n, alpha, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDscal_v2(cublasHandle_t handle, int n, const double* alpha, double* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDscal_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDscal_v2)(cublasHandle_t handle, int n, const double* alpha, double* x, int incx) = dlsym(RTLD_NEXT, "cublasDscal_v2");
	returnVal = real_cublasDscal_v2( handle, n, alpha, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCscal_v2(cublasHandle_t handle, int n, const cuComplex* alpha, cuComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCscal_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCscal_v2)(cublasHandle_t handle, int n, const cuComplex* alpha, cuComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasCscal_v2");
	returnVal = real_cublasCscal_v2( handle, n, alpha, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCsscal_v2(cublasHandle_t handle, int n, const float* alpha, cuComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsscal_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCsscal_v2)(cublasHandle_t handle, int n, const float* alpha, cuComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasCsscal_v2");
	returnVal = real_cublasCsscal_v2( handle, n, alpha, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZscal_v2(cublasHandle_t handle, int n, const cuDoubleComplex* alpha, cuDoubleComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZscal_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZscal_v2)(cublasHandle_t handle, int n, const cuDoubleComplex* alpha, cuDoubleComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasZscal_v2");
	returnVal = real_cublasZscal_v2( handle, n, alpha, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZdscal_v2(cublasHandle_t handle, int n, const double* alpha, cuDoubleComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZdscal_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZdscal_v2)(cublasHandle_t handle, int n, const double* alpha, cuDoubleComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasZdscal_v2");
	returnVal = real_cublasZdscal_v2( handle, n, alpha, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasAxpyEx(cublasHandle_t handle, int n, const void* alpha, cudaDataType alphaType, const void* x, cudaDataType xType, int incx, void* y, cudaDataType yType, int incy, cudaDataType executiontype)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasAxpyEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasAxpyEx)(cublasHandle_t handle, int n, const void* alpha, cudaDataType alphaType, const void* x, cudaDataType xType, int incx, void* y, cudaDataType yType, int incy, cudaDataType executiontype) = dlsym(RTLD_NEXT, "cublasAxpyEx");
	returnVal = real_cublasAxpyEx( handle, n, alpha, alphaType, x, xType, incx, y, yType, incy, executiontype);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSaxpy_v2(cublasHandle_t handle, int n, const float* alpha, const float* x, int incx, float* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSaxpy_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSaxpy_v2)(cublasHandle_t handle, int n, const float* alpha, const float* x, int incx, float* y, int incy) = dlsym(RTLD_NEXT, "cublasSaxpy_v2");
	returnVal = real_cublasSaxpy_v2( handle, n, alpha, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDaxpy_v2(cublasHandle_t handle, int n, const double* alpha, const double* x, int incx, double* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDaxpy_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDaxpy_v2)(cublasHandle_t handle, int n, const double* alpha, const double* x, int incx, double* y, int incy) = dlsym(RTLD_NEXT, "cublasDaxpy_v2");
	returnVal = real_cublasDaxpy_v2( handle, n, alpha, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCaxpy_v2(cublasHandle_t handle, int n, const cuComplex* alpha, const cuComplex* x, int incx, cuComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCaxpy_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCaxpy_v2)(cublasHandle_t handle, int n, const cuComplex* alpha, const cuComplex* x, int incx, cuComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasCaxpy_v2");
	returnVal = real_cublasCaxpy_v2( handle, n, alpha, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZaxpy_v2(cublasHandle_t handle, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZaxpy_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZaxpy_v2)(cublasHandle_t handle, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasZaxpy_v2");
	returnVal = real_cublasZaxpy_v2( handle, n, alpha, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCopyEx(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, void* y, cudaDataType yType, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCopyEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCopyEx)(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, void* y, cudaDataType yType, int incy) = dlsym(RTLD_NEXT, "cublasCopyEx");
	returnVal = real_cublasCopyEx( handle, n, x, xType, incx, y, yType, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasScopy_v2(cublasHandle_t handle, int n, const float* x, int incx, float* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasScopy_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasScopy_v2)(cublasHandle_t handle, int n, const float* x, int incx, float* y, int incy) = dlsym(RTLD_NEXT, "cublasScopy_v2");
	returnVal = real_cublasScopy_v2( handle, n, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDcopy_v2(cublasHandle_t handle, int n, const double* x, int incx, double* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDcopy_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDcopy_v2)(cublasHandle_t handle, int n, const double* x, int incx, double* y, int incy) = dlsym(RTLD_NEXT, "cublasDcopy_v2");
	returnVal = real_cublasDcopy_v2( handle, n, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCcopy_v2(cublasHandle_t handle, int n, const cuComplex* x, int incx, cuComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCcopy_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCcopy_v2)(cublasHandle_t handle, int n, const cuComplex* x, int incx, cuComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasCcopy_v2");
	returnVal = real_cublasCcopy_v2( handle, n, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZcopy_v2(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZcopy_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZcopy_v2)(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasZcopy_v2");
	returnVal = real_cublasZcopy_v2( handle, n, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSswap_v2(cublasHandle_t handle, int n, float* x, int incx, float* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSswap_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSswap_v2)(cublasHandle_t handle, int n, float* x, int incx, float* y, int incy) = dlsym(RTLD_NEXT, "cublasSswap_v2");
	returnVal = real_cublasSswap_v2( handle, n, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDswap_v2(cublasHandle_t handle, int n, double* x, int incx, double* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDswap_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDswap_v2)(cublasHandle_t handle, int n, double* x, int incx, double* y, int incy) = dlsym(RTLD_NEXT, "cublasDswap_v2");
	returnVal = real_cublasDswap_v2( handle, n, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCswap_v2(cublasHandle_t handle, int n, cuComplex* x, int incx, cuComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCswap_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCswap_v2)(cublasHandle_t handle, int n, cuComplex* x, int incx, cuComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasCswap_v2");
	returnVal = real_cublasCswap_v2( handle, n, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZswap_v2(cublasHandle_t handle, int n, cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZswap_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZswap_v2)(cublasHandle_t handle, int n, cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasZswap_v2");
	returnVal = real_cublasZswap_v2( handle, n, x, incx, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSwapEx(cublasHandle_t handle, int n, void* x, cudaDataType xType, int incx, void* y, cudaDataType yType, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSwapEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSwapEx)(cublasHandle_t handle, int n, void* x, cudaDataType xType, int incx, void* y, cudaDataType yType, int incy) = dlsym(RTLD_NEXT, "cublasSwapEx");
	returnVal = real_cublasSwapEx( handle, n, x, xType, incx, y, yType, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasIsamax_v2(cublasHandle_t handle, int n, const float* x, int incx, int* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasIsamax_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasIsamax_v2)(cublasHandle_t handle, int n, const float* x, int incx, int* result) = dlsym(RTLD_NEXT, "cublasIsamax_v2");
	returnVal = real_cublasIsamax_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasIdamax_v2(cublasHandle_t handle, int n, const double* x, int incx, int* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasIdamax_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasIdamax_v2)(cublasHandle_t handle, int n, const double* x, int incx, int* result) = dlsym(RTLD_NEXT, "cublasIdamax_v2");
	returnVal = real_cublasIdamax_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasIcamax_v2(cublasHandle_t handle, int n, const cuComplex* x, int incx, int* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasIcamax_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasIcamax_v2)(cublasHandle_t handle, int n, const cuComplex* x, int incx, int* result) = dlsym(RTLD_NEXT, "cublasIcamax_v2");
	returnVal = real_cublasIcamax_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasIzamax_v2(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, int* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasIzamax_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasIzamax_v2)(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, int* result) = dlsym(RTLD_NEXT, "cublasIzamax_v2");
	returnVal = real_cublasIzamax_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasIamaxEx(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, int* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasIamaxEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasIamaxEx)(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, int* result) = dlsym(RTLD_NEXT, "cublasIamaxEx");
	returnVal = real_cublasIamaxEx( handle, n, x, xType, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasIsamin_v2(cublasHandle_t handle, int n, const float* x, int incx, int* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasIsamin_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasIsamin_v2)(cublasHandle_t handle, int n, const float* x, int incx, int* result) = dlsym(RTLD_NEXT, "cublasIsamin_v2");
	returnVal = real_cublasIsamin_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasIdamin_v2(cublasHandle_t handle, int n, const double* x, int incx, int* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasIdamin_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasIdamin_v2)(cublasHandle_t handle, int n, const double* x, int incx, int* result) = dlsym(RTLD_NEXT, "cublasIdamin_v2");
	returnVal = real_cublasIdamin_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasIcamin_v2(cublasHandle_t handle, int n, const cuComplex* x, int incx, int* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasIcamin_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasIcamin_v2)(cublasHandle_t handle, int n, const cuComplex* x, int incx, int* result) = dlsym(RTLD_NEXT, "cublasIcamin_v2");
	returnVal = real_cublasIcamin_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasIzamin_v2(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, int* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasIzamin_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasIzamin_v2)(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, int* result) = dlsym(RTLD_NEXT, "cublasIzamin_v2");
	returnVal = real_cublasIzamin_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasIaminEx(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, int* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasIaminEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasIaminEx)(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, int* result) = dlsym(RTLD_NEXT, "cublasIaminEx");
	returnVal = real_cublasIaminEx( handle, n, x, xType, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasAsumEx(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, void* result, cudaDataType resultType, cudaDataType executiontype)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasAsumEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasAsumEx)(cublasHandle_t handle, int n, const void* x, cudaDataType xType, int incx, void* result, cudaDataType resultType, cudaDataType executiontype) = dlsym(RTLD_NEXT, "cublasAsumEx");
	returnVal = real_cublasAsumEx( handle, n, x, xType, incx, result, resultType, executiontype);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSasum_v2(cublasHandle_t handle, int n, const float* x, int incx, float* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSasum_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSasum_v2)(cublasHandle_t handle, int n, const float* x, int incx, float* result) = dlsym(RTLD_NEXT, "cublasSasum_v2");
	returnVal = real_cublasSasum_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDasum_v2(cublasHandle_t handle, int n, const double* x, int incx, double* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDasum_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDasum_v2)(cublasHandle_t handle, int n, const double* x, int incx, double* result) = dlsym(RTLD_NEXT, "cublasDasum_v2");
	returnVal = real_cublasDasum_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasScasum_v2(cublasHandle_t handle, int n, const cuComplex* x, int incx, float* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasScasum_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasScasum_v2)(cublasHandle_t handle, int n, const cuComplex* x, int incx, float* result) = dlsym(RTLD_NEXT, "cublasScasum_v2");
	returnVal = real_cublasScasum_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDzasum_v2(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, double* result)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDzasum_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDzasum_v2)(cublasHandle_t handle, int n, const cuDoubleComplex* x, int incx, double* result) = dlsym(RTLD_NEXT, "cublasDzasum_v2");
	returnVal = real_cublasDzasum_v2( handle, n, x, incx, result);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSrot_v2(cublasHandle_t handle, int n, float* x, int incx, float* y, int incy, const float* c, const float* s)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSrot_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSrot_v2)(cublasHandle_t handle, int n, float* x, int incx, float* y, int incy, const float* c, const float* s) = dlsym(RTLD_NEXT, "cublasSrot_v2");
	returnVal = real_cublasSrot_v2( handle, n, x, incx, y, incy, c, s);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDrot_v2(cublasHandle_t handle, int n, double* x, int incx, double* y, int incy, const double* c, const double* s)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDrot_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDrot_v2)(cublasHandle_t handle, int n, double* x, int incx, double* y, int incy, const double* c, const double* s) = dlsym(RTLD_NEXT, "cublasDrot_v2");
	returnVal = real_cublasDrot_v2( handle, n, x, incx, y, incy, c, s);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCrot_v2(cublasHandle_t handle, int n, cuComplex* x, int incx, cuComplex* y, int incy, const float* c, const cuComplex* s)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCrot_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCrot_v2)(cublasHandle_t handle, int n, cuComplex* x, int incx, cuComplex* y, int incy, const float* c, const cuComplex* s) = dlsym(RTLD_NEXT, "cublasCrot_v2");
	returnVal = real_cublasCrot_v2( handle, n, x, incx, y, incy, c, s);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCsrot_v2(cublasHandle_t handle, int n, cuComplex* x, int incx, cuComplex* y, int incy, const float* c, const float* s)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsrot_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCsrot_v2)(cublasHandle_t handle, int n, cuComplex* x, int incx, cuComplex* y, int incy, const float* c, const float* s) = dlsym(RTLD_NEXT, "cublasCsrot_v2");
	returnVal = real_cublasCsrot_v2( handle, n, x, incx, y, incy, c, s);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZrot_v2(cublasHandle_t handle, int n, cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy, const double* c, const cuDoubleComplex* s)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZrot_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZrot_v2)(cublasHandle_t handle, int n, cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy, const double* c, const cuDoubleComplex* s) = dlsym(RTLD_NEXT, "cublasZrot_v2");
	returnVal = real_cublasZrot_v2( handle, n, x, incx, y, incy, c, s);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZdrot_v2(cublasHandle_t handle, int n, cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy, const double* c, const double* s)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZdrot_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZdrot_v2)(cublasHandle_t handle, int n, cuDoubleComplex* x, int incx, cuDoubleComplex* y, int incy, const double* c, const double* s) = dlsym(RTLD_NEXT, "cublasZdrot_v2");
	returnVal = real_cublasZdrot_v2( handle, n, x, incx, y, incy, c, s);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasRotEx(cublasHandle_t handle, int n, void* x, cudaDataType xType, int incx, void* y, cudaDataType yType, int incy, const void* c, const void* s, cudaDataType csType, cudaDataType executiontype)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasRotEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasRotEx)(cublasHandle_t handle, int n, void* x, cudaDataType xType, int incx, void* y, cudaDataType yType, int incy, const void* c, const void* s, cudaDataType csType, cudaDataType executiontype) = dlsym(RTLD_NEXT, "cublasRotEx");
	returnVal = real_cublasRotEx( handle, n, x, xType, incx, y, yType, incy, c, s, csType, executiontype);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSrotg_v2(cublasHandle_t handle, float* a, float* b, float* c, float* s)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSrotg_v2", 0, 0, 0, 0);
	cublasStatus_t (*real_cublasSrotg_v2)(cublasHandle_t handle, float* a, float* b, float* c, float* s) = dlsym(RTLD_NEXT, "cublasSrotg_v2");
	returnVal = real_cublasSrotg_v2( handle, a, b, c, s);
	armpl_logging_leave(&logger);
	return returnVal;
}
cublasStatus_t cublasDrotg_v2(cublasHandle_t handle, double* a, double* b, double* c, double* s)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDrotg_v2", 0, 0, 0, 0);
	cublasStatus_t (*real_cublasDrotg_v2)(cublasHandle_t handle, double* a, double* b, double* c, double* s) = dlsym(RTLD_NEXT, "cublasDrotg_v2");
	returnVal = real_cublasDrotg_v2( handle, a, b, c, s);
	armpl_logging_leave(&logger);
	return returnVal;
}
cublasStatus_t cublasCrotg_v2(cublasHandle_t handle, cuComplex* a, cuComplex* b, float* c, cuComplex* s)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCrotg_v2", 0, 0, 0, 0);
	cublasStatus_t (*real_cublasCrotg_v2)(cublasHandle_t handle, cuComplex* a, cuComplex* b, float* c, cuComplex* s) = dlsym(RTLD_NEXT, "cublasCrotg_v2");
	returnVal = real_cublasCrotg_v2( handle, a, b, c, s);
	armpl_logging_leave(&logger);
	return returnVal;
}
cublasStatus_t cublasZrotg_v2(cublasHandle_t handle, cuDoubleComplex* a, cuDoubleComplex* b, double* c, cuDoubleComplex* s)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZrotg_v2", 0, 0, 0, 0);
	cublasStatus_t (*real_cublasZrotg_v2)(cublasHandle_t handle, cuDoubleComplex* a, cuDoubleComplex* b, double* c, cuDoubleComplex* s) = dlsym(RTLD_NEXT, "cublasZrotg_v2");
	returnVal = real_cublasZrotg_v2( handle, a, b, c, s);
	armpl_logging_leave(&logger);
	return returnVal;
}
cublasStatus_t cublasRotgEx(cublasHandle_t handle, void* a, void* b, cudaDataType abType, void* c, void* s, cudaDataType csType, cudaDataType executiontype)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasRotgEx", 0, 0, 0, 0);
	cublasStatus_t (*real_cublasRotgEx)(cublasHandle_t handle, void* a, void* b, cudaDataType abType, void* c, void* s, cudaDataType csType, cudaDataType executiontype) = dlsym(RTLD_NEXT, "cublasRotgEx");
	returnVal = real_cublasRotgEx( handle, a, b, abType, c, s, csType, executiontype);
	armpl_logging_leave(&logger);
	return returnVal;
}
cublasStatus_t cublasSrotm_v2(cublasHandle_t handle, int n, float* x, int incx, float* y, int incy, const float* param)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSrotm_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSrotm_v2)(cublasHandle_t handle, int n, float* x, int incx, float* y, int incy, const float* param) = dlsym(RTLD_NEXT, "cublasSrotm_v2");
	returnVal = real_cublasSrotm_v2( handle, n, x, incx, y, incy, param);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDrotm_v2(cublasHandle_t handle, int n, double* x, int incx, double* y, int incy, const double* param)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDrotm_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDrotm_v2)(cublasHandle_t handle, int n, double* x, int incx, double* y, int incy, const double* param) = dlsym(RTLD_NEXT, "cublasDrotm_v2");
	returnVal = real_cublasDrotm_v2( handle, n, x, incx, y, incy, param);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasRotmEx(cublasHandle_t handle, int n, void* x, cudaDataType xType, int incx, void* y, cudaDataType yType, int incy, const void* param, cudaDataType paramType, cudaDataType executiontype)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasRotmEx", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasRotmEx)(cublasHandle_t handle, int n, void* x, cudaDataType xType, int incx, void* y, cudaDataType yType, int incy, const void* param, cudaDataType paramType, cudaDataType executiontype) = dlsym(RTLD_NEXT, "cublasRotmEx");
	returnVal = real_cublasRotmEx( handle, n, x, xType, incx, y, yType, incy, param, paramType, executiontype);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSrotmg_v2(cublasHandle_t handle, float* d1, float* d2, float* x1, const float* y1, float* param)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSrotmg_v2", 0, 0, 0, 0);
	cublasStatus_t (*real_cublasSrotmg_v2)(cublasHandle_t handle, float* d1, float* d2, float* x1, const float* y1, float* param) = dlsym(RTLD_NEXT, "cublasSrotmg_v2");
	returnVal = real_cublasSrotmg_v2( handle, d1, d2, x1, y1, param);
	armpl_logging_leave(&logger);
	return returnVal;
}
cublasStatus_t cublasDrotmg_v2(cublasHandle_t handle, double* d1, double* d2, double* x1, const double* y1, double* param)  
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDrotmg_v2", 0, 0, 0, 0);
	cublasStatus_t (*real_cublasDrotmg_v2)(cublasHandle_t handle, double* d1, double* d2, double* x1, const double* y1, double* param)   = dlsym(RTLD_NEXT, "cublasDrotmg_v2");
	returnVal = real_cublasDrotmg_v2( handle, d1, d2, x1, y1, param);
	armpl_logging_leave(&logger);
	return returnVal;
}
cublasStatus_t cublasRotmgEx(cublasHandle_t handle, void* d1, cudaDataType d1Type, void* d2, cudaDataType d2Type, void* x1, cudaDataType x1Type, const void* y1, cudaDataType y1Type, void* param, cudaDataType paramType, cudaDataType executiontype)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasRotmgEx", 0, 0, 0, 0);
	cublasStatus_t (*real_cublasRotmgEx)(cublasHandle_t handle, void* d1, cudaDataType d1Type, void* d2, cudaDataType d2Type, void* x1, cudaDataType x1Type, const void* y1, cudaDataType y1Type, void* param, cudaDataType paramType, cudaDataType executiontype) = dlsym(RTLD_NEXT, "cublasRotmgEx");
	returnVal = real_cublasRotmgEx( handle, d1, d1Type, d2, d2Type, x1, x1Type, y1, y1Type, param, paramType, executiontype);
	armpl_logging_leave(&logger);
	return returnVal;
}
cublasStatus_t cublasSgemv_v2(cublasHandle_t handle, cublasOperation_t trans, int m, int n, const float* alpha, const float* A, int lda, const float* x, int incx, const float* beta, float* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgemv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasSgemv_v2)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, const float* alpha, const float* A, int lda, const float* x, int incx, const float* beta, float* y, int incy) = dlsym(RTLD_NEXT, "cublasSgemv_v2");
	returnVal = real_cublasSgemv_v2( handle, trans, m, n, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasDgemv_v2(cublasHandle_t handle, cublasOperation_t trans, int m, int n, const double* alpha, const double* A, int lda, const double* x, int incx, const double* beta, double* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgemv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasDgemv_v2)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, const double* alpha, const double* A, int lda, const double* x, int incx, const double* beta, double* y, int incy) = dlsym(RTLD_NEXT, "cublasDgemv_v2");
	returnVal = real_cublasDgemv_v2( handle, trans, m, n, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasCgemv_v2(cublasHandle_t handle, cublasOperation_t trans, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgemv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasCgemv_v2)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasCgemv_v2");
	returnVal = real_cublasCgemv_v2( handle, trans, m, n, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasZgemv_v2(cublasHandle_t handle, cublasOperation_t trans, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgemv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasZgemv_v2)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasZgemv_v2");
	returnVal = real_cublasZgemv_v2( handle, trans, m, n, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasSgbmv_v2(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int kl, int ku, const float* alpha, const float* A, int lda, const float* x, int incx, const float* beta, float* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasSgbmv_v2)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int kl, int ku, const float* alpha, const float* A, int lda, const float* x, int incx, const float* beta, float* y, int incy) = dlsym(RTLD_NEXT, "cublasSgbmv_v2");
	returnVal = real_cublasSgbmv_v2( handle, trans, m, n, kl, ku, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasDgbmv_v2(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int kl, int ku, const double* alpha, const double* A, int lda, const double* x, int incx, const double* beta, double* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasDgbmv_v2)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int kl, int ku, const double* alpha, const double* A, int lda, const double* x, int incx, const double* beta, double* y, int incy) = dlsym(RTLD_NEXT, "cublasDgbmv_v2");
	returnVal = real_cublasDgbmv_v2( handle, trans, m, n, kl, ku, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasCgbmv_v2(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int kl, int ku, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasCgbmv_v2)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int kl, int ku, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasCgbmv_v2");
	returnVal = real_cublasCgbmv_v2( handle, trans, m, n, kl, ku, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasZgbmv_v2(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int kl, int ku, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasZgbmv_v2)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int kl, int ku, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasZgbmv_v2");
	returnVal = real_cublasZgbmv_v2( handle, trans, m, n, kl, ku, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasStrmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const float* A, int lda, float* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasStrmv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasStrmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const float* A, int lda, float* x, int incx) = dlsym(RTLD_NEXT, "cublasStrmv_v2");
	returnVal = real_cublasStrmv_v2( handle, uplo, trans, diag, n, A, lda, x, incx);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasDtrmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const double* A, int lda, double* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDtrmv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasDtrmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const double* A, int lda, double* x, int incx) = dlsym(RTLD_NEXT, "cublasDtrmv_v2");
	returnVal = real_cublasDtrmv_v2( handle, uplo, trans, diag, n, A, lda, x, incx);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasCtrmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuComplex* A, int lda, cuComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCtrmv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasCtrmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuComplex* A, int lda, cuComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasCtrmv_v2");
	returnVal = real_cublasCtrmv_v2( handle, uplo, trans, diag, n, A, lda, x, incx);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasZtrmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuDoubleComplex* A, int lda, cuDoubleComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZtrmv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasZtrmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuDoubleComplex* A, int lda, cuDoubleComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasZtrmv_v2");
	returnVal = real_cublasZtrmv_v2( handle, uplo, trans, diag, n, A, lda, x, incx);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasStbmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const float* A, int lda, float* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasStbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasStbmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const float* A, int lda, float* x, int incx) = dlsym(RTLD_NEXT, "cublasStbmv_v2");
	returnVal = real_cublasStbmv_v2( handle, uplo, trans, diag, n, k, A, lda, x, incx);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasDtbmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const double* A, int lda, double* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDtbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasDtbmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const double* A, int lda, double* x, int incx) = dlsym(RTLD_NEXT, "cublasDtbmv_v2");
	returnVal = real_cublasDtbmv_v2( handle, uplo, trans, diag, n, k, A, lda, x, incx);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasCtbmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const cuComplex* A, int lda, cuComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCtbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasCtbmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const cuComplex* A, int lda, cuComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasCtbmv_v2");
	returnVal = real_cublasCtbmv_v2( handle, uplo, trans, diag, n, k, A, lda, x, incx);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasZtbmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const cuDoubleComplex* A, int lda, cuDoubleComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZtbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasZtbmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const cuDoubleComplex* A, int lda, cuDoubleComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasZtbmv_v2");
	returnVal = real_cublasZtbmv_v2( handle, uplo, trans, diag, n, k, A, lda, x, incx);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasStpmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const float* AP, float* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasStpmv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasStpmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const float* AP, float* x, int incx) = dlsym(RTLD_NEXT, "cublasStpmv_v2");
	returnVal = real_cublasStpmv_v2( handle, uplo, trans, diag, n, AP, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDtpmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const double* AP, double* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDtpmv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDtpmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const double* AP, double* x, int incx) = dlsym(RTLD_NEXT, "cublasDtpmv_v2");
	returnVal = real_cublasDtpmv_v2( handle, uplo, trans, diag, n, AP, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCtpmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuComplex* AP, cuComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCtpmv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCtpmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuComplex* AP, cuComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasCtpmv_v2");
	returnVal = real_cublasCtpmv_v2( handle, uplo, trans, diag, n, AP, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZtpmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuDoubleComplex* AP, cuDoubleComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZtpmv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZtpmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuDoubleComplex* AP, cuDoubleComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasZtpmv_v2");
	returnVal = real_cublasZtpmv_v2( handle, uplo, trans, diag, n, AP, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasStrsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const float* A, int lda, float* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasStrsv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasStrsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const float* A, int lda, float* x, int incx) = dlsym(RTLD_NEXT, "cublasStrsv_v2");
	returnVal = real_cublasStrsv_v2( handle, uplo, trans, diag, n, A, lda, x, incx);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasDtrsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const double* A, int lda, double* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDtrsv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasDtrsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const double* A, int lda, double* x, int incx) = dlsym(RTLD_NEXT, "cublasDtrsv_v2");
	returnVal = real_cublasDtrsv_v2( handle, uplo, trans, diag, n, A, lda, x, incx);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasCtrsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuComplex* A, int lda, cuComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCtrsv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasCtrsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuComplex* A, int lda, cuComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasCtrsv_v2");
	returnVal = real_cublasCtrsv_v2( handle, uplo, trans, diag, n, A, lda, x, incx);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasZtrsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuDoubleComplex* A, int lda, cuDoubleComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZtrsv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasZtrsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuDoubleComplex* A, int lda, cuDoubleComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasZtrsv_v2");
	returnVal = real_cublasZtrsv_v2( handle, uplo, trans, diag, n, A, lda, x, incx);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasStpsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const float* AP, float* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasStpsv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasStpsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const float* AP, float* x, int incx) = dlsym(RTLD_NEXT, "cublasStpsv_v2");
	returnVal = real_cublasStpsv_v2( handle, uplo, trans, diag, n, AP, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDtpsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const double* AP, double* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDtpsv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDtpsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const double* AP, double* x, int incx) = dlsym(RTLD_NEXT, "cublasDtpsv_v2");
	returnVal = real_cublasDtpsv_v2( handle, uplo, trans, diag, n, AP, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasCtpsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuComplex* AP, cuComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCtpsv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasCtpsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuComplex* AP, cuComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasCtpsv_v2");
	returnVal = real_cublasCtpsv_v2( handle, uplo, trans, diag, n, AP, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZtpsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuDoubleComplex* AP, cuDoubleComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZtpsv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZtpsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, const cuDoubleComplex* AP, cuDoubleComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasZtpsv_v2");
	returnVal = real_cublasZtpsv_v2( handle, uplo, trans, diag, n, AP, x, incx);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasStbsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const float* A, int lda, float* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasStbsv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasStbsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const float* A, int lda, float* x, int incx) = dlsym(RTLD_NEXT, "cublasStbsv_v2");
	returnVal = real_cublasStbsv_v2( handle, uplo, trans, diag, n, k, A, lda, x, incx);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasDtbsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const double* A, int lda, double* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDtbsv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasDtbsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const double* A, int lda, double* x, int incx) = dlsym(RTLD_NEXT, "cublasDtbsv_v2");
	returnVal = real_cublasDtbsv_v2( handle, uplo, trans, diag, n, k, A, lda, x, incx);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasCtbsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const cuComplex* A, int lda, cuComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCtbsv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasCtbsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const cuComplex* A, int lda, cuComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasCtbsv_v2");
	returnVal = real_cublasCtbsv_v2( handle, uplo, trans, diag, n, k, A, lda, x, incx);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasZtbsv_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const cuDoubleComplex* A, int lda, cuDoubleComplex* x, int incx)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZtbsv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasZtbsv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int n, int k, const cuDoubleComplex* A, int lda, cuDoubleComplex* x, int incx) = dlsym(RTLD_NEXT, "cublasZtbsv_v2");
	returnVal = real_cublasZtbsv_v2( handle, uplo, trans, diag, n, k, A, lda, x, incx);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasSsymv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* A, int lda, const float* x, int incx, const float* beta, float* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSsymv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasSsymv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* A, int lda, const float* x, int incx, const float* beta, float* y, int incy) = dlsym(RTLD_NEXT, "cublasSsymv_v2");
	returnVal = real_cublasSsymv_v2( handle, uplo, n, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasDsymv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* A, int lda, const double* x, int incx, const double* beta, double* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDsymv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasDsymv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* A, int lda, const double* x, int incx, const double* beta, double* y, int incy) = dlsym(RTLD_NEXT, "cublasDsymv_v2");
	returnVal = real_cublasDsymv_v2( handle, uplo, n, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasCsymv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsymv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasCsymv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasCsymv_v2");
	returnVal = real_cublasCsymv_v2( handle, uplo, n, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasZsymv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZsymv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasZsymv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasZsymv_v2");
	returnVal = real_cublasZsymv_v2( handle, uplo, n, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasChemv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasChemv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasChemv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasChemv_v2");
	returnVal = real_cublasChemv_v2( handle, uplo, n, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasZhemv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZhemv_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasZhemv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasZhemv_v2");
	returnVal = real_cublasZhemv_v2( handle, uplo, n, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasSsbmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, int k, const float* alpha, const float* A, int lda, const float* x, int incx, const float* beta, float* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSsbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasSsbmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, int k, const float* alpha, const float* A, int lda, const float* x, int incx, const float* beta, float* y, int incy) = dlsym(RTLD_NEXT, "cublasSsbmv_v2");
	returnVal = real_cublasSsbmv_v2( handle, uplo, n, k, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasDsbmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, int k, const double* alpha, const double* A, int lda, const double* x, int incx, const double* beta, double* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDsbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasDsbmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, int k, const double* alpha, const double* A, int lda, const double* x, int incx, const double* beta, double* y, int incy) = dlsym(RTLD_NEXT, "cublasDsbmv_v2");
	returnVal = real_cublasDsbmv_v2( handle, uplo, n, k, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasChbmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasChbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasChbmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasChbmv_v2");
	returnVal = real_cublasChbmv_v2( handle, uplo, n, k, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasZhbmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZhbmv_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasZhbmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasZhbmv_v2");
	returnVal = real_cublasZhbmv_v2( handle, uplo, n, k, alpha, A, lda, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n, k, lda);
	return returnVal;
}
cublasStatus_t cublasSspmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* AP, const float* x, int incx, const float* beta, float* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSspmv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSspmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* AP, const float* x, int incx, const float* beta, float* y, int incy) = dlsym(RTLD_NEXT, "cublasSspmv_v2");
	returnVal = real_cublasSspmv_v2( handle, uplo, n, alpha, AP, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDspmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* AP, const double* x, int incx, const double* beta, double* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDspmv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDspmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* AP, const double* x, int incx, const double* beta, double* y, int incy) = dlsym(RTLD_NEXT, "cublasDspmv_v2");
	returnVal = real_cublasDspmv_v2( handle, uplo, n, alpha, AP, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasChpmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* AP, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasChpmv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasChpmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* AP, const cuComplex* x, int incx, const cuComplex* beta, cuComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasChpmv_v2");
	returnVal = real_cublasChpmv_v2( handle, uplo, n, alpha, AP, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZhpmv_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* AP, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZhpmv_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZhpmv_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* AP, const cuDoubleComplex* x, int incx, const cuDoubleComplex* beta, cuDoubleComplex* y, int incy) = dlsym(RTLD_NEXT, "cublasZhpmv_v2");
	returnVal = real_cublasZhpmv_v2( handle, uplo, n, alpha, AP, x, incx, beta, y, incy);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSger_v2(cublasHandle_t handle, int m, int n, const float* alpha, const float* x, int incx, const float* y, int incy, float* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSger_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasSger_v2)(cublasHandle_t handle, int m, int n, const float* alpha, const float* x, int incx, const float* y, int incy, float* A, int lda) = dlsym(RTLD_NEXT, "cublasSger_v2");
	returnVal = real_cublasSger_v2( handle, m, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasDger_v2(cublasHandle_t handle, int m, int n, const double* alpha, const double* x, int incx, const double* y, int incy, double* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDger_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasDger_v2)(cublasHandle_t handle, int m, int n, const double* alpha, const double* x, int incx, const double* y, int incy, double* A, int lda) = dlsym(RTLD_NEXT, "cublasDger_v2");
	returnVal = real_cublasDger_v2( handle, m, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasCgeru_v2(cublasHandle_t handle, int m, int n, const cuComplex* alpha, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgeru_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasCgeru_v2)(cublasHandle_t handle, int m, int n, const cuComplex* alpha, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasCgeru_v2");
	returnVal = real_cublasCgeru_v2( handle, m, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasCgerc_v2(cublasHandle_t handle, int m, int n, const cuComplex* alpha, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgerc_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasCgerc_v2)(cublasHandle_t handle, int m, int n, const cuComplex* alpha, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasCgerc_v2");
	returnVal = real_cublasCgerc_v2( handle, m, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasZgeru_v2(cublasHandle_t handle, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgeru_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasZgeru_v2)(cublasHandle_t handle, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasZgeru_v2");
	returnVal = real_cublasZgeru_v2( handle, m, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasZgerc_v2(cublasHandle_t handle, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgerc_v2", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasZgerc_v2)(cublasHandle_t handle, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasZgerc_v2");
	returnVal = real_cublasZgerc_v2( handle, m, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasSsyr_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* x, int incx, float* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSsyr_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasSsyr_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* x, int incx, float* A, int lda) = dlsym(RTLD_NEXT, "cublasSsyr_v2");
	returnVal = real_cublasSsyr_v2( handle, uplo, n, alpha, x, incx, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasDsyr_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* x, int incx, double* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDsyr_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasDsyr_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* x, int incx, double* A, int lda) = dlsym(RTLD_NEXT, "cublasDsyr_v2");
	returnVal = real_cublasDsyr_v2( handle, uplo, n, alpha, x, incx, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasCsyr_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* x, int incx, cuComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsyr_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasCsyr_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* x, int incx, cuComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasCsyr_v2");
	returnVal = real_cublasCsyr_v2( handle, uplo, n, alpha, x, incx, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasZsyr_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, cuDoubleComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZsyr_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasZsyr_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, cuDoubleComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasZsyr_v2");
	returnVal = real_cublasZsyr_v2( handle, uplo, n, alpha, x, incx, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasCher_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const cuComplex* x, int incx, cuComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCher_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasCher_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const cuComplex* x, int incx, cuComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasCher_v2");
	returnVal = real_cublasCher_v2( handle, uplo, n, alpha, x, incx, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasZher_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const cuDoubleComplex* x, int incx, cuDoubleComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZher_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasZher_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const cuDoubleComplex* x, int incx, cuDoubleComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasZher_v2");
	returnVal = real_cublasZher_v2( handle, uplo, n, alpha, x, incx, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasSspr_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* x, int incx, float* AP)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSspr_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSspr_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* x, int incx, float* AP) = dlsym(RTLD_NEXT, "cublasSspr_v2");
	returnVal = real_cublasSspr_v2( handle, uplo, n, alpha, x, incx, AP);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDspr_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* x, int incx, double* AP)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDspr_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDspr_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* x, int incx, double* AP) = dlsym(RTLD_NEXT, "cublasDspr_v2");
	returnVal = real_cublasDspr_v2( handle, uplo, n, alpha, x, incx, AP);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasChpr_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const cuComplex* x, int incx, cuComplex* AP)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasChpr_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasChpr_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const cuComplex* x, int incx, cuComplex* AP) = dlsym(RTLD_NEXT, "cublasChpr_v2");
	returnVal = real_cublasChpr_v2( handle, uplo, n, alpha, x, incx, AP);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZhpr_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const cuDoubleComplex* x, int incx, cuDoubleComplex* AP)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZhpr_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZhpr_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const cuDoubleComplex* x, int incx, cuDoubleComplex* AP) = dlsym(RTLD_NEXT, "cublasZhpr_v2");
	returnVal = real_cublasZhpr_v2( handle, uplo, n, alpha, x, incx, AP);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSsyr2_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* x, int incx, const float* y, int incy, float* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSsyr2_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasSsyr2_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* x, int incx, const float* y, int incy, float* A, int lda) = dlsym(RTLD_NEXT, "cublasSsyr2_v2");
	returnVal = real_cublasSsyr2_v2( handle, uplo, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasDsyr2_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* x, int incx, const double* y, int incy, double* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDsyr2_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasDsyr2_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* x, int incx, const double* y, int incy, double* A, int lda) = dlsym(RTLD_NEXT, "cublasDsyr2_v2");
	returnVal = real_cublasDsyr2_v2( handle, uplo, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasCsyr2_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsyr2_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasCsyr2_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasCsyr2_v2");
	returnVal = real_cublasCsyr2_v2( handle, uplo, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasZsyr2_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZsyr2_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasZsyr2_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasZsyr2_v2");
	returnVal = real_cublasZsyr2_v2( handle, uplo, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasCher2_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCher2_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasCher2_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasCher2_v2");
	returnVal = real_cublasCher2_v2( handle, uplo, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasZher2_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* A, int lda)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZher2_v2", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasZher2_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* A, int lda) = dlsym(RTLD_NEXT, "cublasZher2_v2");
	returnVal = real_cublasZher2_v2( handle, uplo, n, alpha, x, incx, y, incy, A, lda);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasSspr2_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* x, int incx, const float* y, int incy, float* AP)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSspr2_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasSspr2_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const float* alpha, const float* x, int incx, const float* y, int incy, float* AP) = dlsym(RTLD_NEXT, "cublasSspr2_v2");
	returnVal = real_cublasSspr2_v2( handle, uplo, n, alpha, x, incx, y, incy, AP);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasDspr2_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* x, int incx, const double* y, int incy, double* AP)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDspr2_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasDspr2_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const double* alpha, const double* x, int incx, const double* y, int incy, double* AP) = dlsym(RTLD_NEXT, "cublasDspr2_v2");
	returnVal = real_cublasDspr2_v2( handle, uplo, n, alpha, x, incx, y, incy, AP);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasChpr2_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* AP)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasChpr2_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasChpr2_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuComplex* alpha, const cuComplex* x, int incx, const cuComplex* y, int incy, cuComplex* AP) = dlsym(RTLD_NEXT, "cublasChpr2_v2");
	returnVal = real_cublasChpr2_v2( handle, uplo, n, alpha, x, incx, y, incy, AP);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasZhpr2_v2(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* AP)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZhpr2_v2", 0, 1, 0, 0);
	cublasStatus_t (*real_cublasZhpr2_v2)(cublasHandle_t handle, cublasFillMode_t uplo, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* x, int incx, const cuDoubleComplex* y, int incy, cuDoubleComplex* AP) = dlsym(RTLD_NEXT, "cublasZhpr2_v2");
	returnVal = real_cublasZhpr2_v2( handle, uplo, n, alpha, x, incx, y, incy, AP);
	armpl_logging_leave(&logger, n);
	return returnVal;
}
cublasStatus_t cublasSgemm_v2(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float* alpha, const float* A, int lda, const float* B, int ldb, const float* beta, float* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgemm_v2", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasSgemm_v2)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float* alpha, const float* A, int lda, const float* B, int ldb, const float* beta, float* C, int ldc) = dlsym(RTLD_NEXT, "cublasSgemm_v2");
	returnVal = real_cublasSgemm_v2( handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasDgemm_v2(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const double* alpha, const double* A, int lda, const double* B, int ldb, const double* beta, double* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgemm_v2", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasDgemm_v2)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const double* alpha, const double* A, int lda, const double* B, int ldb, const double* beta, double* C, int ldc) = dlsym(RTLD_NEXT, "cublasDgemm_v2");
	returnVal = real_cublasDgemm_v2( handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCgemm_v2(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgemm_v2", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasCgemm_v2)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCgemm_v2");
	returnVal = real_cublasCgemm_v2( handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCgemm3m(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgemm3m", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasCgemm3m)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCgemm3m");
	returnVal = real_cublasCgemm3m( handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCgemm3mEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const void* A, cudaDataType Atype, int lda, const void* B, cudaDataType Btype, int ldb, const cuComplex* beta, void* C, cudaDataType Ctype, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgemm3mEx", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasCgemm3mEx)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const void* A, cudaDataType Atype, int lda, const void* B, cudaDataType Btype, int ldb, const cuComplex* beta, void* C, cudaDataType Ctype, int ldc) = dlsym(RTLD_NEXT, "cublasCgemm3mEx");
	returnVal = real_cublasCgemm3mEx( handle, transa, transb, m, n, k, alpha, A, Atype, lda, B, Btype, ldb, beta, C, Ctype, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasZgemm_v2(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgemm_v2", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasZgemm_v2)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZgemm_v2");
	returnVal = real_cublasZgemm_v2( handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasZgemm3m(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgemm3m", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasZgemm3m)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZgemm3m");
	returnVal = real_cublasZgemm3m( handle, transa, transb, m, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasSgemmEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float* alpha, const void* A, cudaDataType Atype, int lda, const void* B, cudaDataType Btype, int ldb, const float* beta, void* C, cudaDataType Ctype, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgemmEx", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasSgemmEx)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float* alpha, const void* A, cudaDataType Atype, int lda, const void* B, cudaDataType Btype, int ldb, const float* beta, void* C, cudaDataType Ctype, int ldc) = dlsym(RTLD_NEXT, "cublasSgemmEx");
	returnVal = real_cublasSgemmEx( handle, transa, transb, m, n, k, alpha, A, Atype, lda, B, Btype, ldb, beta, C, Ctype, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasGemmEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const void* alpha, const void* A, cudaDataType Atype, int lda, const void* B, cudaDataType Btype, int ldb, const void* beta, void* C, cudaDataType Ctype, int ldc, cublasComputeType_t computeType, cublasGemmAlgo_t algo)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasGemmEx", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasGemmEx)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const void* alpha, const void* A, cudaDataType Atype, int lda, const void* B, cudaDataType Btype, int ldb, const void* beta, void* C, cudaDataType Ctype, int ldc, cublasComputeType_t computeType, cublasGemmAlgo_t algo) = dlsym(RTLD_NEXT, "cublasGemmEx");
	returnVal = real_cublasGemmEx( handle, transa, transb, m, n, k, alpha, A, Atype, lda, B, Btype, ldb, beta, C, Ctype, ldc, computeType, algo);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCgemmEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const void* A, cudaDataType Atype, int lda, const void* B, cudaDataType Btype, int ldb, const cuComplex* beta, void* C, cudaDataType Ctype, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgemmEx", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasCgemmEx)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const void* A, cudaDataType Atype, int lda, const void* B, cudaDataType Btype, int ldb, const cuComplex* beta, void* C, cudaDataType Ctype, int ldc) = dlsym(RTLD_NEXT, "cublasCgemmEx");
	returnVal = real_cublasCgemmEx( handle, transa, transb, m, n, k, alpha, A, Atype, lda, B, Btype, ldb, beta, C, Ctype, ldc);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasUint8gemmBias(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, cublasOperation_t transc, int m, int n, int k, const unsigned char* A, int A_bias, int lda, const unsigned char* B, int B_bias, int ldb, unsigned char* C, int C_bias, int ldc, int C_mult, int C_shift)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasUint8gemmBias", 0, 6, 0, 0);
	cublasStatus_t (*real_cublasUint8gemmBias)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, cublasOperation_t transc, int m, int n, int k, const unsigned char* A, int A_bias, int lda, const unsigned char* B, int B_bias, int ldb, unsigned char* C, int C_bias, int ldc, int C_mult, int C_shift) = dlsym(RTLD_NEXT, "cublasUint8gemmBias");
	returnVal = real_cublasUint8gemmBias( handle, transa, transb, transc, m, n, k, A, A_bias, lda, B, B_bias, ldb, C, C_bias, ldc, C_mult, C_shift);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasSsyrk_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const float* A, int lda, const float* beta, float* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSsyrk_v2", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasSsyrk_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const float* A, int lda, const float* beta, float* C, int ldc) = dlsym(RTLD_NEXT, "cublasSsyrk_v2");
	returnVal = real_cublasSsyrk_v2( handle, uplo, trans, n, k, alpha, A, lda, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasDsyrk_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const double* alpha, const double* A, int lda, const double* beta, double* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDsyrk_v2", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasDsyrk_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const double* alpha, const double* A, int lda, const double* beta, double* C, int ldc) = dlsym(RTLD_NEXT, "cublasDsyrk_v2");
	returnVal = real_cublasDsyrk_v2( handle, uplo, trans, n, k, alpha, A, lda, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasCsyrk_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* beta, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsyrk_v2", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasCsyrk_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCsyrk_v2");
	returnVal = real_cublasCsyrk_v2( handle, uplo, trans, n, k, alpha, A, lda, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasZsyrk_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZsyrk_v2", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasZsyrk_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZsyrk_v2");
	returnVal = real_cublasZsyrk_v2( handle, uplo, trans, n, k, alpha, A, lda, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasCsyrkEx(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const void* A, cudaDataType Atype, int lda, const cuComplex* beta, void* C, cudaDataType Ctype, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsyrkEx", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasCsyrkEx)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const void* A, cudaDataType Atype, int lda, const cuComplex* beta, void* C, cudaDataType Ctype, int ldc) = dlsym(RTLD_NEXT, "cublasCsyrkEx");
	returnVal = real_cublasCsyrkEx( handle, uplo, trans, n, k, alpha, A, Atype, lda, beta, C, Ctype, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasCsyrk3mEx(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const void* A, cudaDataType Atype, int lda, const cuComplex* beta, void* C, cudaDataType Ctype, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsyrk3mEx", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasCsyrk3mEx)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const void* A, cudaDataType Atype, int lda, const cuComplex* beta, void* C, cudaDataType Ctype, int ldc) = dlsym(RTLD_NEXT, "cublasCsyrk3mEx");
	returnVal = real_cublasCsyrk3mEx( handle, uplo, trans, n, k, alpha, A, Atype, lda, beta, C, Ctype, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasCherk_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const cuComplex* A, int lda, const float* beta, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCherk_v2", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasCherk_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const cuComplex* A, int lda, const float* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCherk_v2");
	returnVal = real_cublasCherk_v2( handle, uplo, trans, n, k, alpha, A, lda, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasZherk_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const double* alpha, const cuDoubleComplex* A, int lda, const double* beta, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZherk_v2", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasZherk_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const double* alpha, const cuDoubleComplex* A, int lda, const double* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZherk_v2");
	returnVal = real_cublasZherk_v2( handle, uplo, trans, n, k, alpha, A, lda, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasCherkEx(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const void* A, cudaDataType Atype, int lda, const float* beta, void* C, cudaDataType Ctype, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCherkEx", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasCherkEx)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const void* A, cudaDataType Atype, int lda, const float* beta, void* C, cudaDataType Ctype, int ldc) = dlsym(RTLD_NEXT, "cublasCherkEx");
	returnVal = real_cublasCherkEx( handle, uplo, trans, n, k, alpha, A, Atype, lda, beta, C, Ctype, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasCherk3mEx(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const void* A, cudaDataType Atype, int lda, const float* beta, void* C, cudaDataType Ctype, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCherk3mEx", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasCherk3mEx)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const void* A, cudaDataType Atype, int lda, const float* beta, void* C, cudaDataType Ctype, int ldc) = dlsym(RTLD_NEXT, "cublasCherk3mEx");
	returnVal = real_cublasCherk3mEx( handle, uplo, trans, n, k, alpha, A, Atype, lda, beta, C, Ctype, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasSsyr2k_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const float* A, int lda, const float* B, int ldb, const float* beta, float* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSsyr2k_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasSsyr2k_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const float* A, int lda, const float* B, int ldb, const float* beta, float* C, int ldc) = dlsym(RTLD_NEXT, "cublasSsyr2k_v2");
	returnVal = real_cublasSsyr2k_v2( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasDsyr2k_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const double* alpha, const double* A, int lda, const double* B, int ldb, const double* beta, double* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDsyr2k_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasDsyr2k_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const double* alpha, const double* A, int lda, const double* B, int ldb, const double* beta, double* C, int ldc) = dlsym(RTLD_NEXT, "cublasDsyr2k_v2");
	returnVal = real_cublasDsyr2k_v2( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCsyr2k_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsyr2k_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasCsyr2k_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCsyr2k_v2");
	returnVal = real_cublasCsyr2k_v2( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasZsyr2k_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZsyr2k_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasZsyr2k_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZsyr2k_v2");
	returnVal = real_cublasZsyr2k_v2( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCher2k_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const float* beta, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCher2k_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasCher2k_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const float* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCher2k_v2");
	returnVal = real_cublasCher2k_v2( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasZher2k_v2(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const double* beta, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZher2k_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasZher2k_v2)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const double* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZher2k_v2");
	returnVal = real_cublasZher2k_v2( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasSsyrkx(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const float* A, int lda, const float* B, int ldb, const float* beta, float* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSsyrkx", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasSsyrkx)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const float* alpha, const float* A, int lda, const float* B, int ldb, const float* beta, float* C, int ldc) = dlsym(RTLD_NEXT, "cublasSsyrkx");
	returnVal = real_cublasSsyrkx( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasDsyrkx(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const double* alpha, const double* A, int lda, const double* B, int ldb, const double* beta, double* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDsyrkx", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasDsyrkx)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const double* alpha, const double* A, int lda, const double* B, int ldb, const double* beta, double* C, int ldc) = dlsym(RTLD_NEXT, "cublasDsyrkx");
	returnVal = real_cublasDsyrkx( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCsyrkx(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsyrkx", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasCsyrkx)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCsyrkx");
	returnVal = real_cublasCsyrkx( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasZsyrkx(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZsyrkx", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasZsyrkx)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZsyrkx");
	returnVal = real_cublasZsyrkx( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCherkx(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const float* beta, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCherkx", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasCherkx)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const float* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCherkx");
	returnVal = real_cublasCherkx( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasZherkx(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const double* beta, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZherkx", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasZherkx)(cublasHandle_t handle, cublasFillMode_t uplo, cublasOperation_t trans, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const double* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZherkx");
	returnVal = real_cublasZherkx( handle, uplo, trans, n, k, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, n, k, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasSsymm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const float* alpha, const float* A, int lda, const float* B, int ldb, const float* beta, float* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSsymm_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasSsymm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const float* alpha, const float* A, int lda, const float* B, int ldb, const float* beta, float* C, int ldc) = dlsym(RTLD_NEXT, "cublasSsymm_v2");
	returnVal = real_cublasSsymm_v2( handle, side, uplo, m, n, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasDsymm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const double* alpha, const double* A, int lda, const double* B, int ldb, const double* beta, double* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDsymm_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasDsymm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const double* alpha, const double* A, int lda, const double* B, int ldb, const double* beta, double* C, int ldc) = dlsym(RTLD_NEXT, "cublasDsymm_v2");
	returnVal = real_cublasDsymm_v2( handle, side, uplo, m, n, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCsymm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCsymm_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasCsymm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCsymm_v2");
	returnVal = real_cublasCsymm_v2( handle, side, uplo, m, n, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasZsymm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZsymm_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasZsymm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZsymm_v2");
	returnVal = real_cublasZsymm_v2( handle, side, uplo, m, n, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasChemm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasChemm_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasChemm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, const cuComplex* beta, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasChemm_v2");
	returnVal = real_cublasChemm_v2( handle, side, uplo, m, n, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasZhemm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZhemm_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasZhemm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZhemm_v2");
	returnVal = real_cublasZhemm_v2( handle, side, uplo, m, n, alpha, A, lda, B, ldb, beta, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasStrsm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const float* alpha, const float* A, int lda, float* B, int ldb)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasStrsm_v2", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasStrsm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const float* alpha, const float* A, int lda, float* B, int ldb) = dlsym(RTLD_NEXT, "cublasStrsm_v2");
	returnVal = real_cublasStrsm_v2( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb);
	armpl_logging_leave(&logger, m, n, lda, ldb);
	return returnVal;
}
cublasStatus_t cublasDtrsm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const double* alpha, const double* A, int lda, double* B, int ldb)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDtrsm_v2", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasDtrsm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const double* alpha, const double* A, int lda, double* B, int ldb) = dlsym(RTLD_NEXT, "cublasDtrsm_v2");
	returnVal = real_cublasDtrsm_v2( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb);
	armpl_logging_leave(&logger, m, n, lda, ldb);
	return returnVal;
}
cublasStatus_t cublasCtrsm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, cuComplex* B, int ldb)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCtrsm_v2", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasCtrsm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, cuComplex* B, int ldb) = dlsym(RTLD_NEXT, "cublasCtrsm_v2");
	returnVal = real_cublasCtrsm_v2( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb);
	armpl_logging_leave(&logger, m, n, lda, ldb);
	return returnVal;
}
cublasStatus_t cublasZtrsm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, cuDoubleComplex* B, int ldb)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZtrsm_v2", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasZtrsm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, cuDoubleComplex* B, int ldb) = dlsym(RTLD_NEXT, "cublasZtrsm_v2");
	returnVal = real_cublasZtrsm_v2( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb);
	armpl_logging_leave(&logger, m, n, lda, ldb);
	return returnVal;
}
cublasStatus_t cublasStrmm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const float* alpha, const float* A, int lda, const float* B, int ldb, float* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasStrmm_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasStrmm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const float* alpha, const float* A, int lda, const float* B, int ldb, float* C, int ldc) = dlsym(RTLD_NEXT, "cublasStrmm_v2");
	returnVal = real_cublasStrmm_v2( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasDtrmm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const double* alpha, const double* A, int lda, const double* B, int ldb, double* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDtrmm_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasDtrmm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const double* alpha, const double* A, int lda, const double* B, int ldb, double* C, int ldc) = dlsym(RTLD_NEXT, "cublasDtrmm_v2");
	returnVal = real_cublasDtrmm_v2( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCtrmm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCtrmm_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasCtrmm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* B, int ldb, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCtrmm_v2");
	returnVal = real_cublasCtrmm_v2( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasZtrmm_v2(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZtrmm_v2", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasZtrmm_v2)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* B, int ldb, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZtrmm_v2");
	returnVal = real_cublasZtrmm_v2( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasSgemmBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float* alpha, const float* const Aarray[], int lda, const float* const Barray[], int ldb, const float* beta, float* const Carray[], int ldc, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgemmBatched", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasSgemmBatched)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float* alpha, const float* const Aarray[], int lda, const float* const Barray[], int ldb, const float* beta, float* const Carray[], int ldc, int batchCount) = dlsym(RTLD_NEXT, "cublasSgemmBatched");
	returnVal = real_cublasSgemmBatched( handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasDgemmBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const double* alpha, const double* const Aarray[], int lda, const double* const Barray[], int ldb, const double* beta, double* const Carray[], int ldc, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgemmBatched", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasDgemmBatched)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const double* alpha, const double* const Aarray[], int lda, const double* const Barray[], int ldb, const double* beta, double* const Carray[], int ldc, int batchCount) = dlsym(RTLD_NEXT, "cublasDgemmBatched");
	returnVal = real_cublasDgemmBatched( handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasCgemmBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* const Aarray[], int lda, const cuComplex* const Barray[], int ldb, const cuComplex* beta, cuComplex* const Carray[], int ldc, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgemmBatched", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasCgemmBatched)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* const Aarray[], int lda, const cuComplex* const Barray[], int ldb, const cuComplex* beta, cuComplex* const Carray[], int ldc, int batchCount) = dlsym(RTLD_NEXT, "cublasCgemmBatched");
	returnVal = real_cublasCgemmBatched( handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasCgemm3mBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* const Aarray[], int lda, const cuComplex* const Barray[], int ldb, const cuComplex* beta, cuComplex* const Carray[], int ldc, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgemm3mBatched", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasCgemm3mBatched)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* const Aarray[], int lda, const cuComplex* const Barray[], int ldb, const cuComplex* beta, cuComplex* const Carray[], int ldc, int batchCount) = dlsym(RTLD_NEXT, "cublasCgemm3mBatched");
	returnVal = real_cublasCgemm3mBatched( handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasZgemmBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* const Aarray[], int lda, const cuDoubleComplex* const Barray[], int ldb, const cuDoubleComplex* beta, cuDoubleComplex* const Carray[], int ldc, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgemmBatched", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasZgemmBatched)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* const Aarray[], int lda, const cuDoubleComplex* const Barray[], int ldb, const cuDoubleComplex* beta, cuDoubleComplex* const Carray[], int ldc, int batchCount) = dlsym(RTLD_NEXT, "cublasZgemmBatched");
	returnVal = real_cublasZgemmBatched( handle, transa, transb, m, n, k, alpha, Aarray, lda, Barray, ldb, beta, Carray, ldc, batchCount);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasGemmBatchedEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const void* alpha, const void* const Aarray[], cudaDataType Atype, int lda, const void* const Barray[], cudaDataType Btype, int ldb, const void* beta, void* const Carray[], cudaDataType Ctype, int ldc, int batchCount, cublasComputeType_t computeType, cublasGemmAlgo_t algo)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasGemmBatchedEx", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasGemmBatchedEx)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const void* alpha, const void* const Aarray[], cudaDataType Atype, int lda, const void* const Barray[], cudaDataType Btype, int ldb, const void* beta, void* const Carray[], cudaDataType Ctype, int ldc, int batchCount, cublasComputeType_t computeType, cublasGemmAlgo_t algo) = dlsym(RTLD_NEXT, "cublasGemmBatchedEx");
	returnVal = real_cublasGemmBatchedEx( handle, transa, transb, m, n, k, alpha, Aarray, Atype, lda, Barray, Btype, ldb, beta, Carray, Ctype, ldc, batchCount, computeType, algo);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasGemmStridedBatchedEx(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const void* alpha, const void* A, cudaDataType Atype, int lda, long long int strideA, const void* B, cudaDataType Btype, int ldb, long long int strideB, const void* beta, void* C, cudaDataType Ctype, int ldc, long long int strideC, int batchCount, cublasComputeType_t computeType, cublasGemmAlgo_t algo)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasGemmStridedBatchedEx", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasGemmStridedBatchedEx)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const void* alpha, const void* A, cudaDataType Atype, int lda, long long int strideA, const void* B, cudaDataType Btype, int ldb, long long int strideB, const void* beta, void* C, cudaDataType Ctype, int ldc, long long int strideC, int batchCount, cublasComputeType_t computeType, cublasGemmAlgo_t algo) = dlsym(RTLD_NEXT, "cublasGemmStridedBatchedEx");
	returnVal = real_cublasGemmStridedBatchedEx( handle, transa, transb, m, n, k, alpha, A, Atype, lda, strideA, B, Btype, ldb, strideB, beta, C, Ctype, ldc, strideC, batchCount, computeType, algo);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasSgemmStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float* alpha, const float* A, int lda, long long int strideA, const float* B, int ldb, long long int strideB, const float* beta, float* C, int ldc, long long int strideC, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgemmStridedBatched", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasSgemmStridedBatched)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const float* alpha, const float* A, int lda, long long int strideA, const float* B, int ldb, long long int strideB, const float* beta, float* C, int ldc, long long int strideC, int batchCount) = dlsym(RTLD_NEXT, "cublasSgemmStridedBatched");
	returnVal = real_cublasSgemmStridedBatched( handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasDgemmStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const double* alpha, const double* A, int lda, long long int strideA, const double* B, int ldb, long long int strideB, const double* beta, double* C, int ldc, long long int strideC, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgemmStridedBatched", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasDgemmStridedBatched)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const double* alpha, const double* A, int lda, long long int strideA, const double* B, int ldb, long long int strideB, const double* beta, double* C, int ldc, long long int strideC, int batchCount) = dlsym(RTLD_NEXT, "cublasDgemmStridedBatched");
	returnVal = real_cublasDgemmStridedBatched( handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasCgemmStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, long long int strideA, const cuComplex* B, int ldb, long long int strideB, const cuComplex* beta, cuComplex* C, int ldc, long long int strideC, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgemmStridedBatched", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasCgemmStridedBatched)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, long long int strideA, const cuComplex* B, int ldb, long long int strideB, const cuComplex* beta, cuComplex* C, int ldc, long long int strideC, int batchCount) = dlsym(RTLD_NEXT, "cublasCgemmStridedBatched");
	returnVal = real_cublasCgemmStridedBatched( handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasCgemm3mStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, long long int strideA, const cuComplex* B, int ldb, long long int strideB, const cuComplex* beta, cuComplex* C, int ldc, long long int strideC, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgemm3mStridedBatched", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasCgemm3mStridedBatched)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuComplex* alpha, const cuComplex* A, int lda, long long int strideA, const cuComplex* B, int ldb, long long int strideB, const cuComplex* beta, cuComplex* C, int ldc, long long int strideC, int batchCount) = dlsym(RTLD_NEXT, "cublasCgemm3mStridedBatched");
	returnVal = real_cublasCgemm3mStridedBatched( handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasZgemmStridedBatched(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, long long int strideA, const cuDoubleComplex* B, int ldb, long long int strideB, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc, long long int strideC, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgemmStridedBatched", 0, 7, 0, 0);
	cublasStatus_t (*real_cublasZgemmStridedBatched)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, int k, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, long long int strideA, const cuDoubleComplex* B, int ldb, long long int strideB, const cuDoubleComplex* beta, cuDoubleComplex* C, int ldc, long long int strideC, int batchCount) = dlsym(RTLD_NEXT, "cublasZgemmStridedBatched");
	returnVal = real_cublasZgemmStridedBatched( handle, transa, transb, m, n, k, alpha, A, lda, strideA, B, ldb, strideB, beta, C, ldc, strideC, batchCount);
	armpl_logging_leave(&logger, m, n, k, lda, ldb, ldc, batchCount);
	return returnVal;
}
cublasStatus_t cublasSgeam(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, const float* alpha, const float* A, int lda, const float* beta, const float* B, int ldb, float* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgeam", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasSgeam)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, const float* alpha, const float* A, int lda, const float* beta, const float* B, int ldb, float* C, int ldc) = dlsym(RTLD_NEXT, "cublasSgeam");
	returnVal = real_cublasSgeam( handle, transa, transb, m, n, alpha, A, lda, beta, B, ldb, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasDgeam(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, const double* alpha, const double* A, int lda, const double* beta, const double* B, int ldb, double* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgeam", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasDgeam)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, const double* alpha, const double* A, int lda, const double* beta, const double* B, int ldb, double* C, int ldc) = dlsym(RTLD_NEXT, "cublasDgeam");
	returnVal = real_cublasDgeam( handle, transa, transb, m, n, alpha, A, lda, beta, B, ldb, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasCgeam(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* beta, const cuComplex* B, int ldb, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgeam", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasCgeam)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, const cuComplex* alpha, const cuComplex* A, int lda, const cuComplex* beta, const cuComplex* B, int ldb, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCgeam");
	returnVal = real_cublasCgeam( handle, transa, transb, m, n, alpha, A, lda, beta, B, ldb, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasZgeam(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* beta, const cuDoubleComplex* B, int ldb, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgeam", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasZgeam)(cublasHandle_t handle, cublasOperation_t transa, cublasOperation_t transb, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* A, int lda, const cuDoubleComplex* beta, const cuDoubleComplex* B, int ldb, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZgeam");
	returnVal = real_cublasZgeam( handle, transa, transb, m, n, alpha, A, lda, beta, B, ldb, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldb, ldc);
	return returnVal;
}
cublasStatus_t cublasSgetrfBatched(cublasHandle_t handle, int n, float* const A[], int lda, int* P, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgetrfBatched", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasSgetrfBatched)(cublasHandle_t handle, int n, float* const A[], int lda, int* P, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasSgetrfBatched");
	returnVal = real_cublasSgetrfBatched( handle, n, A, lda, P, info, batchSize);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasDgetrfBatched(cublasHandle_t handle, int n, double* const A[], int lda, int* P, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgetrfBatched", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasDgetrfBatched)(cublasHandle_t handle, int n, double* const A[], int lda, int* P, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasDgetrfBatched");
	returnVal = real_cublasDgetrfBatched( handle, n, A, lda, P, info, batchSize);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasCgetrfBatched(cublasHandle_t handle, int n, cuComplex* const A[], int lda, int* P, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgetrfBatched", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasCgetrfBatched)(cublasHandle_t handle, int n, cuComplex* const A[], int lda, int* P, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasCgetrfBatched");
	returnVal = real_cublasCgetrfBatched( handle, n, A, lda, P, info, batchSize);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasZgetrfBatched(cublasHandle_t handle, int n, cuDoubleComplex* const A[], int lda, int* P, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgetrfBatched", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasZgetrfBatched)(cublasHandle_t handle, int n, cuDoubleComplex* const A[], int lda, int* P, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasZgetrfBatched");
	returnVal = real_cublasZgetrfBatched( handle, n, A, lda, P, info, batchSize);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasSgetriBatched(cublasHandle_t handle, int n, const float* const A[], int lda, const int* P, float* const C[], int ldc, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgetriBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasSgetriBatched)(cublasHandle_t handle, int n, const float* const A[], int lda, const int* P, float* const C[], int ldc, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasSgetriBatched");
	returnVal = real_cublasSgetriBatched( handle, n, A, lda, P, C, ldc, info, batchSize);
	armpl_logging_leave(&logger, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasDgetriBatched(cublasHandle_t handle, int n, const double* const A[], int lda, const int* P, double* const C[], int ldc, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgetriBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasDgetriBatched)(cublasHandle_t handle, int n, const double* const A[], int lda, const int* P, double* const C[], int ldc, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasDgetriBatched");
	returnVal = real_cublasDgetriBatched( handle, n, A, lda, P, C, ldc, info, batchSize);
	armpl_logging_leave(&logger, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasCgetriBatched(cublasHandle_t handle, int n, const cuComplex* const A[], int lda, const int* P, cuComplex* const C[], int ldc, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgetriBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasCgetriBatched)(cublasHandle_t handle, int n, const cuComplex* const A[], int lda, const int* P, cuComplex* const C[], int ldc, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasCgetriBatched");
	returnVal = real_cublasCgetriBatched( handle, n, A, lda, P, C, ldc, info, batchSize);
	armpl_logging_leave(&logger, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasZgetriBatched(cublasHandle_t handle, int n, const cuDoubleComplex* const A[], int lda, const int* P, cuDoubleComplex* const C[], int ldc, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgetriBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasZgetriBatched)(cublasHandle_t handle, int n, const cuDoubleComplex* const A[], int lda, const int* P, cuDoubleComplex* const C[], int ldc, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasZgetriBatched");
	returnVal = real_cublasZgetriBatched( handle, n, A, lda, P, C, ldc, info, batchSize);
	armpl_logging_leave(&logger, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasSgetrsBatched(cublasHandle_t handle, cublasOperation_t trans, int n, int nrhs, const float* const Aarray[], int lda, const int* devIpiv, float* const Barray[], int ldb, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgetrsBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasSgetrsBatched)(cublasHandle_t handle, cublasOperation_t trans, int n, int nrhs, const float* const Aarray[], int lda, const int* devIpiv, float* const Barray[], int ldb, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasSgetrsBatched");
	returnVal = real_cublasSgetrsBatched( handle, trans, n, nrhs, Aarray, lda, devIpiv, Barray, ldb, info, batchSize);
	armpl_logging_leave(&logger, n, lda, ldb);
	return returnVal;
}
cublasStatus_t cublasDgetrsBatched(cublasHandle_t handle, cublasOperation_t trans, int n, int nrhs, const double* const Aarray[], int lda, const int* devIpiv, double* const Barray[], int ldb, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgetrsBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasDgetrsBatched)(cublasHandle_t handle, cublasOperation_t trans, int n, int nrhs, const double* const Aarray[], int lda, const int* devIpiv, double* const Barray[], int ldb, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasDgetrsBatched");
	returnVal = real_cublasDgetrsBatched( handle, trans, n, nrhs, Aarray, lda, devIpiv, Barray, ldb, info, batchSize);
	armpl_logging_leave(&logger, n, lda, ldb);
	return returnVal;
}
cublasStatus_t cublasCgetrsBatched(cublasHandle_t handle, cublasOperation_t trans, int n, int nrhs, const cuComplex* const Aarray[], int lda, const int* devIpiv, cuComplex* const Barray[], int ldb, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgetrsBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasCgetrsBatched)(cublasHandle_t handle, cublasOperation_t trans, int n, int nrhs, const cuComplex* const Aarray[], int lda, const int* devIpiv, cuComplex* const Barray[], int ldb, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasCgetrsBatched");
	returnVal = real_cublasCgetrsBatched( handle, trans, n, nrhs, Aarray, lda, devIpiv, Barray, ldb, info, batchSize);
	armpl_logging_leave(&logger, n, lda, ldb);
	return returnVal;
}
cublasStatus_t cublasZgetrsBatched(cublasHandle_t handle, cublasOperation_t trans, int n, int nrhs, const cuDoubleComplex* const Aarray[], int lda, const int* devIpiv, cuDoubleComplex* const Barray[], int ldb, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgetrsBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasZgetrsBatched)(cublasHandle_t handle, cublasOperation_t trans, int n, int nrhs, const cuDoubleComplex* const Aarray[], int lda, const int* devIpiv, cuDoubleComplex* const Barray[], int ldb, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasZgetrsBatched");
	returnVal = real_cublasZgetrsBatched( handle, trans, n, nrhs, Aarray, lda, devIpiv, Barray, ldb, info, batchSize);
	armpl_logging_leave(&logger, n, lda, ldb);
	return returnVal;
}
cublasStatus_t cublasStrsmBatched(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const float* alpha, const float* const A[], int lda, float* const B[], int ldb, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasStrsmBatched", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasStrsmBatched)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const float* alpha, const float* const A[], int lda, float* const B[], int ldb, int batchCount) = dlsym(RTLD_NEXT, "cublasStrsmBatched");
	returnVal = real_cublasStrsmBatched( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb, batchCount);
	armpl_logging_leave(&logger, m, n, lda, ldb, batchCount);
	return returnVal;
}
cublasStatus_t cublasDtrsmBatched(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const double* alpha, const double* const A[], int lda, double* const B[], int ldb, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDtrsmBatched", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasDtrsmBatched)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const double* alpha, const double* const A[], int lda, double* const B[], int ldb, int batchCount) = dlsym(RTLD_NEXT, "cublasDtrsmBatched");
	returnVal = real_cublasDtrsmBatched( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb, batchCount);
	armpl_logging_leave(&logger, m, n, lda, ldb, batchCount);
	return returnVal;
}
cublasStatus_t cublasCtrsmBatched(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuComplex* alpha, const cuComplex* const A[], int lda, cuComplex* const B[], int ldb, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCtrsmBatched", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasCtrsmBatched)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuComplex* alpha, const cuComplex* const A[], int lda, cuComplex* const B[], int ldb, int batchCount) = dlsym(RTLD_NEXT, "cublasCtrsmBatched");
	returnVal = real_cublasCtrsmBatched( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb, batchCount);
	armpl_logging_leave(&logger, m, n, lda, ldb, batchCount);
	return returnVal;
}
cublasStatus_t cublasZtrsmBatched(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* const A[], int lda, cuDoubleComplex* const B[], int ldb, int batchCount)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZtrsmBatched", 0, 5, 0, 0);
	cublasStatus_t (*real_cublasZtrsmBatched)(cublasHandle_t handle, cublasSideMode_t side, cublasFillMode_t uplo, cublasOperation_t trans, cublasDiagType_t diag, int m, int n, const cuDoubleComplex* alpha, const cuDoubleComplex* const A[], int lda, cuDoubleComplex* const B[], int ldb, int batchCount) = dlsym(RTLD_NEXT, "cublasZtrsmBatched");
	returnVal = real_cublasZtrsmBatched( handle, side, uplo, trans, diag, m, n, alpha, A, lda, B, ldb, batchCount);
	armpl_logging_leave(&logger, m, n, lda, ldb, batchCount);
	return returnVal;
}
cublasStatus_t cublasSmatinvBatched(cublasHandle_t handle, int n, const float* const A[], int lda, float* const Ainv[], int lda_inv, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSmatinvBatched", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasSmatinvBatched)(cublasHandle_t handle, int n, const float* const A[], int lda, float* const Ainv[], int lda_inv, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasSmatinvBatched");
	returnVal = real_cublasSmatinvBatched( handle, n, A, lda, Ainv, lda_inv, info, batchSize);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasDmatinvBatched(cublasHandle_t handle, int n, const double* const A[], int lda, double* const Ainv[], int lda_inv, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDmatinvBatched", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasDmatinvBatched)(cublasHandle_t handle, int n, const double* const A[], int lda, double* const Ainv[], int lda_inv, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasDmatinvBatched");
	returnVal = real_cublasDmatinvBatched( handle, n, A, lda, Ainv, lda_inv, info, batchSize);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasCmatinvBatched(cublasHandle_t handle, int n, const cuComplex* const A[], int lda, cuComplex* const Ainv[], int lda_inv, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCmatinvBatched", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasCmatinvBatched)(cublasHandle_t handle, int n, const cuComplex* const A[], int lda, cuComplex* const Ainv[], int lda_inv, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasCmatinvBatched");
	returnVal = real_cublasCmatinvBatched( handle, n, A, lda, Ainv, lda_inv, info, batchSize);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasZmatinvBatched(cublasHandle_t handle, int n, const cuDoubleComplex* const A[], int lda, cuDoubleComplex* const Ainv[], int lda_inv, int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZmatinvBatched", 0, 2, 0, 0);
	cublasStatus_t (*real_cublasZmatinvBatched)(cublasHandle_t handle, int n, const cuDoubleComplex* const A[], int lda, cuDoubleComplex* const Ainv[], int lda_inv, int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasZmatinvBatched");
	returnVal = real_cublasZmatinvBatched( handle, n, A, lda, Ainv, lda_inv, info, batchSize);
	armpl_logging_leave(&logger, n, lda);
	return returnVal;
}
cublasStatus_t cublasSgeqrfBatched(cublasHandle_t handle, int m, int n, float* const Aarray[], int lda, float* const TauArray[], int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgeqrfBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasSgeqrfBatched)(cublasHandle_t handle, int m, int n, float* const Aarray[], int lda, float* const TauArray[], int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasSgeqrfBatched");
	returnVal = real_cublasSgeqrfBatched( handle, m, n, Aarray, lda, TauArray, info, batchSize);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasDgeqrfBatched(cublasHandle_t handle, int m, int n, double* const Aarray[], int lda, double* const TauArray[], int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgeqrfBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasDgeqrfBatched)(cublasHandle_t handle, int m, int n, double* const Aarray[], int lda, double* const TauArray[], int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasDgeqrfBatched");
	returnVal = real_cublasDgeqrfBatched( handle, m, n, Aarray, lda, TauArray, info, batchSize);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasCgeqrfBatched(cublasHandle_t handle, int m, int n, cuComplex* const Aarray[], int lda, cuComplex* const TauArray[], int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgeqrfBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasCgeqrfBatched)(cublasHandle_t handle, int m, int n, cuComplex* const Aarray[], int lda, cuComplex* const TauArray[], int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasCgeqrfBatched");
	returnVal = real_cublasCgeqrfBatched( handle, m, n, Aarray, lda, TauArray, info, batchSize);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasZgeqrfBatched(cublasHandle_t handle, int m, int n, cuDoubleComplex* const Aarray[], int lda, cuDoubleComplex* const TauArray[], int* info, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgeqrfBatched", 0, 3, 0, 0);
	cublasStatus_t (*real_cublasZgeqrfBatched)(cublasHandle_t handle, int m, int n, cuDoubleComplex* const Aarray[], int lda, cuDoubleComplex* const TauArray[], int* info, int batchSize) = dlsym(RTLD_NEXT, "cublasZgeqrfBatched");
	returnVal = real_cublasZgeqrfBatched( handle, m, n, Aarray, lda, TauArray, info, batchSize);
	armpl_logging_leave(&logger, m, n, lda);
	return returnVal;
}
cublasStatus_t cublasSgelsBatched(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int nrhs, float* const Aarray[], int lda, float* const Carray[], int ldc, int* info, int* devInfoArray, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSgelsBatched", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasSgelsBatched)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int nrhs, float* const Aarray[], int lda, float* const Carray[], int ldc, int* info, int* devInfoArray, int batchSize) = dlsym(RTLD_NEXT, "cublasSgelsBatched");
	returnVal = real_cublasSgelsBatched( handle, trans, m, n, nrhs, Aarray, lda, Carray, ldc, info, devInfoArray, batchSize);
	armpl_logging_leave(&logger, m, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasDgelsBatched(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int nrhs, double* const Aarray[], int lda, double* const Carray[], int ldc, int* info, int* devInfoArray, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDgelsBatched", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasDgelsBatched)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int nrhs, double* const Aarray[], int lda, double* const Carray[], int ldc, int* info, int* devInfoArray, int batchSize) = dlsym(RTLD_NEXT, "cublasDgelsBatched");
	returnVal = real_cublasDgelsBatched( handle, trans, m, n, nrhs, Aarray, lda, Carray, ldc, info, devInfoArray, batchSize);
	armpl_logging_leave(&logger, m, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasCgelsBatched(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int nrhs, cuComplex* const Aarray[], int lda, cuComplex* const Carray[], int ldc, int* info, int* devInfoArray, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCgelsBatched", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasCgelsBatched)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int nrhs, cuComplex* const Aarray[], int lda, cuComplex* const Carray[], int ldc, int* info, int* devInfoArray, int batchSize) = dlsym(RTLD_NEXT, "cublasCgelsBatched");
	returnVal = real_cublasCgelsBatched( handle, trans, m, n, nrhs, Aarray, lda, Carray, ldc, info, devInfoArray, batchSize);
	armpl_logging_leave(&logger, m, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasZgelsBatched(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int nrhs, cuDoubleComplex* const Aarray[], int lda, cuDoubleComplex* const Carray[], int ldc, int* info, int* devInfoArray, int batchSize)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZgelsBatched", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasZgelsBatched)(cublasHandle_t handle, cublasOperation_t trans, int m, int n, int nrhs, cuDoubleComplex* const Aarray[], int lda, cuDoubleComplex* const Carray[], int ldc, int* info, int* devInfoArray, int batchSize) = dlsym(RTLD_NEXT, "cublasZgelsBatched");
	returnVal = real_cublasZgelsBatched( handle, trans, m, n, nrhs, Aarray, lda, Carray, ldc, info, devInfoArray, batchSize);
	armpl_logging_leave(&logger, m, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasSdgmm(cublasHandle_t handle, cublasSideMode_t mode, int m, int n, const float* A, int lda, const float* x, int incx, float* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasSdgmm", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasSdgmm)(cublasHandle_t handle, cublasSideMode_t mode, int m, int n, const float* A, int lda, const float* x, int incx, float* C, int ldc) = dlsym(RTLD_NEXT, "cublasSdgmm");
	returnVal = real_cublasSdgmm( handle, mode, m, n, A, lda, x, incx, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasDdgmm(cublasHandle_t handle, cublasSideMode_t mode, int m, int n, const double* A, int lda, const double* x, int incx, double* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasDdgmm", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasDdgmm)(cublasHandle_t handle, cublasSideMode_t mode, int m, int n, const double* A, int lda, const double* x, int incx, double* C, int ldc) = dlsym(RTLD_NEXT, "cublasDdgmm");
	returnVal = real_cublasDdgmm( handle, mode, m, n, A, lda, x, incx, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasCdgmm(cublasHandle_t handle, cublasSideMode_t mode, int m, int n, const cuComplex* A, int lda, const cuComplex* x, int incx, cuComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasCdgmm", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasCdgmm)(cublasHandle_t handle, cublasSideMode_t mode, int m, int n, const cuComplex* A, int lda, const cuComplex* x, int incx, cuComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasCdgmm");
	returnVal = real_cublasCdgmm( handle, mode, m, n, A, lda, x, incx, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldc);
	return returnVal;
}
cublasStatus_t cublasZdgmm(cublasHandle_t handle, cublasSideMode_t mode, int m, int n, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, cuDoubleComplex* C, int ldc)
{
	cublasStatus_t returnVal;
	armpl_logging_struct logger;
	armpl_logging_enter(&logger, "cublasZdgmm", 0, 4, 0, 0);
	cublasStatus_t (*real_cublasZdgmm)(cublasHandle_t handle, cublasSideMode_t mode, int m, int n, const cuDoubleComplex* A, int lda, const cuDoubleComplex* x, int incx, cuDoubleComplex* C, int ldc) = dlsym(RTLD_NEXT, "cublasZdgmm");
	returnVal = real_cublasZdgmm( handle, mode, m, n, A, lda, x, incx, C, ldc);
	armpl_logging_leave(&logger, m, n, lda, ldc);
	return returnVal;
}
