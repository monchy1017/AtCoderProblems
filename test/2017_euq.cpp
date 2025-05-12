#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

double find_min(vector<double> px, vector<double> py){
    double min_dist = std::numeric_limits<double>::infinity();
    for (int i=0; i<px.size(); i++){
        for (int j=i+1; j<px.size(); j++){
            double dx = px[i]-px[j];
            double dy = py[i]-py[j];
            double dist = sqrt(dx*dx+dy*dy);
            min_dist = min(min_dist, dist);
        }
    }
    return min_dist;
}

double find_min2(const vector<double>& px, const vector<double>& py, int left, int right){
    int n = right - left + 1;
    int mid = (left + right)/2;
    double x_mid = px[mid];
    //再帰処理
    double dist = min(find_min2(px, py, left, mid), find_min2(px, py, mid+1, right));

    vector<double> sx, sy;
    for(int i=left; i<=right; i++){
        for
    }
}


int main() {
    int N;
    cin >> N;
    vector<double> px(N), py(N);
    for (int i = 0; i < N; ++i) {
        cin >> px[i] >> py[i];
    }

    double ans = find_min(px, py);
    cout << ans << "\n";
    return 0;
}