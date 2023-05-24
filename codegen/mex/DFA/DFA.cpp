//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// DFA.cpp
//
// Code generation for function 'DFA'
//

// Include files
#include "DFA.h"
#include "DFA_data.h"
#include "colon.h"
#include "linspace.h"
#include "log10.h"
#include "mean.h"
#include "polyfit.h"
#include "polyval.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "sumMatrixIncludeNaN.h"
#include "var.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Type Definitions
struct cell_wrap_0 {
  coder::array<real_T, 2U> f1;
};

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    14,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    15,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    32,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    34,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    35,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    36,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    39,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    42,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    44,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    46,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    50,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    51,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    76,                                        // lineNo
    "DFA",                                     // fcnName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    28,      // lineNo
    "colon", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/colon.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    125,     // lineNo
    "colon", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/colon.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    71,      // lineNo
    "power", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/power.m" // pathName
};

static emlrtRSInfo gc_emlrtRSI{
    39,    // lineNo
    "cat", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

static emlrtRSInfo hc_emlrtRSI{
    113,        // lineNo
    "cat_impl", // fcnName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/cat.m" // pathName
};

static emlrtRTEInfo emlrtRTEI{
    24,                                        // lineNo
    14,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    25,                                         // lineNo
    48,                                         // colNo
    "scale",                                    // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtRTEInfo b_emlrtRTEI{
    28,                                        // lineNo
    14,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtBCInfo b_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    29,                                         // lineNo
    28,                                         // colNo
    "segments",                                 // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtRTEInfo c_emlrtRTEI{
    29,                                        // lineNo
    17,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtDCInfo emlrtDCI{
    33,                                         // lineNo
    23,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    1,                                          // iFirst
    500,                                        // iLast
    33,                                         // lineNo
    23,                                         // colNo
    "X",                                        // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    33,                                         // lineNo
    33,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    1,                                          // iFirst
    500,                                        // iLast
    33,                                         // lineNo
    33,                                         // colNo
    "X",                                        // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    34,                                         // lineNo
    47,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    34,                                         // lineNo
    57,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtECInfo emlrtECI{
    2,                                         // nDims
    36,                                        // lineNo
    37,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtECInfo b_emlrtECI{
    2,                                         // nDims
    49,                                        // lineNo
    14,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtBCInfo e_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    39,                                         // lineNo
    31,                                         // colNo
    "RMS",                                      // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtRTEInfo d_emlrtRTEI{
    288,                   // lineNo
    27,                    // colNo
    "check_non_axis_size", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/cat.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    14,      // lineNo
    9,       // colNo
    "log10", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/log10.m" // pName
};

static emlrtRTEInfo f_emlrtRTEI{
    13,     // lineNo
    9,      // colNo
    "sqrt", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" // pName
};

static emlrtBCInfo f_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    36,                                         // lineNo
    17,                                         // colNo
    "RMS",                                      // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    26,                                         // lineNo
    25,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    26,                                         // lineNo
    25,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    4                                           // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    26,                                         // lineNo
    13,                                         // colNo
    "RMS",                                      // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    32,                                         // lineNo
    19,                                         // colNo
    "Index",                                    // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    32,                                         // lineNo
    22,                                         // colNo
    "Index",                                    // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    19,                                         // lineNo
    15,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    20,                                         // lineNo
    16,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo i_emlrtDCI{
    20,                                         // lineNo
    16,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    4                                           // checkKind
};

static emlrtDCInfo j_emlrtDCI{
    20,                                         // lineNo
    22,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo k_emlrtDCI{
    21,                                         // lineNo
    14,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo l_emlrtDCI{
    21,                                         // lineNo
    20,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo m_emlrtDCI{
    18,                                         // lineNo
    22,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo n_emlrtDCI{
    18,                                         // lineNo
    22,                                         // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    4                                           // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    20,                                         // lineNo
    22,                                         // colNo
    "Index",                                    // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    20,                                         // lineNo
    22,                                         // colNo
    "fit",                                      // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    20,                                         // lineNo
    22,                                         // colNo
    "RMS",                                      // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    25,                                         // lineNo
    18,                                         // colNo
    "segments",                                 // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    26,                                         // lineNo
    34,                                         // colNo
    "segments",                                 // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    26,                                         // lineNo
    9,                                          // colNo
    "RMS",                                      // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtDCInfo o_emlrtDCI{
    26,                                         // lineNo
    9,                                          // colNo
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    1                                           // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    26,                                         // lineNo
    9,                                          // colNo
    "segments",                                 // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    30,                                         // lineNo
    42,                                         // colNo
    "scale",                                    // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    32,                                         // lineNo
    13,                                         // colNo
    "Index",                                    // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    39,                                         // lineNo
    11,                                         // colNo
    "F",                                        // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    35,                                         // lineNo
    17,                                         // colNo
    "fit",                                      // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    35,                                         // lineNo
    20,                                         // colNo
    "fit",                                      // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                                         // iFirst
    -1,                                         // iLast
    36,                                         // lineNo
    21,                                         // colNo
    "RMS{ns}",                                  // aName
    "DFA",                                      // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m", // pName
    0                                           // checkKind
};

static emlrtRTEInfo p_emlrtRTEI{
    15,                                        // lineNo
    5,                                         // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    18,                                        // lineNo
    14,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    1,                                         // lineNo
    28,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    19,                                        // lineNo
    7,                                         // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    26,                                        // lineNo
    9,                                         // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    32,                                        // lineNo
    13,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    28,      // lineNo
    9,       // colNo
    "colon", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/ops/colon.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    31,            // lineNo
    30,            // colNo
    "unsafeSxfun", // fName
    "/Applications/MATLAB_R2023a.app/toolbox/eml/eml/+coder/+internal/"
    "unsafeSxfun.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    42,                                        // lineNo
    17,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    42,                                        // lineNo
    31,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    44,                                        // lineNo
    26,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    46,                                        // lineNo
    5,                                         // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    76,                                        // lineNo
    14,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    76,                                        // lineNo
    28,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    76,                                        // lineNo
    37,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    76,                                        // lineNo
    5,                                         // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo pb_emlrtRTEI{
    36,                                        // lineNo
    37,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

static emlrtRTEInfo qb_emlrtRTEI{
    49,                                        // lineNo
    14,                                        // colNo
    "DFA",                                     // fName
    "/Users/okamoto/program_doc/DFA-cpp/DFA.m" // pName
};

// Function Declarations
static real_T binary_expand_op(const emlrtStack &sp, const emlrtRSInfo in1,
                               const real_T in3[500], int32_T in4, int32_T in5,
                               const coder::array<real_T, 2U> &in6);

static void binary_expand_op(const emlrtStack &sp, const emlrtRSInfo in1,
                             const coder::array<real_T, 2U> &in3,
                             const coder::array<real_T, 2U> &in4);

// Function Definitions
static real_T binary_expand_op(const emlrtStack &sp, const emlrtRSInfo in1,
                               const real_T in3[500], int32_T in4, int32_T in5,
                               const coder::array<real_T, 2U> &in6)
{
  coder::array<real_T, 2U> b_in3;
  coder::array<real_T, 2U> r;
  emlrtStack st;
  real_T out1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  i = in5 - in4;
  if (in6.size(1) == 1) {
    loop_ub = i;
  } else {
    loop_ub = in6.size(1);
  }
  b_in3.set_size(&pb_emlrtRTEI, &sp, 1, loop_ub);
  stride_0_1 = (i != 1);
  stride_1_1 = (in6.size(1) != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in3[i] = in3[in4 + i * stride_0_1] - in6[i * stride_1_1];
  }
  r.set_size(&w_emlrtRTEI, &sp, 1, b_in3.size(1));
  loop_ub = b_in3.size(1);
  for (i = 0; i < loop_ub; i++) {
    real_T varargin_1;
    varargin_1 = b_in3[i];
    r[i] = muDoubleScalarPower(varargin_1, 2.0);
  }
  st.site = const_cast<emlrtRSInfo *>(&in1);
  out1 = coder::mean(st, r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return out1;
}

static void binary_expand_op(const emlrtStack &sp, const emlrtRSInfo in1,
                             const coder::array<real_T, 2U> &in3,
                             const coder::array<real_T, 2U> &in4)
{
  coder::array<real_T, 2U> b_in3;
  coder::array<real_T, 2U> r;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(1) == 1) {
    loop_ub = in3.size(1);
  } else {
    loop_ub = in4.size(1);
  }
  b_in3.set_size(&qb_emlrtRTEI, &sp, 1, loop_ub);
  stride_0_1 = (in3.size(1) != 1);
  stride_1_1 = (in4.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in3[i] = in3[i * stride_0_1] - in4[i * stride_1_1];
  }
  r.set_size(&w_emlrtRTEI, &sp, 1, b_in3.size(1));
  loop_ub = b_in3.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T varargin_1;
    varargin_1 = b_in3[i];
    r[i] = muDoubleScalarPower(varargin_1, 2.0);
  }
  st.site = const_cast<emlrtRSInfo *>(&in1);
  coder::sum(st, r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void DFA(const emlrtStack *sp, const real_T data_dfa[500], real_T scmin,
         real_T scmax, real_T scres, real_T *alpha,
         coder::array<real_T, 2U> &dfa_out)
{
  coder::array<cell_wrap_0, 2U> Index;
  coder::array<cell_wrap_0, 2U> RMS;
  coder::array<cell_wrap_0, 2U> fit;
  coder::array<real_T, 2U> F;
  coder::array<real_T, 2U> b_X_data;
  coder::array<real_T, 2U> exponents;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> scale;
  coder::array<real_T, 2U> segments;
  coder::array<real_T, 2U> y;
  coder::array<real_T, 1U> varargin_1;
  coder::array<real_T, 1U> varargin_2;
  coder::array<real_T, 1U> varargin_3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T X[500];
  real_T X_data[500];
  real_T C[2];
  real_T Idx_stop;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T unnamed_idx_1_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  covrtLogFcn(&emlrtCoverageInstance, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 0);
  //  scmin(最小スケール)，scmax(最大スケール)，scres(スケール数)を定義し，
  //  傾きαと，h,p（t検定結果）を出力する．
  //  dfa_out.txtに標準偏差と回帰直線のデータを出力
  //      data=readmatrix("sample.txt");
  Idx_stop = coder::sumColumnB(data_dfa) / 500.0;
  for (i = 0; i < 500; i++) {
    X[i] = data_dfa[i] - Idx_stop;
  }
  for (k = 0; k < 499; k++) {
    X[k + 1] += X[k];
  }
  //  ノイズの累積和をとりランダムウォーク型に変換
  //  サンプルの組を指定，ここではlog10のスケールで定義
  //  scmin = 4; %最小スケ
  st.site = &emlrtRSI;
  if (scmin < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 5, "log10");
  }
  st.site = &emlrtRSI;
  if (scmax < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 5, "log10");
  }
  st.site = &emlrtRSI;
  coder::linspace(st, muDoubleScalarLog10(scmin), muDoubleScalarLog10(scmax),
                  scres, exponents);
  //  log10での等間隔なスケールの設定
  scale.set_size(&p_emlrtRTEI, sp, 1, exponents.size(1));
  i = exponents.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    Idx_stop = exponents[b_i];
    scale[b_i] = muDoubleScalarPower(10.0, Idx_stop);
  }
  st.site = &b_emlrtRSI;
  coder::b_round(st, scale);
  //  近似する際の多項式の次元（線形なら1）
  segments.set_size(&q_emlrtRTEI, sp, 1, segments.size(1));
  if (!(scres >= 0.0)) {
    emlrtNonNegativeCheckR2012b(scres, &n_emlrtDCI, (emlrtConstCTX)sp);
  }
  b_i = static_cast<int32_T>(muDoubleScalarFloor(scres));
  if (scres != b_i) {
    emlrtIntegerCheckR2012b(scres, &m_emlrtDCI, (emlrtConstCTX)sp);
  }
  segments.set_size(&q_emlrtRTEI, sp, segments.size(0),
                    static_cast<int32_T>(scres));
  if (scres != b_i) {
    emlrtIntegerCheckR2012b(scres, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  unnamed_idx_1_tmp = static_cast<int32_T>(scres);
  if (!(scmax >= 0.0)) {
    emlrtNonNegativeCheckR2012b(rtNaN, &i_emlrtDCI, (emlrtConstCTX)sp);
  }
  Idx_stop = static_cast<int32_T>(muDoubleScalarFloor(scmax));
  if (scmax != Idx_stop) {
    emlrtIntegerCheckR2012b(scmax, &h_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(scmax);
  if (static_cast<int32_T>(scres) != b_i) {
    emlrtIntegerCheckR2012b(scres, &j_emlrtDCI, (emlrtConstCTX)sp);
  }
  Index.set_size(&r_emlrtRTEI, sp, i, static_cast<int32_T>(scres));
  for (i1 = 0; i1 < i * unnamed_idx_1_tmp; i1++) {
    k = Index.size(0) * Index.size(1);
    if (i1 > k - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, k - 1, &j_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Index[i1].f1.set_size(&r_emlrtRTEI, sp, 1, Index[i1].f1.size(1));
    if (i1 > k - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, k - 1, &j_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Index[i1].f1.set_size(&r_emlrtRTEI, sp, Index[i1].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  if (scmax != Idx_stop) {
    emlrtIntegerCheckR2012b(scmax, &k_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (static_cast<int32_T>(scres) != b_i) {
    emlrtIntegerCheckR2012b(scres, &l_emlrtDCI, (emlrtConstCTX)sp);
  }
  fit.set_size(&r_emlrtRTEI, sp, i, static_cast<int32_T>(scres));
  for (b_i = 0; b_i < i * unnamed_idx_1_tmp; b_i++) {
    k = fit.size(0) * fit.size(1);
    if (b_i > k - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, k - 1, &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    fit[b_i].f1.set_size(&r_emlrtRTEI, sp, 1, fit[b_i].f1.size(1));
    if (b_i > k - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, k - 1, &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    fit[b_i].f1.set_size(&r_emlrtRTEI, sp, fit[b_i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  RMS.set_size(&r_emlrtRTEI, sp, 1, static_cast<int32_T>(scres));
  for (b_i = 0; b_i < unnamed_idx_1_tmp; b_i++) {
    if (b_i > RMS.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, RMS.size(1) - 1, &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    RMS[RMS.size(0) * b_i].f1.set_size(&r_emlrtRTEI, sp, 1,
                                       RMS[RMS.size(0) * b_i].f1.size(1));
    if (b_i > RMS.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, RMS.size(1) - 1, &l_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    RMS[RMS.size(0) * b_i].f1.set_size(&r_emlrtRTEI, sp,
                                       RMS[RMS.size(0) * b_i].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, scres, mxDOUBLE_CLASS,
                                static_cast<int32_T>(scres), &emlrtRTEI,
                                (emlrtConstCTX)sp);
  RMS.set_size(&s_emlrtRTEI, sp, 1, static_cast<int32_T>(scres));
  for (int32_T ns{0}; ns < unnamed_idx_1_tmp; ns++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 1);
    //  範囲の大きさを変更して実行
    if (ns + 1 > scale.size(1)) {
      emlrtDynamicBoundsCheckR2012b(ns + 1, 1, scale.size(1), &emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (static_cast<int32_T>(static_cast<uint32_T>(ns) + 1U) >
        segments.size(1)) {
      emlrtDynamicBoundsCheckR2012b(
          static_cast<int32_T>(static_cast<uint32_T>(ns) + 1U), 1,
          segments.size(1), &m_emlrtBCI, (emlrtConstCTX)sp);
    }
    segments[ns] = muDoubleScalarFloor(500.0 / scale[ns]);
    b_i = RMS.size(1) - 1;
    if (ns > RMS.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(ns, 0, RMS.size(1) - 1, &g_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    RMS[RMS.size(0) * ns].f1.set_size(&t_emlrtRTEI, sp, 1,
                                      RMS[RMS.size(0) * ns].f1.size(1));
    if (ns > RMS.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(ns, 0, RMS.size(1) - 1, &g_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (ns + 1 > segments.size(1)) {
      emlrtDynamicBoundsCheckR2012b(ns + 1, 1, segments.size(1), &n_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    Idx_stop = segments[ns];
    if (!(Idx_stop >= 0.0)) {
      emlrtNonNegativeCheckR2012b(Idx_stop, &f_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (Idx_stop != static_cast<int32_T>(Idx_stop)) {
      emlrtIntegerCheckR2012b(Idx_stop, &e_emlrtDCI, (emlrtConstCTX)sp);
    }
    RMS[RMS.size(0) * ns].f1.set_size(&t_emlrtRTEI, sp,
                                      RMS[RMS.size(0) * ns].f1.size(0),
                                      static_cast<int32_T>(Idx_stop));
    if (ns > RMS.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(ns, 0, RMS.size(1) - 1, &g_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (ns + 1 > segments.size(1)) {
      emlrtDynamicBoundsCheckR2012b(ns + 1, 1, segments.size(1), &p_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (Idx_stop != static_cast<int32_T>(Idx_stop)) {
      emlrtIntegerCheckR2012b(Idx_stop, &o_emlrtDCI, (emlrtConstCTX)sp);
    }
    i = static_cast<int32_T>(Idx_stop);
    for (i1 = 0; i1 < i; i1++) {
      if (ns > b_i) {
        emlrtDynamicBoundsCheckR2012b(ns, 0, b_i, &o_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      RMS[ns].f1[i1] = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 0, 0);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, scres, mxDOUBLE_CLASS,
                                static_cast<int32_T>(scres), &b_emlrtRTEI,
                                (emlrtConstCTX)sp);
  F.set_size(&s_emlrtRTEI, sp, 1, static_cast<int32_T>(scres));
  for (int32_T ns{0}; ns < unnamed_idx_1_tmp; ns++) {
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 1, 1);
    //  範囲の大きさを変更して実行
    if (ns + 1 > segments.size(1)) {
      emlrtDynamicBoundsCheckR2012b(ns + 1, 1, segments.size(1), &b_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_i = static_cast<int32_T>(segments[ns]);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, segments[ns], mxDOUBLE_CLASS, b_i,
                                  &c_emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T v{0}; v < b_i; v++) {
      real_T Idx_start;
      int32_T i2;
      int32_T i3;
      int32_T i4;
      boolean_T b;
      covrtLogFor(&emlrtCoverageInstance, 0, 0, 2, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0, 2);
      //  同じ範囲で異なる場所で実行
      b = (static_cast<int32_T>(static_cast<uint32_T>(ns) + 1U) >
           scale.size(1));
      if (b) {
        emlrtDynamicBoundsCheckR2012b(
            static_cast<int32_T>(static_cast<uint32_T>(ns) + 1U), 1,
            scale.size(1), &q_emlrtBCI, (emlrtConstCTX)sp);
      }
      Idx_stop = scale[ns];
      Idx_start = ((static_cast<real_T>(v) + 1.0) - 1.0) * Idx_stop + 1.0;
      Idx_stop *= static_cast<real_T>(v) + 1.0;
      st.site = &c_emlrtRSI;
      b_st.site = &q_emlrtRSI;
      b = muDoubleScalarIsNaN(Idx_start);
      if (b || muDoubleScalarIsNaN(Idx_stop)) {
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        Index[v + Index.size(0) * ns].f1.set_size(
            &u_emlrtRTEI, &b_st, 1, Index[v + Index.size(0) * ns].f1.size(1));
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        Index[v + Index.size(0) * ns].f1.set_size(
            &u_emlrtRTEI, &b_st, Index[v + Index.size(0) * ns].f1.size(0), 1);
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &r_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &r_emlrtBCI,
                                        &b_st);
        }
        Index[v + Index.size(0) * ns].f1[0] = rtNaN;
      } else if (Idx_stop < Idx_start) {
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        Index[v + Index.size(0) * ns].f1.set_size(
            &u_emlrtRTEI, &b_st, 1, Index[v + Index.size(0) * ns].f1.size(1));
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        Index[v + Index.size(0) * ns].f1.set_size(
            &u_emlrtRTEI, &b_st, Index[v + Index.size(0) * ns].f1.size(0), 0);
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
      } else if ((muDoubleScalarIsInf(Idx_start) ||
                  muDoubleScalarIsInf(Idx_stop)) &&
                 (Idx_start == Idx_stop)) {
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        Index[v + Index.size(0) * ns].f1.set_size(
            &u_emlrtRTEI, &b_st, 1, Index[v + Index.size(0) * ns].f1.size(1));
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        Index[v + Index.size(0) * ns].f1.set_size(
            &u_emlrtRTEI, &b_st, Index[v + Index.size(0) * ns].f1.size(0), 1);
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &r_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &r_emlrtBCI,
                                        &b_st);
        }
        Index[v + Index.size(0) * ns].f1[0] = rtNaN;
      } else if (muDoubleScalarFloor(Idx_start) == Idx_start) {
        i1 = Index.size(0) - 1;
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &r_emlrtBCI,
                                        &b_st);
        }
        i2 = Index.size(1) - 1;
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &r_emlrtBCI,
                                        &b_st);
        }
        Index[v + Index.size(0) * ns].f1.set_size(
            &u_emlrtRTEI, &b_st, 1, Index[v + Index.size(0) * ns].f1.size(1));
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &r_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &r_emlrtBCI,
                                        &b_st);
        }
        i = static_cast<int32_T>(Idx_stop - Idx_start);
        Index[v + Index.size(0) * ns].f1.set_size(
            &u_emlrtRTEI, &b_st, Index[v + Index.size(0) * ns].f1.size(0),
            i + 1);
        for (i3 = 0; i3 <= i; i3++) {
          if (v > i1) {
            emlrtDynamicBoundsCheckR2012b(v, 0, i1, &r_emlrtBCI, &b_st);
          }
          if (ns > i2) {
            emlrtDynamicBoundsCheckR2012b(ns, 0, i2, &r_emlrtBCI, &b_st);
          }
          Index[v + Index.size(0) * ns].f1[i3] =
              Idx_start + static_cast<real_T>(i3);
        }
      } else {
        if (v > Index.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(v, 0, Index.size(0) - 1, &h_emlrtBCI,
                                        &b_st);
        }
        if (ns > Index.size(1) - 1) {
          emlrtDynamicBoundsCheckR2012b(ns, 0, Index.size(1) - 1, &i_emlrtBCI,
                                        &b_st);
        }
        c_st.site = &r_emlrtRSI;
        coder::eml_float_colon(c_st, Idx_start, Idx_stop,
                               Index[v + Index.size(0) * ns].f1);
      }
      //  範囲の場所を指定
      if (Idx_start > Idx_stop) {
        i3 = 0;
        k = 0;
        i1 = 0;
        i2 = 0;
      } else {
        i1 = static_cast<int32_T>(muDoubleScalarFloor(Idx_start));
        if (Idx_start != i1) {
          emlrtIntegerCheckR2012b(Idx_start, &emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((Idx_start < 1.0) || (Idx_start > 500.0)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(Idx_start), 1, 500,
                                        &c_emlrtBCI, (emlrtConstCTX)sp);
        }
        i2 = static_cast<int32_T>(Idx_start);
        i3 = i2 - 1;
        i4 = static_cast<int32_T>(muDoubleScalarFloor(Idx_stop));
        if (Idx_stop != i4) {
          emlrtIntegerCheckR2012b(Idx_stop, &b_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((Idx_stop < 1.0) || (Idx_stop > 500.0)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(Idx_stop), 1, 500,
                                        &d_emlrtBCI, (emlrtConstCTX)sp);
        }
        k = static_cast<int32_T>(Idx_stop);
        if (i2 != i1) {
          emlrtIntegerCheckR2012b(Idx_start, &c_emlrtDCI, (emlrtConstCTX)sp);
        }
        i1 = i2 - 1;
        if (k != i4) {
          emlrtIntegerCheckR2012b(Idx_stop, &d_emlrtDCI, (emlrtConstCTX)sp);
        }
        i2 = k;
      }
      st.site = &d_emlrtRSI;
      b_st.site = &q_emlrtRSI;
      if (Idx_stop < Idx_start) {
        y.set_size(&v_emlrtRTEI, &b_st, 1, 0);
      } else if (muDoubleScalarFloor(Idx_start) == Idx_start) {
        i = static_cast<int32_T>(Idx_stop - Idx_start);
        y.set_size(&v_emlrtRTEI, &b_st, 1, i + 1);
        for (i4 = 0; i4 <= i; i4++) {
          y[i4] = Idx_start + static_cast<real_T>(i4);
        }
      } else {
        c_st.site = &r_emlrtRSI;
        coder::eml_float_colon(c_st, Idx_start, Idx_stop, y);
      }
      i = i2 - i1;
      for (i2 = 0; i2 < i; i2++) {
        X_data[i2] = X[i1 + i2];
      }
      b_X_data.set(&X_data[0], 1, i);
      st.site = &d_emlrtRSI;
      coder::polyfit(st, y, b_X_data, C);
      //  多項式近似を行う，多項式の係数が配列形式で出力される
      st.site = &e_emlrtRSI;
      b_st.site = &q_emlrtRSI;
      if (b) {
        y.set_size(&v_emlrtRTEI, &b_st, 1, 1);
        y[0] = rtNaN;
      } else if (Idx_stop < Idx_start) {
        y.set_size(&v_emlrtRTEI, &b_st, 1, 0);
      } else if (muDoubleScalarFloor(Idx_start) == Idx_start) {
        i = static_cast<int32_T>(Idx_stop - Idx_start);
        y.set_size(&v_emlrtRTEI, &b_st, 1, i + 1);
        for (i1 = 0; i1 <= i; i1++) {
          y[i1] = Idx_start + static_cast<real_T>(i1);
        }
      } else {
        c_st.site = &r_emlrtRSI;
        coder::eml_float_colon(c_st, Idx_start, Idx_stop, y);
      }
      if (v > fit.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(v, 0, fit.size(0) - 1, &t_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (ns > fit.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(ns, 0, fit.size(1) - 1, &u_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      st.site = &e_emlrtRSI;
      coder::polyval(st, C, y, fit[v + fit.size(0) * ns].f1);
      //  近似した多項式をそれぞれの時間で出力する
      st.site = &f_emlrtRSI;
      b_st.site = &q_emlrtRSI;
      if (b || muDoubleScalarIsNaN(Idx_stop)) {
        y.set_size(&v_emlrtRTEI, &b_st, 1, 1);
        y[0] = rtNaN;
      } else if (Idx_stop < Idx_start) {
        y.set_size(&v_emlrtRTEI, &b_st, 1, 0);
      } else if (muDoubleScalarFloor(Idx_start) == Idx_start) {
        i = static_cast<int32_T>(Idx_stop - Idx_start);
        y.set_size(&v_emlrtRTEI, &b_st, 1, i + 1);
        for (i1 = 0; i1 <= i; i1++) {
          y[i1] = Idx_start + static_cast<real_T>(i1);
        }
      } else {
        c_st.site = &r_emlrtRSI;
        coder::eml_float_colon(c_st, Idx_start, Idx_stop, y);
      }
      st.site = &f_emlrtRSI;
      coder::polyval(st, C, y, r);
      i = k - i3;
      if ((i != r.size(1)) && ((i != 1) && (r.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(i, r.size(1), &emlrtECI, (emlrtConstCTX)sp);
      }
      st.site = &f_emlrtRSI;
      b_st.site = &f_emlrtRSI;
      if (i == r.size(1)) {
        r.set_size(&w_emlrtRTEI, &st, 1, i);
        for (i1 = 0; i1 < i; i1++) {
          Idx_stop = X[i3 + i1] - r[i1];
          r[i1] = muDoubleScalarPower(Idx_stop, 2.0);
        }
        b_st.site = &f_emlrtRSI;
        Idx_stop = coder::mean(b_st, r);
      } else {
        b_st.site = &f_emlrtRSI;
        Idx_stop = binary_expand_op(b_st, f_emlrtRSI, X, i3, k, r);
      }
      if (Idx_stop < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &f_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      if (ns > fit.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(ns, 0, fit.size(1) - 1, &f_emlrtBCI, &st);
      }
      if (ns > fit.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(ns, 0, fit.size(1) - 1, &f_emlrtBCI, &st);
      }
      if (ns > fit.size(1) - 1) {
        emlrtDynamicBoundsCheckR2012b(ns, 0, fit.size(1) - 1, &f_emlrtBCI, &st);
      }
      i1 = RMS[ns].f1.size(1);
      if (v + 1 > i1) {
        emlrtDynamicBoundsCheckR2012b(v + 1, 1, i1, &v_emlrtBCI, &st);
      }
      RMS[ns].f1[v] = muDoubleScalarSqrt(Idx_stop);
      //  近似値を引いた信号のRMSを計算する
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 2, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 3);
    st.site = &g_emlrtRSI;
    b_st.site = &g_emlrtRSI;
    if (ns > RMS.size(1) - 1) {
      emlrtDynamicBoundsCheckR2012b(ns, 0, RMS.size(1) - 1, &e_emlrtBCI, &b_st);
    }
    r.set_size(&w_emlrtRTEI, &st, 1, RMS[RMS.size(0) * ns].f1.size(1));
    i = RMS[ns].f1.size(1);
    for (b_i = 0; b_i < i; b_i++) {
      Idx_stop = RMS[ns].f1[b_i];
      r[b_i] = muDoubleScalarPower(Idx_stop, 2.0);
    }
    b_st.site = &g_emlrtRSI;
    Idx_stop = coder::mean(b_st, r);
    if (Idx_stop < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &f_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    if (ns + 1 > F.size(1)) {
      emlrtDynamicBoundsCheckR2012b(ns + 1, 1, F.size(1), &s_emlrtBCI, &st);
    }
    F[ns] = muDoubleScalarSqrt(Idx_stop);
    //  範囲ごとRMSの結果の平均を取る
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  covrtLogFor(&emlrtCoverageInstance, 0, 0, 1, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 4);
  r.set_size(&x_emlrtRTEI, sp, 1, scale.size(1));
  i = scale.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    r[b_i] = scale[b_i];
  }
  st.site = &h_emlrtRSI;
  coder::b_log10(st, r);
  exponents.set_size(&y_emlrtRTEI, sp, 1, F.size(1));
  i = F.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    exponents[b_i] = F[b_i];
  }
  st.site = &h_emlrtRSI;
  coder::b_log10(st, exponents);
  st.site = &h_emlrtRSI;
  coder::polyfit(st, r, exponents, C);
  // 範囲の大きさごとの標準偏差をプロットし，線形近似する
  r.set_size(&ab_emlrtRTEI, sp, 1, scale.size(1));
  i = scale.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    r[b_i] = scale[b_i];
  }
  st.site = &i_emlrtRSI;
  coder::b_log10(st, r);
  st.site = &i_emlrtRSI;
  coder::polyval(st, C, r, exponents);
  // 回帰直線の導出
  y.set_size(&bb_emlrtRTEI, sp, 1, F.size(1));
  i = F.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    y[b_i] = F[b_i];
  }
  st.site = &j_emlrtRSI;
  coder::b_log10(st, y);
  if ((y.size(1) != exponents.size(1)) &&
      ((y.size(1) != 1) && (exponents.size(1) != 1))) {
    emlrtDimSizeImpxCheckR2021b(y.size(1), exponents.size(1), &b_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  //  残差値を符号付き数値のベクトルとして計算します。
  st.site = &k_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  if (y.size(1) == exponents.size(1)) {
    r.set_size(&w_emlrtRTEI, sp, 1, y.size(1));
    i = y.size(1);
    for (b_i = 0; b_i < i; b_i++) {
      Idx_stop = y[b_i] - exponents[b_i];
      r[b_i] = muDoubleScalarPower(Idx_stop, 2.0);
    }
    st.site = &k_emlrtRSI;
    coder::sum(st, r);
  } else {
    st.site = &k_emlrtRSI;
    binary_expand_op(st, k_emlrtRSI, y, exponents);
  }
  //  残差を二乗して合計し、残差の二乗和を取得します。
  st.site = &l_emlrtRSI;
  coder::var(st, y);
  //  観測の回数から 1 を引いた数で y の分散を掛けることによって y
  //  の総二乗和を計算します。
  //   このトピックのはじめに指定された式を使用して、3 次近似の単純な R2
  //   を計算します。
  //      [h, p] = ttest2(y,yfit); %t検定
  //  プロット
  //  figure1 = figure;
  //  axes1 =
  //  axes('Parent',figure1,'YTickLabel',{'1','2','4','8','16','32','64','128','256','512','1024','2048','4096'},...
  //      'YTick',[0 1 2 3 4 5 6 7 8 9 10 11 12],...
  //      'XTickLabel',{'16','32','64','128','256','512','1024'});
  //  % ylim(axes1,[0 5]);
  //  hold(axes1,'all');
  //
  //      plot(log10(scale), RegLine, 'k')% 回帰直線のプロット
  //      hold on
  //      plot(log10(scale), log10(F), 'o')% 範囲ごとの標準偏差をプロット
  //      hold off
  //      xlabel('log_{10}[n]')
  //      ylabel('log_{10}[F(n)]')
  //      legend(['Slope \alpha = ', num2str(alpha)], 'Data', 'Location',
  //      'northwest')
  //
  //      savefig(gcf, 'DFA_result.fig')
  st.site = &m_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  coder::b_log10(b_st, scale);
  varargin_1.set_size(&cb_emlrtRTEI, &st, scale.size(1));
  i = scale.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    varargin_1[b_i] = scale[b_i];
  }
  varargin_2.set_size(&db_emlrtRTEI, &st, exponents.size(1));
  i = exponents.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    varargin_2[b_i] = exponents[b_i];
  }
  b_st.site = &m_emlrtRSI;
  coder::b_log10(b_st, F);
  varargin_3.set_size(&eb_emlrtRTEI, &st, F.size(1));
  i = F.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    varargin_3[b_i] = F[b_i];
  }
  b_st.site = &gc_emlrtRSI;
  c_st.site = &hc_emlrtRSI;
  if (varargin_2.size(0) != varargin_1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (varargin_3.size(0) != varargin_1.size(0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  dfa_out.set_size(&fb_emlrtRTEI, &b_st, varargin_1.size(0), 3);
  i = varargin_1.size(0);
  for (b_i = 0; b_i < i; b_i++) {
    dfa_out[b_i] = varargin_1[b_i];
  }
  i = varargin_2.size(0);
  for (b_i = 0; b_i < i; b_i++) {
    dfa_out[b_i + dfa_out.size(0)] = varargin_2[b_i];
  }
  i = varargin_3.size(0);
  for (b_i = 0; b_i < i; b_i++) {
    dfa_out[b_i + dfa_out.size(0) * 2] = varargin_3[b_i];
  }
  //  end
  *alpha = C[0];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (DFA.cpp)
