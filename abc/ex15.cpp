#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> scores)
{
    int sum = 0;
    for (int i = 0; i < scores.size(); i++)
    {
        sum += scores.at(i);
    }
    return sum;
}
void output(int sum_a, int sum_b, int sum_c) { cout << sum_a * sum_b * sum_c << endl; }

vector<int> input(int N)
{
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
    }
    return vec;
}

int main()
{
    // 科目の数Nを受け取る
    int N;
    cin >> N;

    // それぞれのテストの点数を受け取る
    vector<int> A = input(N);
    vector<int> B = input(N);
    vector<int> C = input(N);

    // それぞれの合計点を計算
    int sum_A = sum(A);
    int sum_B = sum(B);
    int sum_C = sum(C);

    // プレゼントの予算を出力
    output(sum_A, sum_B, sum_C);
}