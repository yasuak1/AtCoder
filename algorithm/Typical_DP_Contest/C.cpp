#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int pow(int k){
    int res=1;
    while(k--) res *= 2;
    return res;
}

float elo_rating(int i, int j, vector<float> &r){
    return 1.0 / (1.0 + pow(10.0, (r.at(i) - r.at(j)) / 400.0));
}

int main(){
    int n, k;
    cin >> k;
    n = pow(k);
    vector<float> r(n);
    for(int i=0; i<n; i++) cin >> r.at(i);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++) cout << elo_rating(i, j, r) << endl;
    }
}   