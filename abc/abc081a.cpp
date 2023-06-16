#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;
    string s;
    cin >> s;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == '1') sum++;  // sは文字列型なので、'1'とするのを忘れない
    }
    cout << sum << endl;
}