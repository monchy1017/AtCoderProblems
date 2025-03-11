#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(3 * N);
    for (int i = 0; i < 3 * N; i++) cin >> A.at(i);

    vector<pair<int, int>> vec;
    for (int i = 0; i < 3 * N; i++) vec.push_back({i, A.at(i)});

    // Stable sort
    stable_sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) -> bool { return a.second < b.second; });

    vector<pair<int, int>> vec2;
    for (int i = 1; i < 3 * N - 1; i += 3)
    {
        vec2.push_back({vec[i].first, vec[i].second});
    }
    stable_sort(vec2.begin(), vec2.end(), [](const pair<int, int>& a, const pair<int, int>& b) -> bool { return a.first < b.first; });

    for (int i = 0; i < N; i++) cout << vec2[i].second << " ";
    cout << endl;
}
