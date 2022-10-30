#include<bits/stdc++.h>
using namespace std;

vector<bool> isprime;
vector<int> primes;
void primFear(int n)
{
    isprime.assign(n+1, true);
    isprime[0]=isprime[1]=false;
    for(int j=4; j<=n; j+=2){
        isprime[j]=false;
    }
    for(int i=3; (i*i)<=n; i+=2){
        if(!isprime[i]) continue;
        for(int j=(i*i); j<=n; j += (i+i)){
            isprime[j]=false;
        }
    }
    //storing primes
    primes.push_back(2);
    for(int i=3; i<=n; i+=2){
        if(isprime[i])
            primes.push_back(i);
    }
    int noPrimes=0;
    for(int i=0; i<=n; i++){
        int split;
        int temp=primes[i];
        int flag=0;
        while(temp != 0){
            split=temp%10;
            temp = temp/10;
            if(split==0) flag=1;
        }
        if(flag==0){
            noPrimes++;
        }

    }
    cout<< noPrimes<<endl;

}



int main(){

    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        primFear(n);
    }

   return 0;
}
