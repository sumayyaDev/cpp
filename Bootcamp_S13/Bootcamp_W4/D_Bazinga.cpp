#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const ll MAX=2e7+1;
vector<ll> primes;
vector<bool> isprime;
void sieve()
{
    isprime.assign(MAX+10, true);
    isprime[0]=isprime[1]=false;

    for(ll i=2; i*i<=MAX; i++){
        if(!isprime[i]) continue;
        for(ll j=i*i; j<=MAX; j+=i){
            isprime[j]=false;
        }
    }

    for(ll i=2; i<=MAX; i++){
        if(isprime[i])
            primes.push_back(i);
    }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    vector<ll> multiplied_primes;
    for(ll i=0; i<primes.size(); i++){
        for(ll j=i+1; j<primes.size() && primes[i]*primes[j]<=MAX; j++){
            multiplied_primes.push_back(primes[i]*primes[j]);
        }
    }
    sort(multiplied_primes.begin(), multiplied_primes.end());

    int t; cin>> t;
    while(t--){
        ll k; cin>> k;
        cout<< multiplied_primes[k-1] <<"\n";
    }

    return 0;
}
