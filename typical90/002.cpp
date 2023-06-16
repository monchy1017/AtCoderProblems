#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N % 2 != 0) return 0;

    for (int bit = 0; bit < (1 << N); bit++)
    {
        string S = "";
        for (int i = N - 1; i >= 0; i--)
        {
            if (!(bit & (1 << i)))
                S += "(";  // i桁目が0ならばSに'('をpush
            else
                S += ")";  // 1ならば)をpush
        }

        int cnt = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (S.at(i) == '(')
                cnt++;
            else if (S.at(i) == ')')
                cnt--;

            if (cnt < 0) break;
        }
        if (cnt == 0) cout << S << endl;
    }
}