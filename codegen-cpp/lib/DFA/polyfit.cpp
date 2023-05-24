//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: polyfit.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 24-May-2023 19:50:41
//

// Include Files
#include "polyfit.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include "coder_array.h"
#include <cmath>
#include <cstring>

// Function Declarations
static double rt_hypotd_snf(double u0, double u1);

// Function Definitions
//
// Arguments    : double u0
//                double u1
// Return Type  : double
//
static double rt_hypotd_snf(double u0, double u1)
{
  double a;
  double b;
  double y;
  a = std::abs(u0);
  b = std::abs(u1);
  if (a < b) {
    a /= b;
    y = b * std::sqrt(a * a + 1.0);
  } else if (a > b) {
    b /= a;
    y = a * std::sqrt(b * b + 1.0);
  } else if (std::isnan(b)) {
    y = rtNaN;
  } else {
    y = a * 1.4142135623730951;
  }
  return y;
}

//
// Arguments    : const ::coder::array<double, 2U> &x
//                const ::coder::array<double, 2U> &y
//                double p[2]
// Return Type  : void
//
namespace coder {
void polyfit(const ::coder::array<double, 2U> &x,
             const ::coder::array<double, 2U> &y, double p[2])
{
  array<double, 2U> V;
  array<double, 1U> B;
  double tau_data[2];
  double temp;
  int i;
  int ii_tmp;
  int ix;
  int knt;
  int lastv;
  int m;
  int u0;
  signed char jpvt[2];
  V.set_size(x.size(1), 2);
  if (x.size(1) != 0) {
    i = x.size(1);
    for (lastv = 0; lastv < i; lastv++) {
      V[lastv + V.size(0)] = 1.0;
      V[lastv] = x[lastv];
    }
  }
  B.set_size(y.size(1));
  ix = y.size(1);
  for (i = 0; i < ix; i++) {
    B[i] = y[i];
  }
  m = V.size(0);
  u0 = V.size(0);
  if (u0 > 2) {
    u0 = 2;
  }
  if (u0 - 1 >= 0) {
    std::memset(&tau_data[0], 0,
                static_cast<unsigned int>(u0) * sizeof(double));
  }
  if (V.size(0) == 0) {
    jpvt[0] = 1;
    jpvt[1] = 2;
  } else {
    double vn1[2];
    double vn2[2];
    double work[2];
    int ma;
    ma = V.size(0);
    jpvt[0] = 1;
    work[0] = 0.0;
    temp = internal::blas::xnrm2(V.size(0), V, 1);
    vn1[0] = temp;
    vn2[0] = temp;
    jpvt[1] = 2;
    work[1] = 0.0;
    temp = internal::blas::xnrm2(V.size(0), V, V.size(0) + 1);
    vn1[1] = temp;
    vn2[1] = temp;
    for (int b_i{0}; b_i < u0; b_i++) {
      double atmp;
      double beta1;
      int ii;
      int ip1;
      int mmi;
      int pvt;
      ip1 = b_i + 2;
      ii_tmp = b_i * ma;
      ii = ii_tmp + b_i;
      mmi = m - b_i;
      ix = 0;
      if ((2 - b_i > 1) && (std::abs(vn1[1]) > std::abs(vn1[b_i]))) {
        ix = 1;
      }
      pvt = b_i + ix;
      if (pvt != b_i) {
        ix = pvt * ma;
        for (lastv = 0; lastv < m; lastv++) {
          knt = ix + lastv;
          temp = V[knt];
          i = ii_tmp + lastv;
          V[knt] = V[i];
          V[i] = temp;
        }
        ix = jpvt[pvt];
        jpvt[pvt] = jpvt[b_i];
        jpvt[b_i] = static_cast<signed char>(ix);
        vn1[pvt] = vn1[b_i];
        vn2[pvt] = vn2[b_i];
      }
      if (b_i + 1 < m) {
        atmp = V[ii];
        ix = ii + 2;
        tau_data[b_i] = 0.0;
        if (mmi > 0) {
          temp = internal::blas::xnrm2(mmi - 1, V, ii + 2);
          if (temp != 0.0) {
            beta1 = rt_hypotd_snf(V[ii], temp);
            if (V[ii] >= 0.0) {
              beta1 = -beta1;
            }
            if (std::abs(beta1) < 1.0020841800044864E-292) {
              knt = 0;
              i = ii + mmi;
              do {
                knt++;
                for (lastv = ix; lastv <= i; lastv++) {
                  V[lastv - 1] = 9.9792015476736E+291 * V[lastv - 1];
                }
                beta1 *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while ((std::abs(beta1) < 1.0020841800044864E-292) &&
                       (knt < 20));
              beta1 = rt_hypotd_snf(atmp,
                                    internal::blas::xnrm2(mmi - 1, V, ii + 2));
              if (atmp >= 0.0) {
                beta1 = -beta1;
              }
              tau_data[b_i] = (beta1 - atmp) / beta1;
              temp = 1.0 / (atmp - beta1);
              for (lastv = ix; lastv <= i; lastv++) {
                V[lastv - 1] = temp * V[lastv - 1];
              }
              for (lastv = 0; lastv < knt; lastv++) {
                beta1 *= 1.0020841800044864E-292;
              }
              atmp = beta1;
            } else {
              tau_data[b_i] = (beta1 - V[ii]) / beta1;
              temp = 1.0 / (V[ii] - beta1);
              i = ii + mmi;
              for (lastv = ix; lastv <= i; lastv++) {
                V[lastv - 1] = temp * V[lastv - 1];
              }
              atmp = beta1;
            }
          }
        }
        V[ii] = atmp;
      } else {
        tau_data[b_i] = 0.0;
      }
      if (b_i + 1 < 2) {
        int jA;
        atmp = V[ii];
        V[ii] = 1.0;
        jA = (ii + ma) + 1;
        if (tau_data[0] != 0.0) {
          lastv = mmi - 1;
          knt = (ii + mmi) - 1;
          while ((lastv + 1 > 0) && (V[knt] == 0.0)) {
            lastv--;
            knt--;
          }
          ix = 1;
          ii_tmp = jA;
          int exitg1;
          do {
            exitg1 = 0;
            if (ii_tmp <= jA + lastv) {
              if (V[ii_tmp - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ii_tmp++;
              }
            } else {
              ix = 0;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        } else {
          lastv = -1;
          ix = 0;
        }
        if (lastv + 1 > 0) {
          if (ix != 0) {
            work[0] = 0.0;
            knt = 0;
            for (pvt = jA; ma < 0 ? pvt >= jA : pvt <= jA; pvt += ma) {
              temp = 0.0;
              i = pvt + lastv;
              for (ii_tmp = pvt; ii_tmp <= i; ii_tmp++) {
                temp += V[ii_tmp - 1] * V[(ii + ii_tmp) - pvt];
              }
              work[knt] += temp;
              knt++;
            }
          }
          if (!(-tau_data[0] == 0.0)) {
            for (ii_tmp = 0; ii_tmp < ix; ii_tmp++) {
              if (work[0] != 0.0) {
                temp = work[0] * -tau_data[0];
                i = lastv + jA;
                for (knt = jA; knt <= i; knt++) {
                  V[knt - 1] = V[knt - 1] + V[(ii + knt) - jA] * temp;
                }
              }
              jA += ma;
            }
          }
        }
        V[ii] = atmp;
      }
      for (ii_tmp = ip1; ii_tmp < 3; ii_tmp++) {
        ix = b_i + ma;
        if (vn1[1] != 0.0) {
          temp = std::abs(V[ix]) / vn1[1];
          temp = 1.0 - temp * temp;
          if (temp < 0.0) {
            temp = 0.0;
          }
          beta1 = vn1[1] / vn2[1];
          beta1 = temp * (beta1 * beta1);
          if (beta1 <= 1.4901161193847656E-8) {
            if (b_i + 1 < m) {
              temp = internal::blas::xnrm2(mmi - 1, V, ix + 2);
              vn1[1] = temp;
              vn2[1] = temp;
            } else {
              vn1[1] = 0.0;
              vn2[1] = 0.0;
            }
          } else {
            vn1[1] *= std::sqrt(temp);
          }
        }
      }
    }
  }
  knt = 0;
  if (u0 > 0) {
    for (lastv = 0; lastv < u0; lastv++) {
      if (V[lastv + V.size(0) * lastv] != 0.0) {
        knt++;
      }
    }
  }
  p[0] = 0.0;
  p[1] = 0.0;
  m = V.size(0);
  for (ii_tmp = 0; ii_tmp < u0; ii_tmp++) {
    if (tau_data[ii_tmp] != 0.0) {
      temp = B[ii_tmp];
      i = ii_tmp + 2;
      for (int b_i{i}; b_i <= m; b_i++) {
        temp += V[(b_i + V.size(0) * ii_tmp) - 1] * B[b_i - 1];
      }
      temp *= tau_data[ii_tmp];
      if (temp != 0.0) {
        B[ii_tmp] = B[ii_tmp] - temp;
        for (int b_i{i}; b_i <= m; b_i++) {
          B[b_i - 1] = B[b_i - 1] - V[(b_i + V.size(0) * ii_tmp) - 1] * temp;
        }
      }
    }
  }
  for (int b_i{0}; b_i < knt; b_i++) {
    p[jpvt[b_i] - 1] = B[b_i];
  }
  for (ii_tmp = knt; ii_tmp >= 1; ii_tmp--) {
    ix = jpvt[ii_tmp - 1] - 1;
    p[ix] /= V[(ii_tmp + V.size(0) * (ii_tmp - 1)) - 1];
    for (int b_i{0}; b_i <= ii_tmp - 2; b_i++) {
      p[jpvt[0] - 1] -= p[ix] * V[V.size(0) * (ii_tmp - 1)];
    }
  }
}

} // namespace coder

//
// File trailer for polyfit.cpp
//
// [EOF]
//
