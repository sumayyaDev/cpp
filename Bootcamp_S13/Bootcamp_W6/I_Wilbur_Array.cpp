#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 200000+9;
const ll MAX2 = 1e18+10;

void solve()
{
    ll n; cin>> n;
    //ll a[n] = {0};
    ll b[MAX];
    for(ll i=0; i<n; i++){
        cin>> b[i];
    }
    ll ans=abs(b[0]);
    for(ll i=1; i<n; i++){
        ans += abs(b[i]-b[i-1]);
    }
    cout<< ans <<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

   return 0;
}

