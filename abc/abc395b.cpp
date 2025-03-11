#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<string> s(n, string(n, '.'));
    rep(l, n){
        int r=n-1-l; // r+l=n-1
        if(l>r) continue;
        char c='#';
        if(l%2) c='.'; //偶数番目は.で塗りつぶすのでc=.
        for (int i=l; i<=r; i++){
            for (int j=l; j<=r; j++){
                s[i][j]=c;
                // rep(i, n) cout << s[i] << endl;
                // cout << endl;
            }
        }

        rep(i, n) cout << s[i] << endl;
    }
}
