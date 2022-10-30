#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        ll n;
        cin>> n;

        vector<pair<ll, ll>> val;
        for(ll i=2; i*i<=n; i++){
            ll cnt=0;
            while(n%i==0){
                cnt++; //counting that specific prime factor (i) of the number
                n /= i;
            }
            if(cnt>0) val.push_back({cnt, i}); //2^3 {3, 2}
        }

        if(n>1) val.push_back({1, n});

        sort(val.rbegin(), val.rend()); //most counted will be in the begining

        //cout<<"\n"<< val[0].first<< "  "<< val[0].second <<endl;
        vector<ll> ans(val[0].first, val[0].second);

        /*for(auto x : ans){
            cout<< x << " ";
        }cout<<endl;*/

        for(ll i=1; i<val.size(); i++){
            for(ll j=0; j<val[i].first; j++){

                //cout<< "val[" << i << "].first=" <<val[i].first<< "   val[" << i << "].second=" <<val[i].second<<endl;
                //cout<< "ans.back()=" << ans.back()<<endl;
                ans.back() *= val[i].second;
                //cout<< "ans.back()=" << ans.back()<<endl;
            }
        }

        cout<< ans.size()<<endl;
        for(auto x : ans){
            cout<< x << " ";
        }cout<<endl;


    }

    return 0;

}
