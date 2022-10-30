#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long arr[1005][1005];
long long prefix[1005][1005];

void solve()
{
    ll n, q;
    cin>> n >> q;

    for(int i=0; i<=1001; i++){
        for(int j=0; j<=1001; j++){
            arr[i][j] = prefix[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        ll h, w;
        cin>> h >> w;
        arr[h][w] += h*w;
    }

    for(int i=1; i<=1000; i++){
        for(int j=0; j<=1000; j++){
            prefix[i][j] = prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+arr[i][j];
        }
    }

    for(int i=0; i<q; i++){
        ll hs, ws, hb, wb;
        cin>> hs >> ws >> hb >> wb;
        cout<< prefix[hb-1][wb-1]-prefix[hb-1][ws]-prefix[hs][wb-1]+prefix[hs][ws] <<endl;
    }

}


int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
