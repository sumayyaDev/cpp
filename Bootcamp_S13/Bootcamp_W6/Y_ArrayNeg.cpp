#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin>> n >> k;
    multiset<ll> ms; //multiset-->sorted, can have repeated elements too
    for(int i=0; i<n; i++){
        ll a; cin>> a;
        ms.insert(a);
    }
    for(int i=1; i<=k; i++){
        ll val = (-1)* *(ms.begin());
        ms.erase(ms.begin());
        ms.insert(val);
    }

    ll sum=0;
    for(auto x : ms){
       sum += x;
    }
    cout<< sum <<"\n";
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
