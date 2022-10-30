#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

vector<bool> isprime;
vector<ll> primes;

void sieve(ll n)
{
    isprime.assign(n+1, true);
    isprime[0]=isprime[1]=false;

    for(ll i=2; i*i<=n; i++){
        if(!isprime[i]) continue;
        for(ll j=i*i; j<=n; j+=i){
            isprime[j]=false;
        }
    }

    for(ll i=2; i<=n; i++){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
}

vector<ll> compo_primes;
void comp_primes()
{
    for(int i=0; i<primes.size(); i++){
        for(int j=i; primes[i]*primes[j]<=1e7; j++){
            compo_primes.push_back(primes[i]*primes[j]);
        }
    }
    sort(compo_primes.begin(), compo_primes.end());
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve(1e7);
    comp_primes();

    ll n;
    while(cin>> n){
        vector<ll> v;
        ll cnt=0;
        for(int i=0; i<n; i++){
            ll x;
            cin>> x;
            v.push_back(x);
        }

        for(int i=0; i<n; i++){
            auto it = lower_bound(compo_primes.begin(), compo_primes.end(), v[i]);
            if(*it==v[i]) cnt++;

        }
        cout<< cnt << "\n";
    }


    return 0;
}

