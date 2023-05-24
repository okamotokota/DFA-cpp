//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mean.cpp
//
// Code generation for function 'mean'
//

// Include files
#include "mean.h"
#include "DFA_data.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo mb_emlrtRSI{
    49,     // lineNo
    "mean", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/mean.m" // pathName
};

// Function Definitions
namespace coder {
real_T mean(const emlrtStack &sp, const ::coder::array<real_T, 2U> &x)
{
  array<real_T, 1U> c_x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T s;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &mb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &nb_emlrtRSI;
  if (x.size(1) == 0) {
    s = 0.0;
  } else {
    c_st.site = &ob_emlrtRSI;
    d_st.site = &pb_emlrtRSI;
    if (x.size(1) < 4096) {
      int32_T b_x;
      b_x = x.size(1);
      c_x = x.reshape(b_x);
      e_st.site = &qb_emlrtRSI;
      s = sumColumnB(e_st, c_x, x.size(1));
    } else {
      int32_T b_x;
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(x.size(1)) >> 12);
      inb = nfb << 12;
      nleft = x.size(1) - inb;
      b_x = x.size(1);
      c_x = x.reshape(b_x);
      s = sumColumnB4(c_x, 1);
      if (nfb >= 2) {
        b_x = x.size(1);
      }
      for (int32_T ib{2}; ib <= nfb; ib++) {
        c_x = x.reshape(b_x);
        s += sumColumnB4(c_x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        b_x = x.size(1);
        c_x = x.reshape(b_x);
        e_st.site = &rb_emlrtRSI;
        s += sumColumnB(e_st, c_x, nleft, inb + 1);
      }
    }
  }
  return s / static_cast<real_T>(x.size(1));
}

} // namespace coder

// End of code generation (mean.cpp)
