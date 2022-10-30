#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve()
{
    ll n; cin>> n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>> a[i];
    }
    sort(a, a+n);
    int cnt=0;
    ll operation=0;
    for(ll i=0; i<n-1; i++){
        if(a[i]<0){
            operation += abs(a[i])+a[i+1];
            a[i] = a[i+1];
        }
        if(a[i]<=a[i+1]){
            operation += a[i+1]-a[i];
            cnt++;
            if(cnt==2) break;
        }
    }
    cout<< operation <<endl;
}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

    return 0;
}

