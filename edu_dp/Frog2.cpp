#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, -1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k && i + j < n; j++)
        {
            dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
        }
    }
    cout << dp[n - 1] << endl;
}