#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

void sumOfPrimesFact(ll n)
{
    ll sum=0;
    for(int i=2; i*i<=n; i++){
       //24=2*2*2*3=2^3 * 3^1-->2*3 + 3*1=9
       int cnt=0;
       while(n%i==0){
            n /= i;
            cnt++;
       }
       if(cnt>0) sum += (i*cnt);
    }

    if(n>1) sum+=n;
    cout<< sum << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    while(cin>> n){
       sumOfPrimesFact(n);
    }


    return 0;
}
