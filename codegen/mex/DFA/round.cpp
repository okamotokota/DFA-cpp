//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// round.cpp
//
// Code generation for function 'round'
//

// Include files
#include "round.h"
#include "DFA_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo n_emlrtRSI{
    16,      // lineNo
    "round", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/round.m" // pathName
};

// Function Definitions
namespace coder {
void b_round(const emlrtStack &sp, ::coder::array<real_T, 2U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &n_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(1);
  b_st.site = &o_emlrtRSI;
  if (x.size(1) > 2147483646) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx; k++) {
    x[k] = muDoubleScalarRound(x[k]);
  }
}

} // namespace coder

// End of code generation (round.cpp)
