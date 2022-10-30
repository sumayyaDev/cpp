#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAX=50000+5;
ll primes[MAX];
bool isprime[MAX]={true};
ll index=0;

void sieve()
{

    isprime[0]=false;
    isprime[1]=false;
    for(ll i=2; i<=MAX; i++){
        isprime[i]=true;
    }
    for(ll i=2; i<=MAX; i++){
        if(isprime[i]){
            primes[index++]=i;
            for(ll j=i*i; j<=MAX; j+=i){
                isprime[j]=false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();

    ll n;
    while(cin>> n){
        ll store_n = n;
        ll f=0;
        ll factors[MAX];
        if(n==0) break;

        if(n<0){
           factors[f++] = -1;
           n = -n;
        }

        for(ll i=0; i<index; i++){
            if(n==1) break;
            while(n%primes[i]==0){
                 factors[f++]=primes[i];
                 n /= primes[i];
            }
        }

        if(n>1){
            factors[f++]=n;
        }

        cout<< store_n << " = " << factors[0];
        for(ll j=1; j<f; j++){
            cout<< " x " << factors[j];
        } cout<< endl;
    }

   return 0;
}

