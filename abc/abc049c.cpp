#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> S.at(i) >> A.at(i);

    long long min_old = std::pow(10, 10);
    int min_index;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < min_old)
        {
            min_old = A[i];
            min_index = i;
        }
    }
    for (int j = min_index; j < N; j++)
    {
        cout << S.at(j) << endl;
    }
    for (int k = 0; k < min_index; k++)
    {
        cout << S.at(k) << endl;
    }
}