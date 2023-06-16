#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int N, M;
int main()
{
    cin >> N >> M;
    vector ans(N, vector<bool>(N));
    vector a(M, vector<int>(N));
    rep(i, m) rep(j, n) cin >> a[i][j];
    rep(i, m) rep(j, n) a[i][j]--;  // 0-originに直した

    for (int i = 0; i < N - 1; i++)
    {
        ans[a.at(i)][a.at(i + 1)] = true;
    }
}

rep
{
    for (int j = 0; j < N; j++)
    {
        if (ans[i][j] == 1 || ans[j][i] == 1)
        {
            cnt -= 2;
        }
    }
}
cout << cnt / 2 << endl;

return 0;
}