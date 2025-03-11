#include <bits/stdc++.h>
using namespace std;
// TLEだった。stackを使うらしい
int main()
{
    int N;
    cin >> N;
    string S;
    for (int i = 0; i < N; i++) cin >> S;
    bool flag = false;
    int cnt = N / 2;
    int s_i;
    while (cnt > 0)
    {
        flag = false;
        for (int i = 0; i < S.size(); i++)
        {
            if (S.at(i) == '(')
            {
                flag = true;
                s_i = i;
            }
            if (S.at(i) == ')')
            {
                if (flag == true) S.erase(s_i, i - s_i + 1);
                flag = false;
            }
        }
        cnt--;
    }
    cout << S << endl;
}