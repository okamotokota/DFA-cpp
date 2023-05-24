#include <iostream>
#include <fstream>
#include <list>
#include <numeric>
#include <vector>

using namespace std;
int main()
{
    const int EXPECTED = 500;

    std::ifstream ifs;      // ファイル読み取り用ストリーム
    ifs.open("sample.txt"); // ファイルオープン

    if (ifs.fail())
    { // ファイルオープンに失敗したらそこで終了
        std::cerr << "ファイルを開けません\n";
        exit(1);
    }
    char buf[256]; // データ一時保管用配列

    int linenum = 0; // データの行数を数える

    while (ifs.getline(buf, sizeof(buf)))
    {              // ファイルから1行ずつ読み込む
        linenum++; // 行数をカウントしている
    }

    std::cerr << "読み込んだ行数 = " << linenum << "\n";

    if (linenum != EXPECTED)
    {
        std::cerr << "データ数が" << EXPECTED << "個ではありません\n";
        exit(1);
    }

    ifs.clear();                 // ファイル末尾に到達というフラグをクリア
    ifs.seekg(0, std::ios::beg); // ファイル先頭に戻る

    vector<double> arr(linenum);
    // arr = new double[linenum]; // 行数 linenum 分の配列を動的に確保

    for (int i = 0; i < linenum; i++)
    {
        ifs.getline(buf, sizeof(buf)); // 一行読み込んで…
        arr[i] = atof(buf);            // それを配列に格納
    }

    // これで、arr[0]〜arr[linenum-1] に計 linenum 個のデータが格納された
    std::cout << arr[0] << std::endl;
    ifs.close(); // ファイルを閉じる

    double arrAverage = accumulate(arr.begin(), arr.end(), 0.0) / linenum;
    // double arrAve = arrSum / linenum;
    // std::cout << "平均値: " << arrAverage << std::endl;

    vector<double> cumulative_sum(linenum);
    for (int i = 0; i < linenum; i++)
    {
        if (i == 0)
            cumulative_sum[i] = arr[i] - arrAverage;
        else
            cumulative_sum[i] = cumulative_sum[i] + arr[i] - arrAverage;
    }
    cout << "cumulative_sum: " << cumulative_sum[linenum - 1] << endl;

    return 0;
}