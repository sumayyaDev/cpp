#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

vector<bool> isprime;
vector<int> primes;
void sieve(int n)
{
    isprime.assign(n+1, true);
    isprime[0]=isprime[1]=false;

    for(int i=2; i*i<=n; i++){
        if(!isprime[i]) continue;
        for(int j=i*i; j<=n; j+=i){
            isprime[j]=false;
        }
    }

    for(int i=2; i<=n; i++){
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

    int t; cin>> t;
    int cs=1;
    while(t--){
        ll x;
        cin>> x;

        vector< pair<ll, ll> > factors = prime_factors(x);

        cout<< "Case " << cs++ << ": " << x << " = ";
        for(auto it=factors.begin(); it!=factors.end(); it++){
            if(prev(factors.end())==it) //came to last factor
                cout<< (*it).first << " (" << (*it).second << ")\n";
            else
                cout<< (*it).first << " (" << (*it).second << ") * ";
        }
    }

}
