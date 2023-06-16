#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N, ans = 0;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++)
    {
        if ((A[i] % 2) == 0)
        {
            if ((A[i] % 3) != 0 && (A[i] % 5) != 0) ans = 1;
        }
    }

    if (ans == 0)
        cout << "APPROVED" << endl;
    else
        cout << "DENIED" << endl;
}