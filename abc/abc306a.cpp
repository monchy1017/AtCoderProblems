#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    string T = "";
    for (int i = 0; i < N; i++)
    {
        T += S.at(i);
        T += S.at(i);
    }
    cout << T << endl;
}