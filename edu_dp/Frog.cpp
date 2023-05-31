#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    // dpテーブル用意。n+2要素、1<<30(inf)を初期格納
    vector<int> dp(n + 2, 1 << 30);
    // 0番目のみ0に初期化
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        // 配るdpにしてみた
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }
    cout << dp[n - 1] << endl;
}