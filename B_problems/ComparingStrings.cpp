#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a <= b)
    {
        for (int i = 0; i < b; i++)
        {
            printf("%d", a);
        }
    }
    if (a > b)
    {
        for (int i = 0; i < a; i++)
        {
            printf("%d", b);
        }
    }
}