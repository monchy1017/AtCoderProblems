#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, tmp;
    cin >> N;

    if (N < std::pow(10, 3))
        cout << N << endl;
    else if (N < std::pow(10, 4))
    {
        tmp = N / 10;
        N = tmp * 10;
        cout << N << endl;
    }
    else if (N < std::pow(10, 5))
    {
        tmp = N / 100;
        N = tmp * 100;
        cout << N << endl;
    }
    else if (N < std::pow(10, 6))
    {
        tmp = N / 1000;
        N = tmp * 1000;
        cout << N << endl;
    }
    else if (N < std::pow(10, 7))
    {
        tmp = N / 10000;
        N = tmp * 10000;
        cout << N << endl;
    }
    else if (N < std::pow(10, 8))
    {
        tmp = N / 100000;
        N = tmp * 100000;
        cout << N << endl;
    }
    else if (N < std::pow(10, 9))
    {
        tmp = N / 1000000;
        N = tmp * 1000000;
        cout << N << endl;
    }
}