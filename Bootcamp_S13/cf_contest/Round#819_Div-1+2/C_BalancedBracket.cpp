#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>> n;
    string str;
    cin>> str;
    n = 2*n;

    int ans=1;
    for(int i=1; i<n; i++){
        if(str[i]=='(' && str[i-1]=='('){
           ans++;
        }
    }

    cout<< ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
