#include<bits/stdc++.h>
using namespace std;

const int MAX = (int)1e6+10;
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


int main(){
    sieve();
    int n, x;
    vector<int> m;
    while(cin>>n){
        while(n--){
            cin>>x;
            m.push_back(x);
        }
        sort(m.begin(), m.end());
        int count=0;
        for(auto p : m){
            if(isprime[p]==true){
                count++;
            }
        }
        cout<< count <<endl;
    }

   return 0;
}
