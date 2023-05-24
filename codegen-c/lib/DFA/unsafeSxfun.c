/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: unsafeSxfun.c
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 24-May-2023 19:02:56
 */

/* Include Files */
#include "unsafeSxfun.h"
#include "DFA_emxutil.h"
#include "DFA_rtwutil.h"
#include "DFA_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : emxArray_real_T *in1
 *                const double in3[500]
 *                int in4
 *                int in5
 *                const emxArray_real_T *in6
 * Return Type  : void
 */
void binary_expand_op(emxArray_real_T *in1, const double in3[500], int in4,
                      int in5, const emxArray_real_T *in6)
{
  emxArray_real_T *b_in3;
  const double *in6_data;
  double *in1_data;
  double *in3_data;
  int i;
  int loop_ub;
  int stride_0_1;
  int stride_1_1;
  in6_data = in6->data;
  emxInit_real_T(&b_in3, 2);
  i = b_in3->size[0] * b_in3->size[1];
  b_in3->size[0] = 1;
  stride_0_1 = (in5 - in4) + 1;
  if (in6->size[1] == 1) {
    loop_ub = stride_0_1;
  } else {
    loop_ub = in6->size[1];
  }
  b_in3->size[1] = loop_ub;
  emxEnsureCapacity_real_T(b_in3, i);
  in3_data = b_in3->data;
  stride_0_1 = (stride_0_1 != 1);
  stride_1_1 = (in6->size[1] != 1);
  for (i = 0; i < loop_ub; i++) {
    in3_data[i] = in3[in4 + i * stride_0_1] - in6_data[i * stride_1_1];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = 1;
  in1->size[1] = b_in3->size[1];
  emxEnsureCapacity_real_T(in1, i);
  in1_data = in1->data;
  loop_ub = b_in3->size[1];
  for (i = 0; i < loop_ub; i++) {
    double varargin_1;
    varargin_1 = in3_data[i];
    in1_data[i] = rt_powd_snf(varargin_1, 2.0);
  }
  emxFree_real_T(&b_in3);
}

/*
 * File trailer for unsafeSxfun.c
 *
 * [EOF]
 */
