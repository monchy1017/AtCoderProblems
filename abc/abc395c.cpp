#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define ll long long


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> cnt(1000005); //step1：10^6のカウント配列
    int mult=0; //step2：重複している数の個数
    const int INF=1001001001;
    int ans=INF;
    int r=0;
    rep(l, n){
        while(r<n && mult==0){
            cnt[a[r]]++;
            if (cnt[a[r]]==2) mult++;
            r++;
        }
        if(mult==0) break;
        ans=min(ans, r-l); //step3：最小値を更新
        if(cnt[a[l]]==2) mult--;
        cnt[a[l]]--;
    }
    if (ans==INF) ans=-1;
    cout << ans << endl;

    return 0;
}