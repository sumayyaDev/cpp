#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const ll MAX=1e10;

bool isPossible(ll mid, ll arr[], ll k, ll n)
{
    for(ll i=0; i<n; i++){
        k -= (arr[i]/mid); // k->no of students
    }
    if(k<=0){
        return true;
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    ll arr[50005];
    while(t--){
        int n, k;
        cin>> n >> k;

        for(ll i=0; i<n; i++){
            cin>> arr[i]; //3, 1, 4
        }

        ll left=0, right=MAX, maximum=LLONG_MIN;
        while(left<right){
            ll mid = (left+right+1)/2;
            if(isPossible(mid, arr, k, n)){
                maximum = max(mid, maximum);
                left=mid;
            }
            else{
                right=mid-1;
            }
        }

        maximum = (maximum==LLONG_MIN ? 0 : maximum);
        cout<< maximum <<"\n";

    }

    return 0;
}






