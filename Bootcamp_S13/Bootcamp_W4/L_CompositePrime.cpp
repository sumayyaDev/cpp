#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const ll MAX=1e7;
vector<bool> isprime;
vector<ll> primes;
vector<ll> comp_primes;
void sieve()
{
    isprime.assign(MAX+1, true);
    isprime[0]=isprime[1]=false;

    for(ll i=2; i*i<=MAX; i++){
        if(!isprime[i]) continue;
        for(ll j=2*i; j<=MAX; j+=i){
            isprime[j]=false;
        }
    }

    for(ll i=2; i<=MAX; i++){
        if(isprime[i]){
            primes.push_back(i);
        }
    }

}

void sieve_composite_primes()
{
    for(ll i=0; i<primes.size(); i++){
        for(ll j=i; primes[i]*primes[j]<=MAX; j++){
            comp_primes.push_back(primes[i]*primes[j]);
        }
    }
    sort(comp_primes.begin(), comp_primes.end());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    sieve_composite_primes();
    ll n;
    while(cin>> n){

        vector<ll> v;
        ll cnt=0;
        for(ll i=0; i<n; i++){
            ll x; cin>> x;
            v.push_back(x);
        }
        for(ll i=0; i<n; i++){

            auto it = lower_bound(comp_primes.begin(), comp_primes.end(), v[i]);
            if(*it==v[i]) cnt++;

        }

        cout<< cnt <<"\n";
    }


}
