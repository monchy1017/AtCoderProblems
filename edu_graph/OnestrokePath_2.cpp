#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
int cnt = 0;
void dfs(const Graph &G, int v);

int main()
{
    // 頂点数、辺数受け取り
    int N, M;
    cin >> N >> M;
    // グラフ入力受け取り
    Graph G(N);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;  // 0indexにした
        G[a].push_back(b);
        G[b].push_back(a);  // 無向グラフなのでb->aも最初から追加
    }
    seen.assign(N, false);  // 全頂点を未訪問に初期化
    dfs(G, 0);
    cout << cnt << endl;
}

void dfs(const Graph &G, int v)  // ※関数内で配列を書き換えたい時に&つけるらしい
{
    seen[v] = true;  // 与えられたvをtrue(訪問済み)にする
    bool all_visited = true;
    for (for int i=0; i<N; i++)  // seen配列を通じて全edgeがtrueかどうか確認
    {
        if (!seen[i]) all_visited = false;
    }
    if (all_visited) cnt++;

    for (auto next_v : G[v])  // G[v](vから行ける頂点)のすべての要素をnext_vと言う変数で取り出してる
    {
        if (seen[next_v]) continue;  // next_vが探索済みならスルーする
        dfs(G, next_v);
        seen[next_v] = false;  // 再帰から戻った後再訪問可能にしているらしい
    }
}
