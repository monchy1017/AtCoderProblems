#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int INF = 1 << 30;

struct Edge  // 辺の行先とコストを格納するための構造体
{
    int to, cost;
    Edge(int to, int cost) : to(to), cost(cost) {}
};

struct S  // 頂点番号(v)とその頂点までの距離(cost)を保持する構造体 キーの小さい順に並ぶよう定義
{
    int v, cost;
    S(int v = 0, int cost = 0) : v(v), cost(cost) {}
    bool operator<(const S& s) const { return cost > s.cost; }
};

int V, E;  // V:頂点数、E:辺数
vector<vector<Edge> > G;
int main()
{
    cin >> V >> E;
    int r;
    cin >> r;
    // 隣接リストを表現したグラフG。V個の空リストを作成。
    G.clear();
    G.resize(V);
    for (int i = 0; i < E; i++)
    {
        int s, t, d;
        cin >> s >> t >> d;
        G[s].push_back(Edge(t, d));
    }

    vector<int> D(V, INF);  // D:各頂点までの距離の配列 初期値INF
    D[r] = 0;               // 始点の距離を0に
    priority_queue<S> PQ;   // 優先度付きキュー
    PQ.push(S(r, 0));       // 始点の情報 (r,0)を格納
    while (!PQ.empty())
    {
        S c = PQ.top();  // PQから距離が最小の頂点を取り出す
        PQ.pop();
        for (int i = 0; i < G[c.v].size(); i++)
        {
            // cの各辺eについて、eの行き先e.toまでの距離を計算
            Edge& e = G[c.v][i];
            int ncost = D[c.v] + e.cost;
            // ncostが現在のD[e.to]より小さい時ncostに更新しPQに(e.to, ncost)を挿入する
            if (D[e.to] > ncost)
            {
                D[e.to] = ncost;
                PQ.push(S(e.to, ncost));
            }
        }
    }
    for (int i = 0; i < V; i++)
    {
        // D配列の値を順に出力。
        if (D[i] == INF)
        {
            // D[i]がINFなら頂点iに到達することができないのでINF出力
            cout << "INF" << endl;
        }
        else
        {
            cout << D[i] << endl;
        }
    }

    return 0;
}
