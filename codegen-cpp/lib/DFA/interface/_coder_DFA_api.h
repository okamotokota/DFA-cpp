//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_DFA_api.h
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 24-May-2023 19:50:41
//

#ifndef _CODER_DFA_API_H
#define _CODER_DFA_API_H

// Include Files
#include "coder_array_mex.h"
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void DFA(real_T data[500], real_T scmin, real_T scmax, real_T scres,
         real_T *alpha, coder::array<real_T, 2U> *dfa_out);

void DFA_api(const mxArray *const prhs[4], int32_T nlhs,
             const mxArray *plhs[2]);

void DFA_atexit();

void DFA_initialize();

void DFA_terminate();

void DFA_xil_shutdown();

void DFA_xil_terminate();

#endif
//
// File trailer for _coder_DFA_api.h
//
// [EOF]
//
