#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A(64);
    for (int i = 0; i < 64; i++) cin >> A.at(i);
    unsigned long long sum = 0;
    for (int i = 0; i < 64; i++)
    {
        sum += (unsigned long long)A.at(i) * (unsigned long long)pow(2.0, (double)i);
    }
    cout << sum << endl;
}