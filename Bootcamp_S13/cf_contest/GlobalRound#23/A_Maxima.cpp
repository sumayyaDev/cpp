#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        int n, k;
        cin>> n >> k;
        int a[n]; int cnt0=0;
        for(int i=0; i<n; i++){
            cin>> a[i];
            if(a[i]==0) cnt0++;
        }
        if(cnt0==n || k>n) cout<< "NO\n";
        else cout<< "YES\n";
    }


   return 0;
}

