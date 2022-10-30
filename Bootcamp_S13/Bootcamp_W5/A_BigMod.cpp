//R=B^p mad M
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll bigMod(ll b, ll p, ll m)
{
    ll x=1, y=b;
    while(p>0){
        if(p%2 == 1){ //p is odd
            x = (x*y) % m;
        }
        y = (y*y) % m;
        p = p/2;
    }
    return x%m;
}

int main(){
    ll b, p, m;
    while(cin>> b >> p >> m){
        cout << bigMod(b, p, m)<<endl<<endl;;
    }

   return 0;
}
