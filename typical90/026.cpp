#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

void dfs(int pos, int cur)
{
    col[pos] = cur;
    for (int i : G[pos])
    {
        if (col[i] == -1) dfs(i, 1 - cur);
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A.at(i) >> B.at(i);
}