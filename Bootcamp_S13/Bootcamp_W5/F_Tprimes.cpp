#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

bool isprime(int n)
{
    if(n<=1) return false;
    if(n==2 || n==3) return true;

    if(n%2==0 || n%3==0) return false;

    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }

    return true;
}

bool is_three_dist_factors(ll n)
{
    int sqrt_n = (int) sqrt(n); //it will gives the floor value it n is not perfect square
    //Is n perfect square
    if((1LL)* sqrt_n*sqrt_n != n){
        return false;
    }
    //If it is perfect square now check sqrt(n) is prime or not

    return isprime(sqrt_n) ? true : false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //n-->perfect square && sqrt(n)= a prime
    ll n; cin>> n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>> a[i];
    }

    for(ll i=0; i<n; i++){
        bool dec = is_three_dist_factors(a[i]);
        if(dec) cout<< "YES\n";
        else cout<< "NO\n";
    }

    return 0;
}
