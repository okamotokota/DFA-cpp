//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// polyval.cpp
//
// Code generation for function 'polyval'
//

// Include files
#include "polyval.h"
#include "DFA_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRTEInfo
    mb_emlrtRTEI{
        33,        // lineNo
        20,        // colNo
        "polyval", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/polyfun/"
        "polyval.m" // pName
    };

static emlrtRTEInfo
    nb_emlrtRTEI{
        37,        // lineNo
        5,         // colNo
        "polyval", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/polyfun/"
        "polyval.m" // pName
    };

static emlrtRTEInfo
    ob_emlrtRTEI{
        39,        // lineNo
        9,         // colNo
        "polyval", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/polyfun/"
        "polyval.m" // pName
    };

static emlrtRTEInfo
    rb_emlrtRTEI{
        39,        // lineNo
        13,        // colNo
        "polyval", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/polyfun/"
        "polyval.m" // pName
    };

static emlrtRSInfo
    jc_emlrtRSI{
        39,        // lineNo
        "polyval", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/polyfun/"
        "polyval.m" // pathName
    };

// Function Declarations
static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const real_T in3[2]);

// Function Definitions
static void binary_expand_op(const emlrtStack &sp,
                             coder::array<real_T, 2U> &in1,
                             const coder::array<real_T, 2U> &in2,
                             const real_T in3[2])
{
  coder::array<real_T, 2U> b_in2;
  real_T b_in3;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in3 = in3[1];
  if (in1.size(1) == 1) {
    loop_ub = in2.size(1);
  } else {
    loop_ub = in1.size(1);
  }
  b_in2.set_size(&rb_emlrtRTEI, &sp, 1, loop_ub);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_1 = (in1.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in2[i] = in2[i * stride_0_1] * in1[i * stride_1_1] + b_in3;
  }
  in1.set_size(&rb_emlrtRTEI, &sp, 1, b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

namespace coder {
void polyval(const emlrtStack &sp, const real_T p[2],
             const ::coder::array<real_T, 2U> &x, ::coder::array<real_T, 2U> &y)
{
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  y.set_size(&mb_emlrtRTEI, &sp, 1, x.size(1));
  if (x.size(1) != 0) {
    int32_T y_idx_1;
    y_idx_1 = x.size(1);
    y.set_size(&nb_emlrtRTEI, &sp, 1, x.size(1));
    for (int32_T i{0}; i < y_idx_1; i++) {
      y[i] = p[0];
    }
    if (x.size(1) == y.size(1)) {
      y_idx_1 = x.size(1) - 1;
      y.set_size(&ob_emlrtRTEI, &sp, 1, x.size(1));
      for (int32_T i{0}; i <= y_idx_1; i++) {
        y[i] = x[i] * y[i] + p[1];
      }
    } else {
      st.site = &jc_emlrtRSI;
      binary_expand_op(st, y, x, p);
    }
  }
}

} // namespace coder

// End of code generation (polyval.cpp)
