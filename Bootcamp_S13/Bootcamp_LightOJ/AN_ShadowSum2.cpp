#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t; cin>> t; int cs=1;

    while(t--){
        ll n; cin>> n;
        set<ll> shadow_set; //in set we can run count() operation to check repetition
        ll arr[n+5];

        for(ll i=0; i<n; i++){
            cin>> arr[i];
        }
        //removing the previous element, so iterating from last
        //count()-> checking that number already exists in set or not
        //thus the later elements will stay in set but the previous repeated element won't be pushed
        for(ll i=n-1; i>=0; i--){
            if(shadow_set.count(arr[i])==0 && shadow_set.count(-arr[i])==0){
                shadow_set.insert(arr[i]);
            }
        }

        vector<ll> v (shadow_set.begin(), shadow_set.end());
        ll sum=0;
        for(auto x : v){
            sum += x;
        }

        cout<< "Case " << cs++ << ": " << sum <<endl;
    }


    return 0;
}
