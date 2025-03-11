#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
// 未完成
// デルタ配列定義
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};

bool bfs(Graph &A, int ra, int ca, int rb, int cb)
{
    // 探索済みかどうかを管理する配列
    vector<vector<bool>> seen(A.size(), vector<bool>(A[0].size(), false));

    // 初期位置をキューにpush
    queue<pair<int, int>> q;
    q.push({ra, ca});
    seen[ra][ca] = true;

    // BFS
    while (!q.empty())
    {
        pair<int, int> current = q.front();
        q.pop();
        int x = current.first;
        int y = current.second;

        // 4方向を探索
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = x + dx[dir], ny = y + dy[dir];

            // グリッドから外れる場合や、未探索でない場合、または赤で塗られていない場合はスキップ
            if (nx < 0 || ny < 0 || nx >= A.size() || ny >= A[0].size() || seen[nx][ny] || A[nx][ny] == 0) continue;

            // ゴールに到達したらtrueを返す
            if (nx == rb && ny == cb) return true;

            // 新たな探索地点をキューに追加し、探索済みとマークする
            q.push({nx, ny});
            seen[nx][ny] = true;
        }
    }
    // ゴールに到達できなければfalseを返す
    return false;
}

int main()
{
    int H, W, Q;
    cin >> H >> W >> Q;
    Graph A(H, vector<int>(W));
    // 各クエリに対する操作
    for (int i = 0; i < Q; i++)
    {
        // 入力部
        int t;
        cin >> t;
        if (t == 1)
        {
            int r, c;
            cin >> r >> c;
            A[--r][--c] = 1;  //(r,c)を赤で塗る
        }
        else if (t == 2)
        {
            int ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            if (A[--ra][--ca] == 1 && A[--rb][--cb] == 1 && bfs(A, ra, ca, rb, cb))
            //(ra, ca)から(rb, cb)到達可能
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
    }
}