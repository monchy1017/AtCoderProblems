#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    // H行W列のing型行列を宣言。
    // vector<int> のベクトルを H 回複製し、
    // その内部ベクトルは W 個のint型の要素を持つように初期化
    vector<vector<int>> A(H, vector<int>(W));  // 0で初期化されている
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++) cin >> A[i][j];
    }

    // Aと同じ2次元配列をつくろうとも思ったが・・・
    // 横の和をH個、縦の和をW個の1次元配列出保持した方が良さそう
    vector<int> yoko(H, 0);
    vector<int> tate(W, 0);
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            yoko[i] += A[i][j];
            tate[j] += A[i][j];
        }
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cout << tate[j] + yoko[i] - A[i][j] << " ";
        }
        cout << endl;
    }
}