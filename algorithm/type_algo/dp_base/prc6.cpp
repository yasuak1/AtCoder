#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> d(m);
    for(int i=0; i<m; i++) cin >> d.at(i);

    // SET DP
    vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));
    dp.at(0).at(0) = true;
    for(int i=1; i<m+1; i++){
        for(int j=0; j<n+1; j++){
            if(dp.at(i-1).at(j) == true){
                for(auto val: d){
                    if(j + val <= n) dp.at(i).at(j + val) = true;
                }
            }
        }
    }

    bool goal = false;
    for(int i=0; i<m+1; i++){
        if(dp.at(i).at(n)) goal = true;
    }

    // DISP
    for(int i=0; i<m+1; i++){
        for(int j=0; j<n+1; j++){
            cout << dp.at(i).at(j) << ' ';
        }
        cout << endl;
    }
    cout << (goal ? "Yes" : "No") << endl;
}