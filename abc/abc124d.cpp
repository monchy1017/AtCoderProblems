#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

// 2回反転できる->0の連続部分を2個分を反転できる
// K回反転できる->0の連続部分をK個分を反転できる

int main()
{
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    // RLE : numに連続数を交互に格納
    vector<int> num;
    // 先頭0にして、0の個数、1の個数・・・の順で格納
    int cnt = 1;
    char tmp = S.at(0);
    if (S.at(0) == '0') num.push_back(0);
    for (int i = 1; i < S.size(); i++)
    {
        if (S.at(i) == tmp)
        {
            cnt++;
        }
        else
        {
            num.push_back(cnt);
            tmp = S.at(i);
            cnt = 1;  // 初期化
        }
    }
    num.push_back(cnt);
    // RLE確認用：
    // for (int i = 0; i < num.size(); i++) cout << num.at(i) << endl;

    // 累積和
    vector<int> sum((int)num.size() + 1, 0);  // RLEの数＋1用意する。0初期化
    for (int i = 0; i < num.size(); i++)
    {
        sum.at(i + 1) = sum.at(i) + num.at(i);
    }
    // for (int i = 0; i < sum.size(); i++) cout << sum.at(i) << endl;
    //  numのi=0,2,4,6,...に0の個数が格納されているので、最大を選んでいく
    int ans = 0;
    for (int l = 0; l < sum.size(); l += 2)
    {
        int r = l + K * 2 + 1;                         // 長さ2K+1に右端を設定
        if (r >= sum.size()) r = (int)sum.size() - 1;  // 右端が配列を越してしまったら、配列の最大要素にした
        ans = max(ans, sum.at(r) - sum.at(l));
    }
    cout << ans << endl;
    return 0;
}
