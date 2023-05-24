//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: unsafeSxfun.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 24-May-2023 19:50:41
//

// Include Files
#include "unsafeSxfun.h"
#include "DFA_rtwutil.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
//
// Arguments    : coder::array<double, 2U> &in1
//                const double in3[500]
//                int in4
//                int in5
//                const coder::array<double, 2U> &in6
// Return Type  : void
//
void binary_expand_op(coder::array<double, 2U> &in1, const double in3[500],
                      int in4, int in5, const coder::array<double, 2U> &in6)
{
  coder::array<double, 2U> b_in3;
  int i;
  int loop_ub;
  int stride_0_1;
  int stride_1_1;
  i = (in5 - in4) + 1;
  if (in6.size(1) == 1) {
    loop_ub = i;
  } else {
    loop_ub = in6.size(1);
  }
  b_in3.set_size(1, loop_ub);
  stride_0_1 = (i != 1);
  stride_1_1 = (in6.size(1) != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in3[i] = in3[in4 + i * stride_0_1] - in6[i * stride_1_1];
  }
  in1.set_size(1, b_in3.size(1));
  loop_ub = b_in3.size(1);
  for (i = 0; i < loop_ub; i++) {
    double varargin_1;
    varargin_1 = b_in3[i];
    in1[i] = rt_powd_snf(varargin_1, 2.0);
  }
}

//
// File trailer for unsafeSxfun.cpp
//
// [EOF]
//
