#pragma once
#include "matrix.h"
#include "mex.h"
#define TESTMATLAB_EXPORTS
#ifdef TESTMATLAB_EXPORTS
#define MEX_FUNCTION_API __declspec(dllexport)
#else
#define MEX_FUNCTION_API __declspec(dllimport)
#endif
MEX_FUNCTION_API void mexFunction(int nlhs, mxArray* plhs[], int nrhs, mxArray* prhs[]);
