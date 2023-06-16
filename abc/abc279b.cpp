#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;
    bool ans = false;
    for (int i = 0; i <= S.length() - T.length(); i++)
    {
        if (S.length() < T.length()) break;
        for (int j = 0; j < T.length(); j++)
        {
            if (S.at(i + j) != T.at(j))
            {
                break;
            }
            if (j == T.length() - 1)
            {
                ans = true;
                break;
            }
        }
    }
    if (ans == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
