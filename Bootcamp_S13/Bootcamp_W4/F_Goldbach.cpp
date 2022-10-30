#include<bits/stdc++.h>
using namespace std;

#define MAX 1000000
bool isprime[MAX+5];
vector<int> primes;
void sieve()
{
    memset(isprime, true, sizeof isprime);
    isprime[0]=isprime[1]=false;
    for(int i=2; i<=MAX; i++){
        if(isprime[i]){
            primes.push_back(i);
            for(int j=2*i; j<=MAX; j+=i){
                isprime[j]=false;
            }
        }
    }
}

int main(){
    sieve();
    int prim_size = primes.size();

    while(true){
        int n; cin>>n;
        bool goldbach = false;
        if(n==0) break;
        for(int i=0; i<prim_size; i++){
            if(primes[i]>n)   break;
            if(isprime[ n-primes[i] ]){
                cout<< n << " = " << primes[i] << " + " << n-primes[i] << endl;
                goldbach=true;
                break;
            }
        }
        if(!goldbach)
            cout<< "Goldbach's conjecture is wrong."<<endl;

    }

   return 0;
}
