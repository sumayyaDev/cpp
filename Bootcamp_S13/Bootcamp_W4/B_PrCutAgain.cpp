#include<bits/stdc++.h>
using namespace std;

int noPrims;
vector<bool> isprime;
vector<int> primes;
void sieve(int n)
{
    isprime.assign(n+1, true);
    isprime[0]= false;
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
    primes.push_back(1);
    primes.push_back(2);
    noPrims=2;
    for(int i=3; i<=n; i+=2){
        if(isprime[i]){
           primes.push_back(i);
           noPrims++;
        }
    }

}

int main(){
    int n, c;
    while(cin>> n >> c){
        sieve(n);
        int r, print_primes;
        cout<< n << " " << c << ": ";
        if(c>noPrims || c==noPrims){
            for(int i=0; i<=noPrims; i++){
                cout<< primes[i] << " ";
            } cout<<endl;
        }

        else if(noPrims%2 != 0){ //odd case
            print_primes = 2*c-1;
            r = (noPrims-print_primes)/2 -1;
            for(int i=r; i<r+print_primes; i++){
                cout<< primes[i] << " ";
            } cout<<endl;
        }

        else{ //even case
            print_primes = 2*c;
            r = (noPrims-print_primes)/2;
            for(int i=r; i<r+print_primes; i++){
            cout<< primes[i] << " ";
            } cout<<endl;
        }

    }


  return 0;
}
