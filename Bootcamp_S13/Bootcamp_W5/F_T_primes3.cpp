#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MAX = (int)1e8;
vector<int> primes;
vector<bool> isprime;
void sieve()
{
    isprime.assign(MAX+1, true);
    isprime[0]=isprime[1]=false;
    for(int i=4; i<=MAX; i+=2){
        isprime[i]=false;
    }
    for(int i=3; i*i<=MAX; i+=2){
        if(!isprime[i]) continue;
        for(int j=(i*i); j<=MAX; j+=(i+i)){
            isprime[j]=false;
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= MAX; i += 2) {
        if (isprime[i]) {
            primes.push_back(i);
        }
    }
}

int NOD(ll n)
{
    int sqrtn = (int) sqrt(n);
    int result = 1;
    for(int i=0; i<primes.size() && primes[i]<=sqrtn; i++){
        if(n%primes[i] == 0){
            int power=0;
            while(n%primes[i]==0){
                n /= primes[i];
                power++;
            }
            power++;
            result *= power;
        }
    }
    if(n!=1){
        result *= 2;
    }
    return result;
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   sieve();
   int n, cnt;
   cin>>n;
    while(n--){
        ll x;
        cin>>x;
        cnt = NOD(x);
        if(cnt==3){
           cout<< "YES" <<endl;
        }
        else{
            cout<< "NO" <<endl;
        }
    }


   return 0;
}

