#include<iostream>
#include<vector>
#define DPSIZE 10001
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin >> p.at(i);
    vector<bool> dp(DPSIZE, false);
    dp.at(0) = true;
    for(int i=0; i<n; i++){
        for(int j=DPSIZE-1; j>=0; j--){
            if(dp.at(j) && j + p.at(i) < DPSIZE) dp.at(j+p.at(i)) = true;
        }
    }
    int cnt=0;
    for(int i=0; i<DPSIZE; i++){
        if(dp.at(i)) cnt++;
    }
    cout << cnt << endl;
}