#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> primes;
vector<bool> isprime;
//const ll n_max = 1e15;
void sieve(ll n_max)
{
    isprime.assign(n_max+5, true);
    isprime[0]=isprime[1]=false;
    for(ll i=4; i<=n_max; i+=2){
        isprime[i]=false;
    }
    for(ll i=3; i<=n_max; i+=2){
        if(isprime[i]){
            for(ll j=i*i; j<=n_max; j+=i){
                isprime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(ll i=3; i<=n_max; i+=2){
        primes.push_back(i);
    }
}

vector<pair<ll, ll>> prime_factorial_Noverflow(ll n)
{
    vector<pair<ll, ll>> result;
    for(ll p : primes){
        if(p>n) break;

        ll n_temp = n;
        ll exponent = 0;
        while(n_temp/p){
            exponent += (n_temp/p);
            n_temp /= p;
        }
        result.push_back({p, exponent});
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    while(cin>>n){
    if(n==0) break;
    else{
       sieve(n);
       for(auto x : prime_factorial_Noverflow(n)){
        cout<<x.first<<"^"<<x.second<<" ";
       }
       cout<<endl;
    }
   }


   return 0;
}



