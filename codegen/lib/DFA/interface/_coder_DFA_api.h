/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_DFA_api.h
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 25-May-2023 05:01:39
 */

#ifndef _CODER_DFA_API_H
#define _CODER_DFA_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void DFA(real_T data_dfa[500], real_T scmin, real_T scmax, real_T scres,
         real_T *alpha, emxArray_real_T *dfa_out);

void DFA_api(const mxArray *const prhs[4], int32_T nlhs,
             const mxArray *plhs[2]);

void DFA_atexit(void);

void DFA_initialize(void);

void DFA_terminate(void);

void DFA_xil_shutdown(void);

void DFA_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_DFA_api.h
 *
 * [EOF]
 */
