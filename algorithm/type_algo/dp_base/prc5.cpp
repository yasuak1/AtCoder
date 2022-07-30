#include<iostream>
#include<vector>
#include<algorithm>
#define INF (1<<21)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a.at(i);

    // SET DP
    vector<int> dp(n, INF);
    dp.at(0) = 0;
    for(int i=1; i<n; i++){
        for(int j=1; j<m+1; j++){
            if(i-j >= 0) dp.at(i) = min(dp.at(i), dp.at(i-j) + j * a.at(i));
        }
    }

    // DISP
    cout << dp.at(n-1) << endl;
}