#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const ll MAX=1e5+10;
ll a[MAX];
ll res[MAX];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s; //n->no of souvenirs, s->budget
    cin>> n >> s;

    for(ll i=1; i<=n; i++) cin>> a[i];

        ll left=0, right=n;
        ll ans=0;
        ll pos;
        while(left<=right){
            ll mid = (left+right)/2;
            ll sum=0;
            for(ll i=1; i<=n; i++){
                res[i]=a[i]+i*mid;
            }
            sort(res+1, res+n+1);
            for(ll i=1; i<=mid; i++){
                sum+=res[i];
            }
            if(sum>s) right=mid-1;
            else{
                pos=mid;
                ans=sum;

                left=mid+1;
            }
        }

        cout<< pos << " " << ans <<"\n";

}
