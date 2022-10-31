#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX=1e10;

ll binary_search_indx(ll n)
{
    ll left=0;
    ll right=MAX, mid;
    while(left<right){
        mid=(left+right+1)/2;
        if(mid*(mid+1)/2  > n)
            right=mid-1;
        else left=mid;
    }
    return left;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
    ll n; //no. of warriors
    cin>> n;

    cout<< binary_search_indx(n) << "\n";

   }
   return 0;
}
