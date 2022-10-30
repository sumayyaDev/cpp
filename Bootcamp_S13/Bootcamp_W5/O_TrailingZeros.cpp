#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
#define range 1000010  //10^12/2=10^6

vector<bool> isprime;
vector<ll> primes;
void sieve()
{
    isprime.assign(range+1, true);
    isprime[0]=isprime[1]=false;

    for(ll i=2; i<=range; i++){
        if(!isprime[i]) continue;
        for(ll j=i*i; j<=range; j+=i){
            isprime[j]=false;
        }
    }

    for(ll i=2; i<=range; i++){
        if(isprime[i])
            primes.push_back(i);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();

    int t; cin>> t;
    int cs=1;
    while(t--){
       ll n, no_div, tot_div=1;
       cin>> n; //n!=p^e1*p^e2*...p^em
       for(int i=0; i<range && primes[i]*primes[i]<=n; i++){
           if(n%primes[i]==0){
             no_div = 0;
             while(n%primes[i]==0){
                  n /= primes[i];
                  no_div++; //p^no_div
                  if(n==0 || n==1) break;
             }
             tot_div *= no_div+1; //div(n)=(e1+1)*(e2+1)*..(em+1)
           }
       }

       if(n!=1) tot_div*=2; //5->divisors 1 & 5
       cout<< "Case " << cs++ << ": " << tot_div-1 << "\n";

    }

}
