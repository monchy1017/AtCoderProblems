#include <iostream>
#include <vector>

using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>


bool is_samegroup(vi a, int i, int j){
    // i,jを受け取り、a[i]とa[j] が同じグループに属するかを判定する
    if(i==j) return true;
    if((i>j and a[i]==i) or (i<j and a[j]==j)) return false; //どちらかが根に達してしまった
    if(i>j){
        i=a[i];
        return is_samegroup(a, i, j);
    }
    else {
        j=a[j];
        return is_samegroup(a, i, j);
    }
}




int main(){
    vector<int> a =  {0, 1, 1, 0, 1, 5, 3, 7, 2, 6, 3, 7};
    vector<int> b = {9, 2, 8, 0, 1, 5, 3, 11, 4, 10, 6, 7};

    cout << is_samegroup(a, 5, 4) << endl;
    return 0;
}