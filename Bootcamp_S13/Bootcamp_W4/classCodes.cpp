#include<bits/stdc++.h>
using namespace std;

vector<bool> isprime; //global vector
void sieve(int n)
{
    //mark all numbers as prime
    isprime.assign(n+1, true);
    isprime[0] = isprime[1] = false; //0 and 1 are not prime
    /*for(int i=0; i<isprime.size(); i++)
    {
        cout<<isprime[i]<<"  ";
    }*/
    //loop over all candidates
    for(int i=2; i<=n; i++){
        if(!isprime[i]) continue;
        //if 'i' is prime find out it's non-prime
        for(int j=(i+i); j<=n; j += i){
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
