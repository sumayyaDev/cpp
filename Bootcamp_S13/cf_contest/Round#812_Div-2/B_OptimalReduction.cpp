#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>> n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin>> a[i];
    }
    int prefix_len = 1; //ascending order
    while(prefix_len<n && a[prefix_len]<=a[prefix_len+1]){
        prefix_len++;
    }
    int suffix_len = 1;
    while(suffix_len<n && a[n-suffix_len]>=a[n+1-suffix_len]){
        suffix_len++;
    }
    if(prefix_len+suffix_len>=n){
        cout<< "YES" <<endl;
    }
    else{
        cout<< "NO" <<endl;
    }
}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}

