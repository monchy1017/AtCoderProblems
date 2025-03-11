#include <bits/stdc++.h>
using namespace std;

int binsearch_abs(int key, vector<int> &A)
{
    int l = 0, r = (int)A.size() - 1, mid = (l + r) / 2;
    while (l < r)
    {
        if (A.at(mid) == key)
            return 0;
        else if (A.at(mid) > key)
            r = mid - 1;
        else if (A.at(mid) < key)
            l = mid + 1;
    }
    int absL = (l < A.size()) ? abs(A[l] - key) : INT_MAX;
    int absR = (r >= 0) ? abs(A[r] - key) : INT_MAX;

    return min(absL, absR);
}

int main()
{
    int N, Q;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    cin >> Q;
    vector<int> B(Q);
    for (int i = 0; i < Q; i++) cin >> B.at(i);

    sort(A.begin(), A.end());  // NlogN

    for (int j = 0; j < Q; j++)
    {
        // 各生徒に対してabs最小値を二分探索
        cout << binsearch_abs(B.at(j), A) << endl;
    }
}