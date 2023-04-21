#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, d, e, ans = 1;
    cin >> a >> b >> c >> d >> e;
    if (a != b) ans++;
    if (c != a && c != b) ans++;
    if (d != a && d != b && d != c) ans++;
    if (e != a && e != b && e != c && e != d) ans++;
    cout << ans << endl;
}