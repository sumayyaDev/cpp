#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>> n;
    deque<ll> dq_arr(n+1);
    deque<ll> dq_sum(n+1);
    for(ll i=0; i<n; i++){
        cin>> dq_arr[i];
    }
    dq_sum[n-1]=dq_arr[n-1];
    for(ll i=n-2; i>=0; i--){
        dq_sum[i] = dq_arr[i]+dq_sum[i+1]; //suffix sum
    }

    ll q; cin>> q;
    while(q--){
        ll type, l, r, x;
        cin>> type;
        if(type==1){
            cin>> l >> r;
            l--;
            r--;
                cout<< dq_sum[l]-dq_sum[r+1] <<endl;
        }
        else if(type==2){
            cin>> x;
            dq_sum.push_front(x);
            dq_sum[0] += dq_sum[1];


        }
    }

   return 0;
}

