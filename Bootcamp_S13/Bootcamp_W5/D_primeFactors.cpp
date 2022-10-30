#include<bits/stdc++.h>
using namespace std;

vector<int> primes;
vector<bool> isprime;
const int n_max = (int)1e7;
void sieve()
{
    int sqrtn = sqrt(n_max)+10;
    isprime.assign(sqrtn, true);
    isprime[0]=isprime[1]=false;
    for(int i=4; i<=sqrtn; i+=2){
        isprime[i]=false;
    }
    for(int i=3; i<=sqrtn; i+=2){
        if(isprime[i]){
            for(int j=i*i; j<=sqrtn; j+=i){
                isprime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3; i<=sqrtn; i+=2){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
}

vector<pair<int, int>> prime_factors_expo(int n)
{
    vector<pair<int, int>> result;
    for(int p : primes){
        if(p>n) break;

        int n_temp = n;
        int exponent=0;
        while(n_temp/p){
            exponent += (n_temp/p);
            n_temp /= p;
        }
        result.push_back({p, exponent});
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int n;
    while(cin>>n && n!=0){

          for(auto p : prime_factors_expo(n)){
        cout<< p.first << "^" << p.second << " ";
    }

        /*cout<< n << " = ";
        for(auto p : prime_factors_expo(n)){
            int expo = p.second;
            while(expo--){
               cout<< p.first << " x ";
            }

        }*/
    }

   return 0;
}
