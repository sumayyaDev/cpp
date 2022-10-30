#include<bits/stdc++.h>
using namespace std;
#define ll long long

const long long H_LIMIT = 1e18; //long long range

ll CalculateZeros(ll mid)
{
    ll trailingZeros = 0;
    for(ll i=5; i<=mid; i*=5){ //trailing zeros numbers are divisible by 5
       trailingZeros += (mid/i); //10!-->2 trailing 0, 10/5=2
    }
    return trailingZeros;
}

ll BinarySearch()
{
    ll q;
    cin>> q; //no. of required trailing zeros
    ll left=0, right=H_LIMIT, ans=-1;
    while(left<=right){
        ll mid = (left+right)/2;
        ll trailingZeros = CalculateZeros(mid);

        if(trailingZeros > q){
            right = mid-1;
        }
        else if(trailingZeros < q){
            left = mid+1;
        }
        else{
            ans = mid;
            right = mid-1; //need the minimal natural number
        }
    }

    return ans;
}

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
        ll ans = BinarySearch();
        if(ans==-1){
            cout<< "Case " << cs++ << ": " << "impossible" <<endl;
        }
        else{
            cout<< "Case " << cs++ << ": " << ans <<endl;
        }
    }

   return 0;
}
