#include<bits/stdc++.h>
using namespace std;
#define MAX 32800

int primes[MAX];
void sieve()
{
    primes[1]=1;
    primes[2]=1;
    for(int i=3; i<=MAX; i++){
        bool flag=true;
        for(int j=2; j*j<=i; j++){

            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag==true){
            primes[i]=1;
        }
    }
}


int main(){
    int n;
    sieve();
    while(true){
        cin>>n;
        if(n==0){
            break;
        }
        else{
            int count=0;
            for(int i=2; i<=n/2; i++){
                if(primes[i]==1 && primes[n-i]==1){
                    count++;
                }
            }
            cout<< count<< endl;
        }
    }

   return 0;
}




