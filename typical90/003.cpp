#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;  // データ型定義

vector<int> dfs(int s)  // 参照渡しG, 始点s
{
    int N = G.size();
    vector<int> distance(N, -1);
    distance.at(s) = 0;  // 始点のみ0初期化
    stack<int> st;
    st.push(s);  // スタック作成後sで初期化
    while (!st.empty())
    {
        int v = st.top();
        st.pop();
        for (int i = 0; i < G[v].size(); i++)
        {
            int nv = G[v][i];
            if (distance[nv] == -1)
            {
                st.push(nv);
                distance[nv] = distance[v] + 1;
            }
        }
    }
    return distance;
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A.at(i) >> B.at(i);
    for (int i=0; i<N; i++) 
    
}
