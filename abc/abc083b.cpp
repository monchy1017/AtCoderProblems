#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, n, a, b, ans = 0, sum;
    cin >> n >> a >> b;
    for (i = 0; i <= n; i++)
    {
        int temp = i;
        sum = 0;

        while (temp != 0)
        {
            sum += (temp % 10);
            temp = temp / 10;
        }
        if (sum >= a && sum <= b) ans += i;
    }
    cout << ans << endl;
    return 0;
}