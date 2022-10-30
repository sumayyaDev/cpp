#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        int n; cin>> n;
        int a;
        set<int> st;
        for(int i=0; i<n; i++){
            cin>> a;
            st.insert(a);
        }
        if(st.size()==n){
            cout<< "YES\n";
        }
        else cout<< "NO\n";
    }

    return 0;
}
