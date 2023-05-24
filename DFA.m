function [C, F, rsq, p] = DFA(data)

    % ノイズdataを入力引数とし，
    % C（傾きαと切片の行列）と，
    % F（各Windowサイズでのそれぞれの標準偏差の結果平均）を出力引数とする．

    X = cumsum(data - mean(data)); % ノイズの累積和をとりランダムウォーク型に変換
    X = transpose(X);

    % サンプルの組を指定，ここではlog10のスケールで定義
    scmin = 4; %最小スケールの定義
    scmax = 125; %最大スケールの定義
    scres = 20; %スケール数の定義
    exponents = linspace(log10(scmin), log10(scmax), scres); % log10での等間隔なスケールの設定
    scale = round(10.^exponents);

    m = 1; % 近似する際の多項式の次元（線形なら1）

    for ns = 1:length(scale)% 範囲の大きさを変更して実行
        segments(ns) = floor(length(X) / scale(ns));

        for v = 1:segments(ns)% 同じ範囲で異なる場所で実行
            Idx_start = ((v - 1) * scale(ns)) + 1;
            Idx_stop = v * scale(ns);
            Index{v, ns} = Idx_start:Idx_stop; % 範囲の場所を指定
            X_Idx = X(Index{v, ns});
            C = polyfit(Index{v, ns}, X(Index{v, ns}), m); % 多項式近似を行う，多項式の係数が配列形式で出力される
            fit{v, ns} = polyval(C, Index{v, ns}); % 近似した多項式をそれぞれの時間で出力する
            RMS{ns}(v) = sqrt(mean((X_Idx - fit{v, ns}).^2)); % 近似値を引いた信号のRMSを計算する
        end

        F(ns) = sqrt(mean(RMS{ns}.^2)); % 範囲ごとRMSの結果の平均を取る
    end

    C = polyfit(log10(scale), log10(F), 1); %範囲の大きさごとの標準偏差をプロットし，線形近似する
    H = C(1);
    RegLine = polyval(C, log10(scale)); %回帰直線の導出

    y=log10(F);
    yfit = RegLine;
    
    yresid = y - yfit; % 残差値を符号付き数値のベクトルとして計算します。
    SSresid = sum(yresid.^2); % 残差を二乗して合計し、残差の二乗和を取得します。
    SStotal = (length(y)-1) * var(y); % 観測の回数から 1 を引いた数で y の分散を掛けることによって y の総二乗和を計算します。
    
    rsq = 1 - SSresid/SStotal; %  このトピックのはじめに指定された式を使用して、3 次近似の単純な R2 を計算します。
    
    [h, p] = ttest2(y,yfit); %t検定
    
    % プロット
    % figure1 = figure;

    % axes1 = axes('Parent',figure1,'YTickLabel',{'1','2','4','8','16','32','64','128','256','512','1024','2048','4096'},...
        %     'YTick',[0 1 2 3 4 5 6 7 8 9 10 11 12],...
        %     'XTickLabel',{'16','32','64','128','256','512','1024'});
    % % ylim(axes1,[0 5]);
    % hold(axes1,'all');

    plot(log10(scale), RegLine, 'k')% 回帰直線のプロット
    hold on
    plot(log10(scale), log10(F), 'o')% 範囲ごとの標準偏差をプロット
    hold off
    xlabel('log_{10}[n]')
    ylabel('log_{10}[F(n)]')
    legend(['Slope \alpha = ', num2str(H)], 'Data', 'Location', 'northwest')

    savefig(gcf, 'DFA_result.fig')

end
