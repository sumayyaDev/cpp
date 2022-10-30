#include<bits/stdc++.h>
using namespace std;
//20000000
#define MAX 20000000
bool isprime[MAX+5];
int primes[MAX/3], prime_count=0;
int twinP[MAX/9], twin_count=1;

void sieve()
{
    memset(isprime, true, sizeof(isprime));

    isprime[0]=isprime[1]=false;
    for(int i=2; i<=MAX; i++){
        if(isprime[i]) primes[prime_count++] = i;
        for(int j=0; j<prime_count, i*primes[j]<=MAX; j++){
            isprime[i*primes[j]]=false;
            if(i%primes[j]==0) break;
        }

    }

    primes[prime_count]=0;
    for(int i=0; i<prime_count; i++){
        if(primes[i]+2 == primes[i+1]){
            twinP[twin_count++]=primes[i];
        }
    }
}

int main(){
    sieve();
    int n;
    while(cin>>n){

        cout<< "(" << twinP[n] << ", " << twinP[n]+2 << ")" <<endl;
    }

   return 0;
}
