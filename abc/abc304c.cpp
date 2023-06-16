#include <bits/stdc++.h>
using namespace std;

vector<bool> ans(N);
vector<int> X(N), Y(N);
int N, D;

double distance(int i, int j)
{
    double dx, dy;
    dx = X.at(i) - X.at(j);
    dy = Y.at(i) - Y.at(j);
    return std::sqrt(dx * dx + dy * dy);
}

void search(int i)
{
    for (int j = 0; j < N; j++)
    {
        if (ans.at(j) == false && distance(i, j) <= D)  // jが未感染かつiとの距離近い
        {
            ans.at(j) = true;
            search(j);
        }
    }
}

int main()
{
    cin >> N >> D;
    ans.at(0) = true;
    for (int i = 1; i < N; i++) cin >> ans.at(i) = false;

    for (int i = 0; i < N; i++) cin >> X.at(i) >> Y.at(i);
    search(0);
    for (int i = 0; i < N; i++)
    {
        if (ans.at(i) == true)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
