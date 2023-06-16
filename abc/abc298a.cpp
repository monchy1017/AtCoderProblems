#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    int cnt = 0;  // 良カウンタ
    for (int i = 0; i < S.length(); i++)
    {
        if (S.at(i) == 'x')
        {
            cout << "No" << endl;
            return 0;
        }
        if (S.at(i) == 'o') cnt++;
    }
    if (cnt != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}