#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 200000+10;
int main(){

    ll n, k, q, l, r;
    cin>> n >> k >> q;

    vector<ll> v(N);
    vector<ll> pref_sum(N);
    for(ll i=0; i<n; i++){
        cin>> l >> r;
        v[l] += 1;
        v[r+1] -= 1;
    }
    ll sum=0;
    for(ll i=0; i<N; i++){
        sum += v[i];
        if(sum>=k){
            v[i]=1;
        }
        else{
            v[i]=0;
        }
    }
    pref_sum[0]=v[0];
    for(ll i=1; i<pref_sum.size(); i++){
        pref_sum[i] = v[i]+pref_sum[i-1];
    }

    ll a, b;
    while(q--){
        cin>> a >> b;
        if(a>0){
            cout<< pref_sum[b]-pref_sum[a-1] <<endl;
        }
        else{
            cout<< pref_sum[b] <<endl;
        }
    }

   return 0;
}

