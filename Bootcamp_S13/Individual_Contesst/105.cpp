#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>  divisor(ll n){
       vector<ll> div;
     for (ll i = 1; i * i <= n; i++)
        if (n % i == 0) {
            div.push_back(i);
            if (i != n/i)
                div.push_back(n/i);
        }
    return div;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n; cin>>n;
    int count;
    vector<ll> d;
    for(int i=105; i<=n; i+=2){
        d = divisor(i);
    }
    int number=0;
    count = d.size();
    if(count==8){
        number++;
    }
    cout<<number<<endl;

  return 0;
}
