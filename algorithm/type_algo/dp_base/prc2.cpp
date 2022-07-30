#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a.at(i);

    // SET DP
    vector<int> dp(n+1);
    dp.at(0) = 0;
    dp.at(1) = dp.at(0) + a.at(1);
    for(int i=2; i<n; i++){
        dp.at(i) = min(dp.at(i-1) + a.at(i), dp.at(i-2) + 2 * a.at(i));
    }
    
    // DISP
    cout << dp.at(n-1) << endl;
}