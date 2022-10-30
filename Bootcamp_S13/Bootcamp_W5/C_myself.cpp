#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

void sievePrimesWithExponent(ll n)
{
    ll count=0;
    while(n%2 == 0){
        count++;
        n /= 2;
    }
    if(count>0){
       cout<< "2^" << count <<" ";
    }
    for(ll i=3; i*i<=n; i+=2){
        count=0;
        while(n%i==0){
            count++;
            n /= i;
        }
        if(count>0){
            cout<< i << "^" << count << " ";
        }
    }
    if(n>1){
        cout<< n <<"^"<< 1;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    while(cin>>n && n!=0){
        sievePrimesWithExponent(n);
        cout<<endl;
    }

   return 0;
}
