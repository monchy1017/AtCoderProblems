#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    // dpテーブルn*n, 0で初期化.
    // dp[i][j]:i~j要素が残っているときの太郎の最大点
    vector<vector<long>> dp(n, vector<long>(n, 0));
    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i < n - len + 1; i++)
        {
            int j = i + len - 1;
            if (i == j)
            {
                dp[i][j] = a[i];
            }
            else
            {
                dp[i][j] = max(a[i] - dp[i + 1][j], a[j] - dp[i][j - 1]);
            }
        }
    }
    cout << dp[0][n - 1] << endl;
}