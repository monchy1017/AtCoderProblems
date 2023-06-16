#include <bits/stdc++.h>
using namespace std;

// vector<vector<char>> V(H, vector<int> W);

int main()
{
    int H, W;
    cin >> H >> W;
    vector<string> S_row(H), T_row(H);
    vector<string> S_col(W), T_col(W);
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            char cs = S_row.at(i).at(j);
            char ct = T.row.at(i).at(j);
            S_col(j).push_back(cs);
            T_col(j).push_back(ct);
        }
        
    }
}
