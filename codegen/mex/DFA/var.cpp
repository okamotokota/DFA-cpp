//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// var.cpp
//
// Code generation for function 'var'
//

// Include files
#include "var.h"
#include "DFA_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo bc_emlrtRSI{
    9,     // lineNo
    "var", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/var.m" // pathName
};

static emlrtRSInfo cc_emlrtRSI{
    105,      // lineNo
    "varstd", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "varstd.m" // pathName
};

static emlrtRSInfo dc_emlrtRSI{
    96,        // lineNo
    "vvarstd", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" // pathName
};

static emlrtRSInfo ec_emlrtRSI{
    105,       // lineNo
    "vvarstd", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "vvarstd.m" // pathName
};

static emlrtRSInfo fc_emlrtRSI{
    107,                // lineNo
    "blockedSummation", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/datafun/private/"
    "blockedSummation.m" // pathName
};

// Function Definitions
namespace coder {
real_T var(const emlrtStack &sp, const ::coder::array<real_T, 2U> &x)
{
  array<real_T, 1U> c_x;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T y;
  int32_T n;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &bc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  n = x.size(1);
  b_st.site = &cc_emlrtRSI;
  if (x.size(1) == 0) {
    y = rtNaN;
  } else if (x.size(1) == 1) {
    if ((!muDoubleScalarIsInf(x[0])) && (!muDoubleScalarIsNaN(x[0]))) {
      y = 0.0;
    } else {
      y = rtNaN;
    }
  } else {
    real_T s;
    int32_T nfb;
    c_st.site = &dc_emlrtRSI;
    d_st.site = &nb_emlrtRSI;
    e_st.site = &fc_emlrtRSI;
    f_st.site = &pb_emlrtRSI;
    if (x.size(1) < 4096) {
      int32_T b_x;
      b_x = x.size(1);
      c_x = x.reshape(b_x);
      g_st.site = &qb_emlrtRSI;
      s = sumColumnB(g_st, c_x, x.size(1));
    } else {
      int32_T b_x;
      int32_T inb;
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
        g_st.site = &rb_emlrtRSI;
        s += sumColumnB(g_st, c_x, nleft, inb + 1);
      }
    }
    s /= static_cast<real_T>(x.size(1));
    y = 0.0;
    c_st.site = &ec_emlrtRSI;
    if (x.size(1) > 2147483646) {
      d_st.site = &p_emlrtRSI;
      check_forloop_overflow_error(d_st);
    }
    for (nfb = 0; nfb < n; nfb++) {
      real_T t;
      t = x[nfb] - s;
      y += t * t;
    }
    y /= static_cast<real_T>(x.size(1)) - 1.0;
  }
  return y;
}

} // namespace coder

// End of code generation (var.cpp)
