#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    // SET DP
    vector<int> dp(n+1);
    dp.at(0) = 1;
    dp.at(1) = 1;
    for(int i=2; i<n+1; i++){
        dp.at(i) = dp.at(i-1) + dp.at(i-2);
    }
    
    // DISP 
    cout << dp.at(n) << endl;
}