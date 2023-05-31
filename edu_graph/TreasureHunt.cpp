#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int INF = 1e9;
struct Edge
{
    int to, cost;
    Edge(int to, int cost) : to(to), cost(cost) {}
};

vector<int> dijkstra(int s, vector<vector<Edge>>& G)
{
    vector<int> dist(G.size(), INF);
    dist[s] = 0;  // dist: 始点をゼロ、それ以外を無限大に

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
    que.emplace(0, s);  // pair<int, int> : 距離、頂点番号. 距離の小さい順にソートされている

    while (!que.empty())
    {
        int d = que.top().first;   // 現在の最短経路長
        int v = que.top().second;  // 最短経路の終点
        que.pop();

        if (d > dist[v]) continue;  // すでにdより小さい経路がdist[v]にあるなら更新しなくていいのでスキップ

        for (const auto& e : G[v])  // vから出る全ての辺に対してループ
        {
            // dist[e.to]は頂点e.toまでの最短経路。
            // dist[v]+e.cost(頂点bを経由した場合の頂点e.toまでの距離)の方が短ければ、
            // 値を更新して、queに追加する
            if (dist[e.to] > dist[v] + e.cost)
            {
                dist[e.to] = dist[v] + e.cost;
                que.emplace(dist[e.to], e.to);
            }
            // queには距離dist[w]と頂点番号wのペアが追加されていく。始点からの距離が小さい順に追加される。
        }
    }

    return dist;
}

int main()
{
    int n, m, t;
    cin >> n >> m >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<vector<Edge>> G(n);
    vector<vector<Edge>> G_rev(n);

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--, b--;  //(与えられた入力値を0初めに変換)
        G[a].emplace_back(b, c);
        G_rev[b].emplace_back(a, c);  // 反転した隣接行列の作成
    }

    auto dist1 = dijkstra(0, G);      // 0からiへの最短距離
    auto dist2 = dijkstra(0, G_rev);  // iから0への最短距離

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (dist1[i] == INF || dist2[i] == INF) continue;
        int money = a[i] * (t - (dist1[i] + dist2[i]));  // 行き帰りの時間を引いた値をかける。
        ans = max(ans, money);                           // moneyのうちの最大値を出力
    }

    cout << ans << endl;
    return 0;
}
