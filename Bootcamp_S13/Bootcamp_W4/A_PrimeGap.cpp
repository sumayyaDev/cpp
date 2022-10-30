#include<bits/stdc++.h>
using namespace std;

vector<bool> isprime;
vector<int> primes;

void sieve()
{
    isprime.assign(1299709+1, true);
    isprime[0]=isprime[1]=false;
    for(int j=4; j<=1299709; j+=2){
        isprime[j]=false;
    }
    for(int i=3; (i*i)<=1299709; i+=2){
        if(!isprime[i]) continue;
        for(int j=(i*i); j<=1299709; j+=(i+i)){
            isprime[j]=false;
        }
    }
    //storing primes
    primes.push_back(2);
    for(int i=3; i<=1299709; i+=2){
        if(isprime[i])
            primes.push_back(i);
    }
}

int main(){

    int k;
    sieve();
    while(cin>>k){
        if(k==0) break;
        if(isprime[k]){
            cout<< "0" <<endl;
        }else{
            for(int i=0; i<primes.size(); i++){
                if(primes[i]<k && primes[i+1]>k){
                    cout<< primes[i+1] - primes[i] <<endl;
                    break;
                }
            }
        }
    }

   return 0;
}
