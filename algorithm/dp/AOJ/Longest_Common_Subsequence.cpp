#include<iostream>
#include<vector>
using namespace std;

int longest_common_subsequence(string s1, string s2){
    vector<vector<int>> dp(s1.length()+1, vector<int>(s2.length()+1));
    
    // SET DP
    for(int i=0; i<s1.length()+1; i++) dp.at(i).at(0) = 0;
    for(int j=0; j<s2.length()+1; j++) dp.at(0).at(j) = 0; 
    for(int i=1; i<s1.length()+1; i++){
        for(int j=1; j<s2.length()+1; j++){
            if(s1.at(i-1) == s2.at(j-1)) dp.at(i).at(j) = dp.at(i-1).at(j-1) + 1;
            dp.at(i).at(j) = max(dp.at(i).at(j), max(dp.at(i-1).at(j), dp.at(i).at(j-1)));
        }
    }

    // DISP DP
    /*
    for(int i=0; i<s1.length()+1; i++){
        for(int j=0; j<s2.length()+1; j++){
            cout << dp.at(i).at(j) << ' ';
        }
        cout << endl;
    }
    */
    return dp.at(s1.length()).at(s2.length());
}

int main(){
    int q;
    cin >> q;
    while(q--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << longest_common_subsequence(s1, s2) << endl;
    }
}