#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << t[i];
    }
    cout << endl;
}