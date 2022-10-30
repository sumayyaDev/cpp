#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> primes;
vector<bool> isprime;
const int n_max = (int)1e7;
void sieve()
{
    int sqrtn = sqrt(n_max)+10;
    isprime.assign(sqrtn, true);
    isprime[0]=isprime[1]=false;
    for(int i=4; i<=sqrtn; i+=2){
        isprime[i]=false;
    }
    for(int i=3; i<=sqrtn; i+=2){
        if(isprime[i]){
            for(int j=i*i; j<=sqrtn; j+=i){
                isprime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3; i<=sqrtn; i+=2){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
}

int main(){
    sieve();
    ll n;
    while(cin>>n && n!=0){
      ll index=0;
      ll arr[500];
      ll temp_n = n;
      if(n<0){
        arr[index++] = -1;
        n = -n;
      }
      for(ll i=0; i<primes.size(); i++){
        if(n>1){
            while(n%primes[i]==0){
                arr[index++] = primes[i];
                n /= primes[i];
            }
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


