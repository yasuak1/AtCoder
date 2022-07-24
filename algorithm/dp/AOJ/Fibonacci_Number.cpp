#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1);

    // SET DP
    // O(N)
    dp.at(0) = 1;
    dp.at(1) = 1;
    for(int i=2; i<n+1; i++) dp.at(i) = dp.at(i-2) + dp.at(i-1);

    // DISP DP
    /*
    for(int i=0; i<n+1; i++) cout << dp.at(i) << ' ';
    cout << endl;
    */
    cout << dp.at(n) << endl;
}