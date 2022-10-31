#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const ll MAX=2e5+10;
ll ivar[MAX];
ll pref_ivar[MAX];
ll n;

ll binary_srch(ll curr, ll &hits, ll arrows)
{
    if(arrows+hits < ivar[curr]){
        hits += arrows;
        return curr;
    }
    ll left=curr, right=n, ans;
    while(left<=right){
        ll mid = (left+right) / 2;

        if(pref_ivar[mid]-pref_ivar[curr-1]-hits <= arrows){
            left = mid+1;
            ans = mid;
        }
        else{
            right = mid-1;
        }
    }

    if(ans==n){
        hits=0;
        return 1;
    }
    ans++; //this is the index of next warrior who is alive after this shot
    ll reset_hits = pref_ivar[ans]-pref_ivar[curr-1]-hits-arrows;
    hits = ivar[ans]-reset_hits; //here I have the remaining arrows of the current warrior after this shot;

    return ans;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll q;
    cin>> n >> q;

    for(ll i=1; i<=n; i++){
        cin>> ivar[i];
        pref_ivar[i] = ivar[i] + pref_ivar[i-1];
    }

    ll arrows;
    ll curr=1;
    ll hits=0;
    for(ll i=1; i<=q; i++){
        cin>> arrows;
        curr = binary_srch(curr, hits, arrows);

        cout<< n-curr+1 << "\n";
    }


    return 0;
}
