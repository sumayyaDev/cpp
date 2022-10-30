#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 1e5+5;

int main(){
    ll t; cin>> t;
    while(t--){
        ll n, u, l, r, val, q, index;
        cin>> n >> u;
        vector<ll> v(n+3);
        vector<ll> pref_sum(n);

        for(ll i=0; i<u; i++){
            cin>> l >> r >> val;
            v[l] += val;
            v[r+1] -= val;
        }
        pref_sum[0]=v[0];
        for(ll i=1; i<n; i++){
            pref_sum[i] = v[i]+pref_sum[i-1];
        }

        cin>> q;
        while(q--){
            cin>> index;
            //if(index<n)
                  cout<< pref_sum[index] <<endl;
        }


    }

   return 0;
}
