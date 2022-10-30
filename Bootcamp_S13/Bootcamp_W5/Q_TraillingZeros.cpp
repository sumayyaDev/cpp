#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

const long long LIMIT=1e18;

// 0-4 -->   0 trailing zeros
// 5-9 -->   1 trailing zeros
// 10-14 --> 2 trailing zeros
// 15-19 --> 3 trailing zeros
// 20-24 --> 4 trailing zeros
// 25-29 --> 5 trailing zeros
//in difference of 5, trailing zeros is increasing by 1

ll claculateTrailingZeros(ll n)
{
    ll trailZeros = 0;
   for(ll i=5; i<=n; i*=5){
      trailZeros += (n/i); //taking quotient, we can skip (i*difference of 5)
                           //so no chance of messing up with overflows
   }
   return trailZeros;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t; int cs=1;
    while(t--){
        ll q; cin>> q;

        ll left=1, right=LIMIT, ans=-1;
        while(left<=right){
            ll mid = (left+right)/2;

            ll trailZeros_mid = claculateTrailingZeros(mid);

            if(trailZeros_mid>q) right=mid-1;
            else if(trailZeros_mid<q) left=mid+1;
            else {
                ans=mid;
                right = mid-1;//the min number that has q no. of trailing zeros
            }
        }
        if(ans==-1) cout<< "Case " << cs++ << ": " << "impossible\n";
        else
            cout<< "Case " << cs++ << ": " << ans << "\n";
    }
   return 0;
}
