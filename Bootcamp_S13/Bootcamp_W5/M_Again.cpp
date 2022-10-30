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
        if(isprime[i])
            primes.push_back(i);
    }

}

vector< pair<ll, ll> > prime_factors(ll x)
{
    vector< pair<ll, ll> > ans;
    for(ll i=0; i<primes.size() && primes[i]<=x; i++){
        ll temp=x;
        ll sum_Of_Factors=0;

        while(temp/primes[i] != 0){
            sum_Of_Factors += temp/primes[i];
            temp = temp/primes[i];
        }
        ans.push_back( {primes[i], sum_Of_Factors} );
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve(1000);

    ll n, m;
    while(cin>> n){
        ll result=1;
        cin>> m;

        vector< pair<ll, ll> > factors = prime_factors(n);


        for(auto it=factors.begin(); it!=factors.end(); it++){
             result *= pow( (*it).first , (*it).second );
        }
        //cout<< "result=" << result<<endl;
        if(result%m==0){
            cout<< m << " divides " << n << "!\n";
        }
        else{
            cout<< m << " does not divide " << n << "!\n";
        }

    }

}
