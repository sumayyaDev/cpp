#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>> n;
    int a[n+1];

    for(int i=1; i<=n; i++){
        cin>> a[i];
    }
    vector<int> pref_sum(n+2);
    pref_sum[1]=a[1];
    for(int i=2; i<=n; i++){
        pref_sum[i] = a[i]+pref_sum[i-1];
    }


    int q; cin>> q;
    while(q--){
        int type, l, r, x;
        cin>> type;
        if(type==1){
            cin>> l >> r;
            cout<< pref_sum[r]-pref_sum[l-1] <<endl;
        }
        else if(type==2){
            cin>> x;

        }
    }

   return 0;
}
