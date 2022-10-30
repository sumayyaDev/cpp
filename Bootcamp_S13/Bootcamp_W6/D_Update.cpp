#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin>> t;
    while(t--){
        ll n, u;
        cin>> n >> u;
        ll v[n+1] = {0};
        //ll pref_sum[n] = {0};

        while(u--){
            ll l, r, val;
            cin>> l >> r >> val;
            v[l] += val;
            v[r+1] -= val;
        }

        for(ll i=1; i<n; i++){
            v[i] += v[i-1];
        }
        ll q;
        cin>> q;
        while(q--){
            ll index;
            cin>> index;
            //if(index<n)
                  cout<< v[index] <<endl;
        }
    }

   return 0;
}

