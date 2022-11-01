#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int MAX=1100;

vector<int> primes;
vector<int> isprime;
void sieve()
{
    isprime.assign(MAX+10, true);
    isprime[0]=isprime[1]=false;

    for(int i=2; i<=MAX; i++){
        if(!isprime[i]) continue;
        for(int j=i*i; j<=MAX; j+=i){
            isprime[j]=false;
        }
    }
    primes.push_back(1);
    for(int i=2; i<=MAX; i++){
        if(isprime[i])
            primes.push_back(i);
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    int n, c;

    while(cin>> n >> c){
        cout<< n << " " << c << ":";

        vector<int> v;
        for(int i=0; i<primes.size() && primes[i]<=n; i++){
            v.push_back(primes[i]);
        }

        c *= 2;
        if(v.size()%2 !=0) c-=1;

        int Floor = floor(c/2.0);
        int Ceiling = ceil(c/2.0);
        for(int i=max(0, (int)v.size()/2-Floor); i<min((int)v.size(), (int) v.size()/2+Ceiling); i++){
            cout<< " " << v[i];
        } cout<< "\n\n";

    }

    return 0;
}
