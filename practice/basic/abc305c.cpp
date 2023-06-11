#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

// vector<vector<char>> V(H, vector<int> W);

int main()
{
    int H, W;
    cin >> H >> W;
    char arr[H][W];
    int cnt = 0, min_j = 1000, a = 1000, c = 1000, b = 0, d = 0;
    int ans_i, ans_j;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (arr[i][j] == '#')
            {
                cnt = 0;
                min_j = j;
                a = min(a, min_j);
                for (int k = j + 1; k < W; k++)
                {
                    if (arr[i][k] != '#') break;
                    cnt++;
                }
                b = max(b, a + cnt);
            }
        }
    }
    min_j = 1000;
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < H; j++)
        {
            if (arr[j][i] == '#')
            {
                cnt = 0;
                min_j = j;
                c = min(c, min_j);
                for (int k = j + 1; k < H; k++)
                {
                    if (arr[k][i] != '#') break;
                    cnt++;
                }
                d = max(d, c + cnt);
            }
        }
    }
    // cout << c << " " << d << endl;

    for (int i = c; i <= d; i++)
    {
        for (int j = a; j <= b; j++)
        {
            if (arr[i][j] == '.')
            {
                ans_i = i + 1;
                ans_j = j + 1;
            }
        }
    }
    cout << ans_i << " " << ans_j << endl;
}
