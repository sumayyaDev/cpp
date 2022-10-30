#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pi acos(-1)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> st;
    int t; cin>> t;
    while(t--){
        int type, n;
        cin>> type;
        if(type==1){
            cin>> n;
            st.push(n);
        }
        else if(type==2){
            if(!st.empty()) st.pop();
        }
        else{
            if(!st.empty()) cout<< st.top() << "\n";
            else  cout<< "Empty!\n";
        }

    }

   return 0;
}

