#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

vector<ll> prime_factors(ll n)
{
    vector<ll> ans;
    for(int i=2; i*i<=n; i++){
        while(n%i==0){ //if it is keep dividing by 2, next time it won't divisible by multiples of 2
            ans.push_back(i);
            n /= i;
        }
    }
    if(n>1)  ans.push_back(n);
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    while(cin>> n){
        if(n==0) break;
        vector<ll> ans = prime_factors(abs(n));

        cout<< n << " = ";
        if(n<0) cout<< "-1 x ";

        for(auto it=ans.begin(); it!=ans.end(); it++){

            if(it==prev(ans.end())){
                cout<< *it <<endl;
            }
            else{
                cout<< *it << " x ";
            }
        }

    }

   return 0;
}
