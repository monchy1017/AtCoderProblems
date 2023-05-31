#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main()
{
    int N, M;
    cin >> N >> M;
    Graph G(N);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);  // 無向グラフなのでb->aも最初から追加
    }
}
