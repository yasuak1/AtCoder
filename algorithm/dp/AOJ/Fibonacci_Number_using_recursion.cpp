// TLE 
#include<iostream>
using namespace std;

int fibonacci(int n){
    // basecase
    if(n < 2) return 1;

    // step
    return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
    int n;
    cin >> n;

    // SET DP
    cout << fibonacci(n) << endl;
}