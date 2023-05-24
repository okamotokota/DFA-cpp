/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: DFA.h
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 24-May-2023 19:02:56
 */

#ifndef DFA_H
#define DFA_H

/* Include Files */
#include "DFA_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void DFA(const double data[500], double scmin, double scmax,
                double scres, double *alpha, emxArray_real_T *dfa_out);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for DFA.h
 *
 * [EOF]
 */
