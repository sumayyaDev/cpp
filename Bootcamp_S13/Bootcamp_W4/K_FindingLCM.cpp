#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll  b)
{
    if(b==0) return a;

    return gcd(b, a%b);
}

int main(){
    ll t; cin>>t;
    ll i=1;
    while(t--){
        ll a, b, lcm;
        cin>> a >> b >> lcm;
        ll lc = (a*b) / gcd(a,b);
        if(lcm%lc != 0)
            cout<< "Case "<< i++ << ": impossible" <<endl;
        else{
            ll c = lcm/lc;
            ll gc = gcd(c, lc);
            while(gc != 1){
                c *= gc;
                lc /= gc;
                gc = gcd(c, lc);
            }
            cout<< "Case "<< i++ << ": " << c <<endl;
        }
    }

   return 0;
}
