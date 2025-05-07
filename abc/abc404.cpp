#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
#define vi vector<int>
#define Edge pair<int, int>
using G = vector<vector<Edge>>;
vector<bool> visited;



bool is_cycle_graph(const G &g){
    int n = g.size();
    for (int v=0; v < n; v++){
        if (g[v].size() != 2) return false;
    }
    int edges = 0;
    for(int v=0; v < n; v++){
        edges += g[v].size();
    }
    vector<bool> seen(n, false);
    seen[0] = true;
    int cntVisited = 1;
    stack<int> st;
    st.push(0);
    //dfs
    while(!st.empty()){
        int v = st.top();
        st.pop();
        for (auto e : g[v]){
            if (!seen[e.first]){
                seen[e.first] = true;
                cntVisited++;
                st.push(e.first);
            }
        }
    }
    if(cntVisited == n){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    vi a(n, 0);
    vector<pair<int, int>> p(m);
    for (int i = 0; i < m; i++){
        cin >> p[i].first >> p[i].second;
    }
    G g(n);
    for (int i = 0; i < m; i++){
        g[p[i].first - 1].push_back({p[i].second - 1, 0});
        g[p[i].second - 1].push_back({p[i].first - 1, 0});
    }
    vector<bool> seen(n, false);
    vector<bool> finished(n, false);
    bool ans = is_cycle_graph(g);

    if (ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}