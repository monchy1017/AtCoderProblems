#include <bits/stdc++.h>
using namespace std;
#include <algorithm>

int main()
{
    char p, q;
    cin >> p >> q;
    int p_num, q_num;
    if (p == 'A')
        p_num = 'A' - 'A';
    else if (p == 'B')
        p_num = 'B' - 'A';
    else if (p == 'C')
        p_num = 'C' - 'A';
    else if (p == 'D')
        p_num = 'D' - 'A';
    else if (p == 'E')
        p_num = 'E' - 'A';
    else if (p == 'F')
        p_num = 'F' - 'A';
    else if (p == 'G')
        p_num = 'G' - 'A';

    if (q == 'A')
        q_num = 'A' - 'A';
    else if (q == 'B')
        q_num = 'B' - 'A';
    else if (q == 'C')
        q_num = 'C' - 'A';
    else if (q == 'D')
        q_num = 'D' - 'A';
    else if (q == 'E')
        q_num = 'E' - 'A';
    else if (q == 'F')
        q_num = 'F' - 'A';
    else if (q == 'G')
        q_num = 'G' - 'A';

    int a[7];
    a['A' - 'A'] = 0;
    a['B' - 'A'] = 3;
    a['C' - 'A'] = 4;
    a['D' - 'A'] = 8;
    a['E' - 'A'] = 9;
    a['F' - 'A'] = 14;
    a['G' - 'A'] = 23;

    int distance = abs(a[p_num] - a[q_num]);
    // cout << q_num << p_num << endl;
    cout << distance << endl;

    return 0;
}
