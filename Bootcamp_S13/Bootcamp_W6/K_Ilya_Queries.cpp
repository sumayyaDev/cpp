#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s; cin>> s;
    ll m; cin>> m;
    ll l, r;
    vector<ll> pref_sum(s.size(), 0);
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            pref_sum[i] +=1; //setting the value 1 if it matches with previous one
        }
        pref_sum[i] += pref_sum[i-1]; //doing the prefix sum
    }

    while(m--){
        cin>> l >> r;
        l--; r--;
        cout<< pref_sum[r]-pref_sum[l] <<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

   return 0;
}


