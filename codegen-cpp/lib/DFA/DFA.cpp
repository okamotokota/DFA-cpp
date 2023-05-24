//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: DFA.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 24-May-2023 19:50:41
//

// Include Files
#include "DFA.h"
#include "DFA_rtwutil.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "polyfit.h"
#include "polyval.h"
#include "rt_nonfinite.h"
#include "unsafeSxfun.h"
#include "coder_array.h"
#include <cmath>

// Type Definitions
struct cell_wrap_0 {
  coder::array<double, 2U> f1;
};

// Function Definitions
//
// scmin(最小スケール)，scmax(最大スケール)，scres(スケール数)を定義し，
//  傾きαと，h,p（t検定結果）を出力する．
//  dfa_out.txtに標準偏差と回帰直線のデータを出力
//
// Arguments    : const double data[500]
//                double scmin
//                double scmax
//                double scres
//                double *alpha
//                coder::array<double, 2U> &dfa_out
// Return Type  : void
//
void DFA(const double data[500], double scmin, double scmax, double scres,
         double *alpha, coder::array<double, 2U> &dfa_out)
{
  coder::array<cell_wrap_0, 2U> RMS;
  coder::array<double, 2U> F;
  coder::array<double, 2U> RegLine;
  coder::array<double, 2U> b_X_data;
  coder::array<double, 2U> r;
  coder::array<double, 2U> scale;
  coder::array<double, 2U> segments;
  double X[500];
  double X_data[500];
  double C[2];
  double d;
  double d1;
  double delta1;
  double delta2;
  int b_i;
  int i;
  int i1;
  int k;
  //      data=readmatrix("sample.txt");
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
  //  ノイズの累積和をとりランダムウォーク型に変換
  //  サンプルの組を指定，ここではlog10のスケールで定義
  //  scmin = 4; %最小スケ
  //  log10での等間隔なスケールの設定
  d1 = std::log10(scmin);
  delta2 = std::log10(scmax);
  if (!(scres >= 0.0)) {
    RegLine.set_size(1, 0);
  } else {
    d = std::floor(scres);
    RegLine.set_size(1, static_cast<int>(d));
    if (static_cast<int>(d) >= 1) {
      i = static_cast<int>(d) - 1;
      RegLine[static_cast<int>(d) - 1] = delta2;
      if (RegLine.size(1) >= 2) {
        RegLine[0] = d1;
        if (RegLine.size(1) >= 3) {
          if (d1 == -delta2) {
            delta2 /= static_cast<double>(RegLine.size(1)) - 1.0;
            for (k = 2; k <= i; k++) {
              RegLine[k - 1] =
                  static_cast<double>(((k << 1) - RegLine.size(1)) - 1) *
                  delta2;
            }
            if ((RegLine.size(1) & 1) == 1) {
              RegLine[RegLine.size(1) >> 1] = 0.0;
            }
          } else if (((d1 < 0.0) != (delta2 < 0.0)) &&
                     ((std::abs(d1) > 8.9884656743115785E+307) ||
                      (std::abs(delta2) > 8.9884656743115785E+307))) {
            delta1 = d1 / (static_cast<double>(RegLine.size(1)) - 1.0);
            delta2 /= static_cast<double>(RegLine.size(1)) - 1.0;
            b_i = RegLine.size(1);
            for (k = 0; k <= b_i - 3; k++) {
              RegLine[k + 1] = (d1 + delta2 * (static_cast<double>(k) + 1.0)) -
                               delta1 * (static_cast<double>(k) + 1.0);
            }
          } else {
            delta1 =
                (delta2 - d1) / (static_cast<double>(RegLine.size(1)) - 1.0);
            b_i = RegLine.size(1);
            for (k = 0; k <= b_i - 3; k++) {
              RegLine[k + 1] = d1 + (static_cast<double>(k) + 1.0) * delta1;
            }
          }
        }
      }
    }
  }
  scale.set_size(1, RegLine.size(1));
  k = RegLine.size(1);
  for (b_i = 0; b_i < k; b_i++) {
    delta2 = RegLine[b_i];
    scale[b_i] = rt_powd_snf(10.0, delta2);
  }
  i = scale.size(1);
  for (k = 0; k < i; k++) {
    scale[k] = std::round(scale[k]);
  }
  //  近似する際の多項式の次元（線形なら1）
  b_i = static_cast<int>(scres);
  segments.set_size(1, b_i);
  RMS.set_size(1, b_i);
  for (int ns{0}; ns < b_i; ns++) {
    //  範囲の大きさを変更して実行
    d = std::floor(500.0 / scale[ns]);
    segments[ns] = d;
    i = static_cast<int>(d);
    RMS[RMS.size(0) * ns].f1.set_size(1, i);
    for (i1 = 0; i1 < i; i1++) {
      RMS[ns].f1[i1] = 0.0;
    }
  }
  F.set_size(1, b_i);
  for (int ns{0}; ns < b_i; ns++) {
    //  範囲の大きさを変更して実行
    i1 = static_cast<int>(segments[ns]);
    for (int v{0}; v < i1; v++) {
      int i2;
      int i3;
      int i4;
      //  同じ範囲で異なる場所で実行
      d = scale[ns];
      delta1 = ((static_cast<double>(v) + 1.0) - 1.0) * d + 1.0;
      delta2 = (static_cast<double>(v) + 1.0) * d;
      //  範囲の場所を指定
      if (delta1 > delta2) {
        i2 = 0;
        i3 = 0;
        i4 = 0;
        i = 0;
      } else {
        i2 = static_cast<int>(delta1) - 1;
        i3 = static_cast<int>(delta2);
        i4 = static_cast<int>(delta1) - 1;
        i = static_cast<int>(delta2);
      }
      if (delta2 < delta1) {
        RegLine.set_size(1, 0);
      } else if (std::floor(delta1) == delta1) {
        k = static_cast<int>(delta2 - delta1);
        RegLine.set_size(1, k + 1);
        for (int i5{0}; i5 <= k; i5++) {
          RegLine[i5] = delta1 + static_cast<double>(i5);
        }
      } else {
        coder::eml_float_colon(delta1, delta2, RegLine);
      }
      k = i - i4;
      for (i = 0; i < k; i++) {
        X_data[i] = X[i4 + i];
      }
      b_X_data.set(&X_data[0], 1, k);
      coder::polyfit(RegLine, b_X_data, C);
      //  多項式近似を行う，多項式の係数が配列形式で出力される
      //  近似した多項式をそれぞれの時間で出力する
      if (std::isnan(delta1) || std::isnan(delta2)) {
        RegLine.set_size(1, 1);
        RegLine[0] = rtNaN;
      } else if (delta2 < delta1) {
        RegLine.set_size(1, 0);
      } else if (std::floor(delta1) == delta1) {
        i = static_cast<int>(delta2 - delta1);
        RegLine.set_size(1, i + 1);
        for (i4 = 0; i4 <= i; i4++) {
          RegLine[i4] = delta1 + static_cast<double>(i4);
        }
      } else {
        coder::eml_float_colon(delta1, delta2, RegLine);
      }
      r.set_size(1, RegLine.size(1));
      if (RegLine.size(1) != 0) {
        i = RegLine.size(1);
        r.set_size(1, RegLine.size(1));
        for (i4 = 0; i4 < i; i4++) {
          r[i4] = C[0];
        }
        if (RegLine.size(1) == r.size(1)) {
          i = RegLine.size(1) - 1;
          r.set_size(1, RegLine.size(1));
          for (i4 = 0; i4 <= i; i4++) {
            r[i4] = RegLine[i4] * r[i4] + C[1];
          }
        } else {
          binary_expand_op(r, RegLine, C);
        }
      }
      if (k == r.size(1)) {
        RegLine.set_size(1, k);
        for (i3 = 0; i3 < k; i3++) {
          delta2 = X[i2 + i3] - r[i3];
          RegLine[i3] = rt_powd_snf(delta2, 2.0);
        }
      } else {
        binary_expand_op(RegLine, X, i2, i3 - 1, r);
      }
      RMS[ns].f1[v] = std::sqrt(coder::combineVectorElements(RegLine) /
                                static_cast<double>(RegLine.size(1)));
      //  近似値を引いた信号のRMSを計算する
    }
    k = RMS[ns].f1.size(1);
    RegLine.set_size(1, RMS[RMS.size(0) * ns].f1.size(1));
    for (i1 = 0; i1 < k; i1++) {
      delta2 = RMS[ns].f1[i1];
      RegLine[i1] = rt_powd_snf(delta2, 2.0);
    }
    F[ns] = std::sqrt(coder::combineVectorElements(RegLine) /
                      static_cast<double>(RegLine.size(1)));
    //  範囲ごとRMSの結果の平均を取る
  }
  i = scale.size(1);
  for (k = 0; k < i; k++) {
    scale[k] = std::log10(scale[k]);
  }
  i = F.size(1);
  for (k = 0; k < i; k++) {
    F[k] = std::log10(F[k]);
  }
  coder::polyfit(scale, F, C);
  // 範囲の大きさごとの標準偏差をプロットし，線形近似する
  RegLine.set_size(1, scale.size(1));
  if (scale.size(1) != 0) {
    i = scale.size(1);
    RegLine.set_size(1, scale.size(1));
    for (b_i = 0; b_i < i; b_i++) {
      RegLine[b_i] = C[0];
    }
    if (scale.size(1) == RegLine.size(1)) {
      k = scale.size(1) - 1;
      RegLine.set_size(1, scale.size(1));
      for (b_i = 0; b_i <= k; b_i++) {
        RegLine[b_i] = scale[b_i] * RegLine[b_i] + C[1];
      }
    } else {
      binary_expand_op(RegLine, scale, C);
    }
  }
  // 回帰直線の導出
  //  残差値を符号付き数値のベクトルとして計算します。
  //  残差を二乗して合計し、残差の二乗和を取得します。
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
  dfa_out.set_size(scale.size(1), 3);
  k = scale.size(1);
  for (b_i = 0; b_i < k; b_i++) {
    dfa_out[b_i] = scale[b_i];
  }
  k = RegLine.size(1);
  for (b_i = 0; b_i < k; b_i++) {
    dfa_out[b_i + dfa_out.size(0)] = RegLine[b_i];
  }
  k = F.size(1);
  for (b_i = 0; b_i < k; b_i++) {
    dfa_out[b_i + dfa_out.size(0) * 2] = F[b_i];
  }
  //  end
  *alpha = C[0];
}

//
// File trailer for DFA.cpp
//
// [EOF]
//
