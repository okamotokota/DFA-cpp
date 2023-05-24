//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// DFA.h
//
// Code generation for function 'DFA'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void DFA(const emlrtStack *sp, const real_T data_dfa[500], real_T scmin,
         real_T scmax, real_T scres, real_T *alpha,
         coder::array<real_T, 2U> &dfa_out);

// End of code generation (DFA.h)
