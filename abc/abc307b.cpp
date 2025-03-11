#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S.at(i);
    bool flag = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != j)
            {
                string tmp = S.at(i) + S.at(j);
                int k = 0;
                while (k <= (tmp.size() - 1) / 2)
                {
                    if (tmp.at(k) != tmp.at(tmp.size() - 1 - k)) break;
                    if (k == (tmp.size() - 1) / 2) flag = true;
                    k++;
                }
            }
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}