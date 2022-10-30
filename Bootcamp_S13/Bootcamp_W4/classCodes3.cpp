#include<bits/stdc++.h>
using namespace std;

vector<bool> isprime;
vector<int> primes; //store prime in primes vector

void sieve(int n)
{
    isprime.assign(n+1, true);
    isprime[0]=isprime[1] = false;
    for(int j=4; j<=n; j+=2){
        isprime[j] = false;
    }
    for(int i=3; (i*i)<=n; i += 2){
        if(!isprime[i]) continue;
        for(int j=(i*i); j<=n; j += (i+i)){
            isprime[j]=false;
        }
    }

    //storing primes
    primes.push_back(2);
    for(int i=3; i<=n; i+=2){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
    for(auto x : primes){
        cout<< x <<"  ";
    }
}

int main(){
    int n;
    cin>>n;
    sieve(n);

  return 0;
}
