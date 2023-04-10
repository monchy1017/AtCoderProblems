#include <iostream>
using namespace std;

int main()
{
    int N;
    char c;
    cin >> N;
    bool flag = false;
    for (int i = 0; i < N; i++)
    {
        cin >> c;
        if (c == 'Y') flag = true;
    }
    if (flag)
        cout << "Four" << endl;
    else
        cout << "Three" << endl;
    return 0;
}
