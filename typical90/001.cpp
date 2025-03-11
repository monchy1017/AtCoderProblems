#include <iostream>
#include <vector>
using namespace std;

// 判定問題
// すべての長さを x 以上にすることが可能か？
bool check(long long x, const vector<long long>& A, long long N, long long L, long long K)
{
    long long num = 0;  // 何個に切れたか
    long long pre = 0;  // 前回の切れ目
    for (int i = 0; i < N; ++i)
    {
        // x を超えたら切断
        if (A[i] - pre >= x)
        {
            ++num;
            pre = A[i];
        }
    }
    // 最後のピースが x 以上なら加算
    if (L - pre >= x) ++num;

    return (num >= K + 1);
}

int main()
{
    // 入力
    long long N, L, K;
    cin >> N >> L >> K;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    // 二分探索
    long long left = -1, right = L + 1;
    while (right - left > 1)
    {
        long long mid = (left + right) / 2;
        if (check(mid, A, N, L, K))
            left = mid;
        else
            right = mid;
    }
    cout << left << endl;
}
