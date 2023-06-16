#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
