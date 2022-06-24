#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> st;
    st.insert(0);
    for(int i=0; i<n; i++){
        int p;
        cin >> p;
        set<int> buf=st;
        for(auto val: st){
            buf.insert(val + p);
        }
        st = buf;  
    }
    cout << st.size() << endl;
}