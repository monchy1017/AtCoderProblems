#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
const ll INF = 1LL << 60;

int N;
ll h[100010];  // コスト
ll dp[100010];


int main(){
    int N;
    cin >> N;
    for (int i=0 ; i<N ; i++) cin >> h[i];
    
    for (int i=0 ; i<100010 ; i++) dp[i] = INF;
    dp[0] = 0;
    // もらうDP
    // for (int i=0; i<N; i++){
    //     chmin(dp[i], dp[i-1]+abs(h[i]-h[i-1]));
    //     if (i>1) chmin(dp[i], dp[i-2]+abs(h[i]-h[i-2]));
    // }

    // 配るDP
    for (int i=0; i<N; i++){
        chmin(dp[i+1], dp[i]+abs(h[i]-h[i+1]));
        chmin(dp[i+2], dp[i]+abs(h[i]-h[i+2]));
    }

    cout << dp[N-1] << endl;
}