#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
const int N=1e5;

vector<bool> isprime;
vector<int> primes;
void sieve()
{
    isprime.assign(N+1, true);
    isprime[0]=isprime[1]=false;

    for(int i=2; i*i<=N; i++){
        if(!isprime[i]) continue;
        for(ll j=i*i; j<=N; j+=i){
            isprime[j]=false;
        }
    }

    for(int i=2; i<=N; i++){
        if(isprime[i])
            primes.push_back(i);
    }

}

int pow_factorial(int n, int p)
{
    int res=0;
    for(int pow=p; pow<=n; pow*=p)
        res += n/pow;
    return res;
}

bool divisible(int n, int m) //is n!%m==0
{
    for(int i=0; i<=primes.size() && primes[i]*primes[i]<=m; i++){
        int count_factor_m=0;
        while(m%primes[i]==0){
            count_factor_m++; //how many factors have m
            m /= primes[i];
        }
        int n_factorial = pow_factorial(n, primes[i]); // what is the power of primes[i] for n
        if(n_factorial<count_factor_m)
            return false;
    }

    if(m!=1 && n<m) return false;

        return true;


}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();

    int n, m;
    while(cin>>n){
        cin>> m;
        if(divisible(n, m)){
            cout<< m << " divides " << n << "!\n";
        }
        else{
            cout<< m << " does not divide " << n << "!\n";
        }
    }

}

