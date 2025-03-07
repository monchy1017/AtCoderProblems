#include <bits/stdc++.h>
using namespace std;

vector<string> Y;

int main()
{
    int Ha, Wa;
    cin >> Ha >> Wa;
    vector<string> A(Ha, string(Wa, ' '));
    for (int i = 0; i < Ha; i++) cin >> A.at(i);

    int Hb, Wb;
    cin >> Hb >> Wb;
    vector<string> B(Hb, string(Wb, ' '));
    for (int i = 0; i < Hb; i++) cin >> B.at(i);

    int Hx, Wx;
    cin >> Hx >> Wx;
    vector<string> X(Hx, string(Wx, ' '));
    for (int i = 0; i < Hx; i++) cin >> X.at(i);

    int h_a = max(Hx - Ha + 1, 1);
    int w_a = max(Wx - Wa + 1, 1);
    int h_b = max(Hx - Hb + 1, 1);
    int w_b = max(Wx - Wb + 1, 1);
}