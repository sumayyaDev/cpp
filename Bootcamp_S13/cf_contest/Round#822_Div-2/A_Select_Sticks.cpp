#include<bits/stdc++.h>
using namespace std;


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve()
{
    ll n; cin>> n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>> a[i];
    }
    sort(a, a+n);
    vector<ll> v;
    ll diff;
    for(ll i=0; i<n-1; i++){
        if(a[i]<=a[i+1]){
            diff = a[i+1]-a[i];
            v.push_back(diff);
        }
    }
    //sort(v.begin(), v.end());
    ll cnt=0;
    ll operation=0;
    vector<ll> tri;
    for(int i=0; i<v.size(); i++){
        operation += v[i];
        cnt++;
        if(cnt==2) {
            tri.push_back(operation);
            operation=0;
            cnt=0;
            i--;
        }
    }

    sort(tri.begin(), tri.end());
    cout<< tri.front() <<endl;
}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

    return 0;
}

