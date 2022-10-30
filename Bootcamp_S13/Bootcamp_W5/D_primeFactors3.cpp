#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> primes;
vector<bool> isprime;
const ll n_max = 50000;
void sieve()
{
    ll sqrtn = sqrt(n_max)+10;
    isprime.assign(sqrtn, true);
    isprime[0]=isprime[1]=false;
    for(ll i=4; i<=sqrtn; i+=2){
        isprime[i]=false;
    }
    for(ll i=3; i<=sqrtn; i+=2){
        if(isprime[i]){
            for(ll j=i*i; j<=sqrtn; j+=i){
                isprime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(ll i=3; i<=sqrtn; i+=2){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    ll n, temp_n;
    while(cin>>n && n!=0){
      ll index=0;
      ll arr[500];
      temp_n = n;
      if(n<0){
        arr[index++] = -1;
        n = -n;
      }
      for(ll i=0; i<primes.size(); i++){
        if(n==1) break;
            while(n%primes[i]==0){
                arr[index++] = primes[i];
                n /= primes[i];
            }
      }
      if(n>1)
        arr[index++]=n;

      cout<< temp_n << " = " << arr[0];
      for(ll i=1; i<index; i++){
        cout<< " x " << arr[i];
      }
      cout<<endl;
    }

   return 0;
}


