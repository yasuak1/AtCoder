#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    // SET DP
    vector<int> dp(n+1);
    dp.at(0) = 1;
    for(int i=1; i<n+1; i++){
        if(i-1 >= 0) dp.at(i) += dp.at(i-1);
        if(i-2 >= 0) dp.at(i) += dp.at(i-2);
        if(i-3 >= 0) dp.at(i) += dp.at(i-3);
    }

    // DISP
    cout << dp.at(n) << endl;
}