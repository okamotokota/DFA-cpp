/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: DFA.c
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 24-May-2023 19:02:56
 */

/* Include Files */
#include "DFA.h"
#include "DFA_emxutil.h"
#include "DFA_rtwutil.h"
#include "DFA_types.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "polyfit.h"
#include "polyval.h"
#include "rt_nonfinite.h"
#include "unsafeSxfun.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static double rt_roundd_snf(double u);

/* Function Definitions */
/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }
  return y;
}

/*
 * scmin(最小スケール)，scmax(最大スケール)，scres(スケール数)を定義し，
 *  傾きαと，h,p（t検定結果）を出力する．
 *  dfa_out.txtに標準偏差と回帰直線のデータを出力
 *
 * Arguments    : const double data[500]
 *                double scmin
 *                double scmax
 *                double scres
 *                double *alpha
 *                emxArray_real_T *dfa_out
 * Return Type  : void
 */
void DFA(const double data[500], double scmin, double scmax, double scres,
         double *alpha, emxArray_real_T *dfa_out)
{
  cell_wrap_0 *RMS_data;
  emxArray_cell_wrap_0 *RMS;
  emxArray_real_T b_X_data;
  emxArray_real_T *F;
  emxArray_real_T *RegLine;
  emxArray_real_T *r;
  emxArray_real_T *scale;
  emxArray_real_T *segments;
  double X[500];
  double X_data[500];
  double C[2];
  double d;
  double d1;
  double delta1;
  double delta2;
  double *F_data;
  double *RegLine_data;
  double *r1;
  double *scale_data;
  double *segments_data;
  int X_size[2];
  int b_i;
  int i;
  int i1;
  int i3;
  int i4;
  int i5;
  int k;
  int ns;
  int v;
  /*      data=readmatrix("sample.txt"); */
  delta2 = data[0];
  for (k = 0; k < 499; k++) {
    delta2 += data[k + 1];
  }
  delta2 /= 500.0;
  for (i = 0; i < 500; i++) {
    X[i] = data[i] - delta2;
  }
  for (k = 0; k < 499; k++) {
    X[k + 1] += X[k];
  }
  /*  ノイズの累積和をとりランダムウォーク型に変換 */
  /*  サンプルの組を指定，ここではlog10のスケールで定義 */
  /*  scmin = 4; %最小スケ */
  /*  log10での等間隔なスケールの設定 */
  emxInit_real_T(&RegLine, 2);
  RegLine_data = RegLine->data;
  d1 = log10(scmin);
  delta2 = log10(scmax);
  if (!(scres >= 0.0)) {
    RegLine->size[0] = 1;
    RegLine->size[1] = 0;
  } else {
    d = floor(scres);
    b_i = RegLine->size[0] * RegLine->size[1];
    RegLine->size[0] = 1;
    RegLine->size[1] = (int)d;
    emxEnsureCapacity_real_T(RegLine, b_i);
    RegLine_data = RegLine->data;
    if ((int)d >= 1) {
      i = (int)d - 1;
      RegLine_data[(int)floor(scres) - 1] = delta2;
      if (RegLine->size[1] >= 2) {
        RegLine_data[0] = d1;
        if (RegLine->size[1] >= 3) {
          if (d1 == -delta2) {
            delta2 /= (double)RegLine->size[1] - 1.0;
            for (k = 2; k <= i; k++) {
              RegLine_data[k - 1] =
                  (double)(((k << 1) - RegLine->size[1]) - 1) * delta2;
            }
            if ((RegLine->size[1] & 1) == 1) {
              RegLine_data[RegLine->size[1] >> 1] = 0.0;
            }
          } else if (((d1 < 0.0) != (delta2 < 0.0)) &&
                     ((fabs(d1) > 8.9884656743115785E+307) ||
                      (fabs(delta2) > 8.9884656743115785E+307))) {
            delta1 = d1 / ((double)RegLine->size[1] - 1.0);
            delta2 /= (double)RegLine->size[1] - 1.0;
            b_i = RegLine->size[1];
            for (k = 0; k <= b_i - 3; k++) {
              RegLine_data[k + 1] = (d1 + delta2 * ((double)k + 1.0)) -
                                    delta1 * ((double)k + 1.0);
            }
          } else {
            delta1 = (delta2 - d1) / ((double)RegLine->size[1] - 1.0);
            b_i = RegLine->size[1];
            for (k = 0; k <= b_i - 3; k++) {
              RegLine_data[k + 1] = d1 + ((double)k + 1.0) * delta1;
            }
          }
        }
      }
    }
  }
  emxInit_real_T(&scale, 2);
  b_i = scale->size[0] * scale->size[1];
  scale->size[0] = 1;
  scale->size[1] = RegLine->size[1];
  emxEnsureCapacity_real_T(scale, b_i);
  scale_data = scale->data;
  k = RegLine->size[1];
  for (b_i = 0; b_i < k; b_i++) {
    delta2 = RegLine_data[b_i];
    scale_data[b_i] = rt_powd_snf(10.0, delta2);
  }
  i = scale->size[1];
  for (k = 0; k < i; k++) {
    scale_data[k] = rt_roundd_snf(scale_data[k]);
  }
  /*  近似する際の多項式の次元（線形なら1） */
  emxInit_real_T(&segments, 2);
  b_i = segments->size[0] * segments->size[1];
  segments->size[0] = 1;
  i1 = (int)scres;
  segments->size[1] = (int)scres;
  emxEnsureCapacity_real_T(segments, b_i);
  segments_data = segments->data;
  emxInit_cell_wrap_0(&RMS);
  b_i = RMS->size[0] * RMS->size[1];
  RMS->size[0] = 1;
  RMS->size[1] = (int)scres;
  emxEnsureCapacity_cell_wrap_0(RMS, b_i);
  RMS_data = RMS->data;
  for (ns = 0; ns < i1; ns++) {
    /*  範囲の大きさを変更して実行 */
    d = floor(500.0 / scale_data[ns]);
    segments_data[ns] = d;
    b_i = RMS_data[ns].f1->size[0] * RMS_data[ns].f1->size[1];
    RMS_data[ns].f1->size[0] = 1;
    i = (int)d;
    RMS_data[ns].f1->size[1] = (int)d;
    emxEnsureCapacity_real_T(RMS_data[ns].f1, b_i);
    for (b_i = 0; b_i < i; b_i++) {
      RMS_data[ns].f1->data[b_i] = 0.0;
    }
  }
  emxInit_real_T(&F, 2);
  b_i = F->size[0] * F->size[1];
  F->size[0] = 1;
  F->size[1] = (int)scres;
  emxEnsureCapacity_real_T(F, b_i);
  F_data = F->data;
  emxInit_real_T(&r, 2);
  for (ns = 0; ns < i1; ns++) {
    /*  範囲の大きさを変更して実行 */
    b_i = (int)segments_data[ns];
    for (v = 0; v < b_i; v++) {
      int i2;
      /*  同じ範囲で異なる場所で実行 */
      d = scale_data[ns];
      delta1 = (((double)v + 1.0) - 1.0) * d + 1.0;
      delta2 = ((double)v + 1.0) * d;
      /*  範囲の場所を指定 */
      if (delta1 > delta2) {
        i2 = 0;
        i3 = 0;
        i4 = 0;
        i = 0;
      } else {
        i2 = (int)delta1 - 1;
        i3 = (int)delta2;
        i4 = (int)delta1 - 1;
        i = (int)delta2;
      }
      if (delta2 < delta1) {
        RegLine->size[0] = 1;
        RegLine->size[1] = 0;
      } else if (floor(delta1) == delta1) {
        i5 = RegLine->size[0] * RegLine->size[1];
        RegLine->size[0] = 1;
        k = (int)(delta2 - delta1);
        RegLine->size[1] = k + 1;
        emxEnsureCapacity_real_T(RegLine, i5);
        RegLine_data = RegLine->data;
        for (i5 = 0; i5 <= k; i5++) {
          RegLine_data[i5] = delta1 + (double)i5;
        }
      } else {
        eml_float_colon(delta1, delta2, RegLine);
        RegLine_data = RegLine->data;
      }
      X_size[0] = 1;
      k = i - i4;
      X_size[1] = k;
      for (i = 0; i < k; i++) {
        X_data[i] = X[i4 + i];
      }
      b_X_data.data = &X_data[0];
      b_X_data.size = &X_size[0];
      b_X_data.allocatedSize = 500;
      b_X_data.numDimensions = 2;
      b_X_data.canFreeData = false;
      polyfit(RegLine, &b_X_data, C);
      /*  多項式近似を行う，多項式の係数が配列形式で出力される */
      /*  近似した多項式をそれぞれの時間で出力する */
      if (rtIsNaN(delta1) || rtIsNaN(delta2)) {
        i4 = RegLine->size[0] * RegLine->size[1];
        RegLine->size[0] = 1;
        RegLine->size[1] = 1;
        emxEnsureCapacity_real_T(RegLine, i4);
        RegLine_data = RegLine->data;
        RegLine_data[0] = rtNaN;
      } else if (delta2 < delta1) {
        RegLine->size[0] = 1;
        RegLine->size[1] = 0;
      } else if (floor(delta1) == delta1) {
        i4 = RegLine->size[0] * RegLine->size[1];
        RegLine->size[0] = 1;
        i = (int)(delta2 - delta1);
        RegLine->size[1] = i + 1;
        emxEnsureCapacity_real_T(RegLine, i4);
        RegLine_data = RegLine->data;
        for (i4 = 0; i4 <= i; i4++) {
          RegLine_data[i4] = delta1 + (double)i4;
        }
      } else {
        eml_float_colon(delta1, delta2, RegLine);
        RegLine_data = RegLine->data;
      }
      i4 = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = RegLine->size[1];
      emxEnsureCapacity_real_T(r, i4);
      r1 = r->data;
      if (RegLine->size[1] != 0) {
        i = RegLine->size[1];
        i4 = r->size[0] * r->size[1];
        r->size[0] = 1;
        r->size[1] = RegLine->size[1];
        emxEnsureCapacity_real_T(r, i4);
        r1 = r->data;
        for (i4 = 0; i4 < i; i4++) {
          r1[i4] = C[0];
        }
        if (RegLine->size[1] == r->size[1]) {
          i = RegLine->size[1] - 1;
          i4 = r->size[0] * r->size[1];
          r->size[0] = 1;
          r->size[1] = RegLine->size[1];
          emxEnsureCapacity_real_T(r, i4);
          r1 = r->data;
          for (i4 = 0; i4 <= i; i4++) {
            r1[i4] = RegLine_data[i4] * r1[i4] + C[1];
          }
        } else {
          b_binary_expand_op(r, RegLine, C);
          r1 = r->data;
        }
      }
      if (k == r->size[1]) {
        i3 = RegLine->size[0] * RegLine->size[1];
        RegLine->size[0] = 1;
        RegLine->size[1] = k;
        emxEnsureCapacity_real_T(RegLine, i3);
        RegLine_data = RegLine->data;
        for (i3 = 0; i3 < k; i3++) {
          delta2 = X[i2 + i3] - r1[i3];
          RegLine_data[i3] = rt_powd_snf(delta2, 2.0);
        }
      } else {
        binary_expand_op(RegLine, X, i2, i3 - 1, r);
        RegLine_data = RegLine->data;
      }
      RMS_data[ns].f1->data[v] =
          sqrt(combineVectorElements(RegLine) / (double)RegLine->size[1]);
      /*  近似値を引いた信号のRMSを計算する */
    }
    b_i = RegLine->size[0] * RegLine->size[1];
    RegLine->size[0] = 1;
    k = RMS_data[ns].f1->size[1];
    RegLine->size[1] = RMS_data[ns].f1->size[1];
    emxEnsureCapacity_real_T(RegLine, b_i);
    RegLine_data = RegLine->data;
    for (b_i = 0; b_i < k; b_i++) {
      delta2 = RMS_data[ns].f1->data[b_i];
      RegLine_data[b_i] = rt_powd_snf(delta2, 2.0);
    }
    F_data[ns] =
        sqrt(combineVectorElements(RegLine) / (double)RegLine->size[1]);
    /*  範囲ごとRMSの結果の平均を取る */
  }
  emxFree_real_T(&r);
  emxFree_cell_wrap_0(&RMS);
  emxFree_real_T(&segments);
  i = scale->size[1];
  for (k = 0; k < i; k++) {
    scale_data[k] = log10(scale_data[k]);
  }
  i = F->size[1];
  for (k = 0; k < i; k++) {
    F_data[k] = log10(F_data[k]);
  }
  polyfit(scale, F, C);
  /* 範囲の大きさごとの標準偏差をプロットし，線形近似する */
  b_i = RegLine->size[0] * RegLine->size[1];
  RegLine->size[0] = 1;
  RegLine->size[1] = scale->size[1];
  emxEnsureCapacity_real_T(RegLine, b_i);
  RegLine_data = RegLine->data;
  if (scale->size[1] != 0) {
    i = scale->size[1];
    b_i = RegLine->size[0] * RegLine->size[1];
    RegLine->size[0] = 1;
    RegLine->size[1] = scale->size[1];
    emxEnsureCapacity_real_T(RegLine, b_i);
    RegLine_data = RegLine->data;
    for (b_i = 0; b_i < i; b_i++) {
      RegLine_data[b_i] = C[0];
    }
    if (scale->size[1] == RegLine->size[1]) {
      k = scale->size[1] - 1;
      b_i = RegLine->size[0] * RegLine->size[1];
      RegLine->size[0] = 1;
      RegLine->size[1] = scale->size[1];
      emxEnsureCapacity_real_T(RegLine, b_i);
      RegLine_data = RegLine->data;
      for (b_i = 0; b_i <= k; b_i++) {
        RegLine_data[b_i] = scale_data[b_i] * RegLine_data[b_i] + C[1];
      }
    } else {
      b_binary_expand_op(RegLine, scale, C);
      RegLine_data = RegLine->data;
    }
  }
  /* 回帰直線の導出 */
  /*  残差値を符号付き数値のベクトルとして計算します。 */
  /*  残差を二乗して合計し、残差の二乗和を取得します。 */
  /*  観測の回数から 1 を引いた数で y の分散を掛けることによって y
   * の総二乗和を計算します。 */
  /*   このトピックのはじめに指定された式を使用して、3 次近似の単純な R2
   * を計算します。 */
  /*      [h, p] = ttest2(y,yfit); %t検定 */
  /*  プロット */
  /*  figure1 = figure; */
  /*  axes1 =
   * axes('Parent',figure1,'YTickLabel',{'1','2','4','8','16','32','64','128','256','512','1024','2048','4096'},...
   */
  /*      'YTick',[0 1 2 3 4 5 6 7 8 9 10 11 12],... */
  /*      'XTickLabel',{'16','32','64','128','256','512','1024'}); */
  /*  % ylim(axes1,[0 5]); */
  /*  hold(axes1,'all'); */
  /*   */
  /*      plot(log10(scale), RegLine, 'k')% 回帰直線のプロット */
  /*      hold on */
  /*      plot(log10(scale), log10(F), 'o')% 範囲ごとの標準偏差をプロット */
  /*      hold off */
  /*      xlabel('log_{10}[n]') */
  /*      ylabel('log_{10}[F(n)]') */
  /*      legend(['Slope \alpha = ', num2str(alpha)], 'Data', 'Location',
   * 'northwest') */
  /*   */
  /*      savefig(gcf, 'DFA_result.fig') */
  b_i = dfa_out->size[0] * dfa_out->size[1];
  dfa_out->size[0] = scale->size[1];
  dfa_out->size[1] = 3;
  emxEnsureCapacity_real_T(dfa_out, b_i);
  segments_data = dfa_out->data;
  k = scale->size[1];
  for (b_i = 0; b_i < k; b_i++) {
    segments_data[b_i] = scale_data[b_i];
  }
  emxFree_real_T(&scale);
  k = RegLine->size[1];
  for (b_i = 0; b_i < k; b_i++) {
    segments_data[b_i + dfa_out->size[0]] = RegLine_data[b_i];
  }
  emxFree_real_T(&RegLine);
  k = F->size[1];
  for (b_i = 0; b_i < k; b_i++) {
    segments_data[b_i + dfa_out->size[0] * 2] = F_data[b_i];
  }
  emxFree_real_T(&F);
  /*  end */
  *alpha = C[0];
}

/*
 * File trailer for DFA.c
 *
 * [EOF]
 */
