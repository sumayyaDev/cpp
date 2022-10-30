#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>> n;
    int a[n];
    int sa[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
        sa[i] = a[i];
    }
    sort(sa, sa+n);
    int flag=0;
    for(int i=0; i<n; i++){
        if(a[i]!=sa[i]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<< "NO" <<endl;
    }
    else{
        cout<< "YES" <<endl;
    }
}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
