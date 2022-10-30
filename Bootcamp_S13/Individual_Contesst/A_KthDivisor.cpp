#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> divisor(ll n)
{
    vector<ll> div;
    for(ll i=1; i*i<=n; i++){
        if(n%i == 0){
            div.push_back(i);
            if(i != n/i){
                div.push_back(n/i);
            }
        }
    }
    sort(div.begin(), div.end());
    return div;
}



int main(){
    ll n, k;
    cin>> n >> k;
    vector<ll> d;
    d = divisor(n);
    if(k>d.size()){
        cout<<"-1"<<endl;
    }
    else{
        cout<<d[k-1]<<endl;
    }

   return 0;
}
