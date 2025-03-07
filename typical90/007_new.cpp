#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    cin >> Q;
    vector<int> B(Q);
    for (int i = 0; i < Q; i++) cin >> B.at(i);

    sort(A.begin(), A.end());  // NlogN

    for (int i = 0; i < Q; i++)
    {
        // key以上の値の一番左のイテレータを返す
        int j = lower_bound(A.begin(), A.end(), B.at(i)) - A.begin();
        cout << j << endl;
        // たとえば3200 4000 4400 5000のテストケースで
        // B.at(0)=3312ならjは1が返されるので、3312-A.at(1)と-A.at(0)の小さい方
        // B.at(1)=2992ならj==0なので比較はA.at(0)のみ
        //  key-A.at(j-1)  と A.at(j)-key を比較
        //  j==0を考慮
        if (j == 0)
        {
            cout << abs(A.at(j) - B.at(i)) << endl;
        }
        else if (j == N)
        {
            cout << abs(A.at(j - 1) - B.at(i)) << endl;
        }
        else
        {
            cout << min(abs(B.at(i) - A.at(j - 1)), abs(B.at(i) - A.at(j))) << endl;
        }
    }
}