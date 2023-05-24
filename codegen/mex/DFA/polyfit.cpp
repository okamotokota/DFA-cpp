//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// polyfit.cpp
//
// Code generation for function 'polyfit'
//

// Include files
#include "polyfit.h"
#include "DFA_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>
#include <cstring>

// Variable Definitions
static emlrtRSInfo
    u_emlrtRSI{
        36,        // lineNo
        "polyfit", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/polyfun/"
        "polyfit.m" // pathName
    };

static emlrtRSInfo
    v_emlrtRSI{
        40,        // lineNo
        "polyfit", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/polyfun/"
        "polyfit.m" // pathName
    };

static emlrtRSInfo
    w_emlrtRSI{
        47,        // lineNo
        "polyfit", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/polyfun/"
        "polyfit.m" // pathName
    };

static emlrtRSInfo
    x_emlrtRSI{
        61,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    y_emlrtRSI{
        80,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    ab_emlrtRSI{
        85,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo bb_emlrtRSI{
    63,       // lineNo
    "xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    138,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    143,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    148,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

static emlrtRSInfo
    fb_emlrtRSI{
        189,       // lineNo
        "nnzDiag", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    gb_emlrtRSI{
        119,         // lineNo
        "LSQFromQR", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    hb_emlrtRSI{
        128,         // lineNo
        "LSQFromQR", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    ib_emlrtRSI{
        138,         // lineNo
        "LSQFromQR", // fcnName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo jb_emlrtRSI{
    31,         // lineNo
    "xunormqr", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    102,              // lineNo
    "ceval_xunormqr", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtRTEInfo
    i_emlrtRTEI{
        26,        // lineNo
        23,        // colNo
        "polyfit", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/polyfun/"
        "polyfit.m" // pName
    };

static emlrtRTEInfo j_emlrtRTEI{
    44,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" // pName
};

static emlrtRTEInfo k_emlrtRTEI{
    47,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" // pName
};

static emlrtRTEInfo
    jb_emlrtRTEI{
        17,       // lineNo
        20,       // colNo
        "vander", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "vander.m" // pName
    };

static emlrtRTEInfo
    kb_emlrtRTEI{
        36,        // lineNo
        40,        // colNo
        "polyfit", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/polyfun/"
        "polyfit.m" // pName
    };

static emlrtRTEInfo
    lb_emlrtRTEI{
        119,       // lineNo
        5,         // colNo
        "qrsolve", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pName
    };

// Function Definitions
namespace coder {
void polyfit(const emlrtStack &sp, const ::coder::array<real_T, 2U> &x,
             const ::coder::array<real_T, 2U> &y, real_T p[2])
{
  static const char_T b_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'o', 'r', 'm', 'q', 'r'};
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'q', 'p', '3'};
  ptrdiff_t jpvt_t[2];
  ptrdiff_t info_t;
  array<real_T, 2U> V;
  array<real_T, 1U> B;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T tau_data[2];
  int32_T jpvt[2];
  int32_T j;
  int32_T ma;
  int32_T maxmn;
  int32_T minmana_tmp;
  boolean_T b_p;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (x.size(1) != y.size(1)) {
    emlrtErrorWithMessageIdR2018a(&sp, &i_emlrtRTEI,
                                  "MATLAB:polyfit:XYSizeMismatch",
                                  "MATLAB:polyfit:XYSizeMismatch", 0);
  }
  V.set_size(&jb_emlrtRTEI, &sp, x.size(1), 2);
  if (x.size(1) != 0) {
    j = x.size(1);
    for (int32_T k{0}; k < j; k++) {
      V[k + V.size(0)] = 1.0;
      V[k] = x[k];
    }
  }
  st.site = &u_emlrtRSI;
  B.set_size(&kb_emlrtRTEI, &st, y.size(1));
  maxmn = y.size(1);
  for (j = 0; j < maxmn; j++) {
    B[j] = y[j];
  }
  b_st.site = &x_emlrtRSI;
  maxmn = V.size(0);
  c_st.site = &bb_emlrtRSI;
  ma = V.size(0);
  minmana_tmp = muIntScalarMin_sint32(ma, 2);
  if (V.size(0) == 0) {
    if (minmana_tmp - 1 >= 0) {
      std::memset(&tau_data[0], 0,
                  static_cast<uint32_T>(minmana_tmp) * sizeof(real_T));
    }
    jpvt[0] = 1;
    jpvt[1] = 2;
  } else {
    jpvt_t[0] = (ptrdiff_t)0;
    jpvt_t[1] = (ptrdiff_t)0;
    info_t =
        LAPACKE_dgeqp3(102, (ptrdiff_t)V.size(0), (ptrdiff_t)2, &(V.data())[0],
                       (ptrdiff_t)V.size(0), &jpvt_t[0], &tau_data[0]);
    d_st.site = &cb_emlrtRSI;
    if ((int32_T)info_t != 0) {
      b_p = true;
      if ((int32_T)info_t != -4) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &j_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, (int32_T)info_t);
        }
      }
    } else {
      b_p = false;
    }
    if (b_p) {
      for (j = 0; j < 2; j++) {
        d_st.site = &db_emlrtRSI;
        if (maxmn > 2147483646) {
          e_st.site = &p_emlrtRSI;
          check_forloop_overflow_error(e_st);
        }
        for (int32_T k{0}; k < maxmn; k++) {
          V[j * ma + k] = rtNaN;
        }
      }
      ma = minmana_tmp - 1;
      d_st.site = &eb_emlrtRSI;
      for (int32_T k{0}; k <= ma; k++) {
        tau_data[k] = rtNaN;
      }
      if (minmana_tmp + 1 <= minmana_tmp) {
        tau_data[1] = 0.0;
      }
      jpvt[0] = 1;
      jpvt[1] = 2;
    } else {
      jpvt[0] = (int32_T)jpvt_t[0];
      jpvt[1] = (int32_T)jpvt_t[1];
    }
  }
  minmana_tmp = 0;
  if (V.size(0) < 2) {
    ma = V.size(0);
    maxmn = 2;
  } else {
    ma = 2;
    maxmn = V.size(0);
  }
  if (ma > 0) {
    real_T tol;
    tol =
        muDoubleScalarMin(1.4901161193847656E-8,
                          2.2204460492503131E-15 * static_cast<real_T>(maxmn)) *
        muDoubleScalarAbs(V[0]);
    while ((minmana_tmp < ma) &&
           (!(muDoubleScalarAbs(V[minmana_tmp + V.size(0) * minmana_tmp]) <=
              tol))) {
      minmana_tmp++;
    }
  }
  b_st.site = &y_emlrtRSI;
  ma = 0;
  maxmn = V.size(0);
  maxmn = muIntScalarMin_sint32(maxmn, 2);
  if (maxmn > 0) {
    c_st.site = &fb_emlrtRSI;
    for (int32_T k{0}; k < maxmn; k++) {
      if (V[k + V.size(0) * k] != 0.0) {
        ma++;
      }
    }
  }
  b_st.site = &ab_emlrtRSI;
  p[0] = 0.0;
  p[1] = 0.0;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &jb_emlrtRSI;
  if ((V.size(0) != 0) && (y.size(1) != 0)) {
    info_t = (ptrdiff_t)y.size(1);
    maxmn = V.size(0);
    info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)1,
                            (ptrdiff_t)muIntScalarMin_sint32(maxmn, 2),
                            &(V.data())[0], (ptrdiff_t)V.size(0), &tau_data[0],
                            &(B.data())[0], info_t);
    e_st.site = &kb_emlrtRSI;
    if ((int32_T)info_t != 0) {
      boolean_T c_p;
      b_p = true;
      c_p = false;
      if ((int32_T)info_t == -7) {
        c_p = true;
      } else if ((int32_T)info_t == -9) {
        c_p = true;
      } else if ((int32_T)info_t == -10) {
        c_p = true;
      }
      if (!c_p) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&e_st, &j_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &k_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &b_fname[0], 12,
              (int32_T)info_t);
        }
      }
    } else {
      b_p = false;
    }
    if (b_p) {
      maxmn = B.size(0);
      B.set_size(&lb_emlrtRTEI, &d_st, maxmn);
      for (j = 0; j < maxmn; j++) {
        B[j] = rtNaN;
      }
    }
  }
  c_st.site = &hb_emlrtRSI;
  for (int32_T k{0}; k < ma; k++) {
    p[jpvt[k] - 1] = B[k];
  }
  for (j = ma; j >= 1; j--) {
    maxmn = jpvt[j - 1] - 1;
    p[maxmn] /= V[(j + V.size(0) * (j - 1)) - 1];
    c_st.site = &ib_emlrtRSI;
    for (int32_T k{0}; k <= j - 2; k++) {
      p[jpvt[0] - 1] -= p[maxmn] * V[V.size(0) * (j - 1)];
    }
  }
  if (x.size(1) <= 1) {
    st.site = &v_emlrtRSI;
    internal::warning(st);
  } else if (minmana_tmp <= 1) {
    st.site = &w_emlrtRSI;
    internal::b_warning(st);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (polyfit.cpp)
