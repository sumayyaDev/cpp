#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int x;
    while(t--){
        int n; cin>> n;
        set<int> st;
        for(int i=0; i<n; i++){
           cin>> x;
           st.insert(x);
        }
         cout<< st.size() << "\n";
    }


}
