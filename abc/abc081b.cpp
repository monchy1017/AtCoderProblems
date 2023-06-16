#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, max = 0, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (1)
    {
        bool flag = true;
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                flag = false;
                break;
            }
            else
                a[i] = a[i] / 2;
        }
        if (flag)
            max++;
        else
            break;
    }
    cout << max << endl;
}