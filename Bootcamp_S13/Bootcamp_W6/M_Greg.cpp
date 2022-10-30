#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, m, k;
    cin>> n >> m >> k;
    ll arr[n+1];
    arr[0]=0;
    for(ll i=1; i<=n; i++){
        cin>> arr[i];
    }
    ll l[m+1], r[m+1], val[m+1];
    for(ll i=1; i<=m; i++){
        cin>> l[i] >> r[i] >> val[i];
    }
    ll mark[m+1]={0};
    while(k--){
        ll x, y;
        cin>> x >> y;
        mark[x]++;
        mark[y+1]--;
    }
    // prefix sum of array 'mark'
    for(int i=1; i<=m; i++){
        mark[i] += mark[i-1];
    }
    /*cout<< "mark--" <<endl;
    for(int i=1; i<=m; i++){
       cout<< mark[i] << " ";
    } cout<<endl;*/

    ll temp[n+1]={0};
    for(int i=1; i<=m; i++){
        if(mark[i]!=0){
            temp[l[i]] += (mark[i]*val[i]);
            temp[r[i]+1] -= (mark[i]*val[i]);
        }
    }

    for(int i=1; i<=n; i++){
        temp[i] += temp[i-1];
        arr[i] += temp[i];
    }
    for(int i=1; i<=n; i++){
        cout<< arr[i] << " ";
    } cout<< endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

   return 0;
}

