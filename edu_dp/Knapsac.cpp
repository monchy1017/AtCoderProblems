#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 64ビット整数型最大値に近い値
const long long INF = 1LL << 60;
// 初期値ゼロ
long long dp[110][100100] = {0};

// chmin, chmax宣言
template <class T>
inline void chmin(T& a, T b)
{
    if (a > b) a = b;
}
template <class T>
inline void chmax(T& a, T b)
{
    if (a < b) a = b;
}

int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> w[n], v[n];
    for (int i = 0; i < n; i++) cin >> w[i] >> v[i];

    for (int i = 0; i < n; i++)
    {
        for (int sum = 0; sum <= w; sum++)
        {
            //
            if (sum - w[i] >= 0)
            {
                chmax(dp[i + 1][sum], dp[i][sum - w[i] + v[i]])
            }
        }
    }
}