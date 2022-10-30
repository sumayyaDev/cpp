#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n; cin>> n;
    vector<ll> v(n+1);
    vector<ll> pref_sum(n+1);
    for(ll i=0; i<n; i++){
        cin>> v[i];
    }
    pref_sum[0]=v[0];
    for(ll i=1; i<n; i++){
        pref_sum[i] = v[i] + pref_sum[i-1];
    }
    ll sum1, sum2, cnt=0, r1, r2;
    for(ll i=0; i<n-1; i++){
        r1=i;
        r2=n-1;
        sum1 = pref_sum[r1];
        sum2 = pref_sum[r2]-pref_sum[r1];
        if(sum1==sum2) cnt++;
    }
    cout<< cnt <<endl;
}
