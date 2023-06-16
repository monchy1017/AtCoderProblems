#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, ans = 0;  // alice - bob とするよりも、
                     // 直接ansから足し引きのほうがメモリ少なくて済む。
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // 降順ソートは、sort→reverseで実現
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            ans += a[i];
        else
            ans -= a[i];
    }
    cout << ans << endl;
}