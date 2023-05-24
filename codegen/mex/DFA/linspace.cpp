//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// linspace.cpp
//
// Code generation for function 'linspace'
//

// Include files
#include "linspace.h"
#include "DFA_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRTEInfo
    g_emlrtRTEI{
        33,         // lineNo
        37,         // colNo
        "linspace", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/"
        "linspace.m" // pName
    };

static emlrtRTEInfo
    gb_emlrtRTEI{
        49,         // lineNo
        20,         // colNo
        "linspace", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/"
        "linspace.m" // pName
    };

static emlrtRTEInfo
    hb_emlrtRTEI{
        34,         // lineNo
        5,          // colNo
        "linspace", // fName
        "/Applications/MATLAB_R2023a.app/toolbox/eml/lib/matlab/elmat/"
        "linspace.m" // pName
    };

// Function Definitions
namespace coder {
void linspace(const emlrtStack &sp, real_T d1, real_T d2, real_T n,
              ::coder::array<real_T, 2U> &y)
{
  if (!(n >= 0.0)) {
    if (muDoubleScalarIsNaN(n)) {
      emlrtErrorWithMessageIdR2018a(&sp, &g_emlrtRTEI,
                                    "Coder:toolbox:MustNotBeNaN",
                                    "Coder:toolbox:MustNotBeNaN", 3, 4, 1, "N");
    }
    y.set_size(&hb_emlrtRTEI, &sp, 1, 0);
  } else {
    real_T delta1;
    delta1 = muDoubleScalarFloor(n);
    y.set_size(&gb_emlrtRTEI, &sp, 1, static_cast<int32_T>(delta1));
    if (static_cast<int32_T>(delta1) >= 1) {
      int32_T y_tmp;
      y_tmp = static_cast<int32_T>(delta1) - 1;
      y[static_cast<int32_T>(delta1) - 1] = d2;
      if (y.size(1) >= 2) {
        y[0] = d1;
        if (y.size(1) >= 3) {
          if (d1 == -d2) {
            delta1 = d2 / (static_cast<real_T>(y.size(1)) - 1.0);
            for (int32_T k{2}; k <= y_tmp; k++) {
              y[k - 1] =
                  static_cast<real_T>(((k << 1) - y.size(1)) - 1) * delta1;
            }
            if ((y.size(1) & 1) == 1) {
              y[y.size(1) >> 1] = 0.0;
            }
          } else if (((d1 < 0.0) != (d2 < 0.0)) &&
                     ((muDoubleScalarAbs(d1) > 8.9884656743115785E+307) ||
                      (muDoubleScalarAbs(d2) > 8.9884656743115785E+307))) {
            real_T delta2;
            delta1 = d1 / (static_cast<real_T>(y.size(1)) - 1.0);
            delta2 = d2 / (static_cast<real_T>(y.size(1)) - 1.0);
            y_tmp = y.size(1);
            for (int32_T k{0}; k <= y_tmp - 3; k++) {
              y[k + 1] = (d1 + delta2 * (static_cast<real_T>(k) + 1.0)) -
                         delta1 * (static_cast<real_T>(k) + 1.0);
            }
          } else {
            delta1 = (d2 - d1) / (static_cast<real_T>(y.size(1)) - 1.0);
            y_tmp = y.size(1);
            for (int32_T k{0}; k <= y_tmp - 3; k++) {
              y[k + 1] = d1 + (static_cast<real_T>(k) + 1.0) * delta1;
            }
          }
        }
      }
    }
  }
}

} // namespace coder

// End of code generation (linspace.cpp)
