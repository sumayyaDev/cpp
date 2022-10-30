#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e9+9;
const ll MAX2 = 1e18+10;

bool pick(int i, vector<int>& v, int l, int r)
{
    if(i==l || i==r) return 0;
    return v[i-1]<v[i] && v[i]>v[i+1];
}

void solve()
{
    int n, k;
    cin>> n >> k;
    vector<int> v(n);
    for(auto &i : v)  cin>> i;

    int ans=-1;
    int l=-1;
    int r=-1;
    int now=0;
    for(int i=1; i+1<k; i++){
        if( pick(i, v, 0, k-1) ) now++; //i=1 t0 4
    }
    //cout<< "now1= " << now <<endl;
    ans=now+1; l=0; r=k-1; //l=0, k=5
    for(int i=k; i<n; i++){ //i=5, i<8
        if( pick(i-k+1, v, i-k, i-1) ){ //1,v,0,5; 2,v,1,6=>now--
            now--;
            //cout<< "now2= " << now <<endl;
        }
        if( pick(i-1, v, i-k+1, i) ){ //5,v,1,6=>now++; 6,v,2,7
            now++;
            //cout<< "now3= " << now <<endl;
        }

        if(now+1>ans){
            //cout<< "here now " << now;
            ans=now+1; //1st divide into 2 pieces so the extra 1
            l= i-k+1; //given condition
            r=i;
        }
    }
    cout<< ans << " " << l+1 <<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t; cin>> t;
    while(t--){
       solve();
    }

   return 0;
}


