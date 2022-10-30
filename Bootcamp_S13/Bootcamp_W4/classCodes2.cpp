#include<bits/stdc++.h>
using namespace std;

vector<bool> isprime;

void sieve(int n)
{
    isprime.assign(n+1, true);
    isprime[0]=isprime[1]=false;

    for(int j=4; j<=n; j += 2){
        isprime[j] = false;
    }
    for(int i=3; (i*i)<=n; i+=2){
        if(!isprime[i]) continue;
        for(int j=(i*i); j<=n; j += (i+i)){
            isprime[j] = false;
        }
    }
    for(int i=0; i<=n; i++)
    {
        if(isprime[i]==true)
            cout<< i <<"  ";
    }
}

int main(){

    int n;
    cin>>n;
    sieve(n);

  return 0;
}
