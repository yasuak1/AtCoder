#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;

    // SET DP
    vector<int> dp(n+1);
    dp.at(0) = x;
    dp.at(1) = y;
    for(int i=2; i<n; i++){
        dp.at(i) = dp.at(i-1) + dp.at(i-2);
        dp.at(i) %= 100;
    }

    // DISP
    cout << dp.at(n-1) << endl;
}