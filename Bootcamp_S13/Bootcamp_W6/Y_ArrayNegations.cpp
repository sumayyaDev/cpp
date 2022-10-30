#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin>> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    sort(v.begin(), v.end());
    /*for(int i=0; i<n; i++){
        cout<< v[i] << " ";
    }*/
    /*/for(int j=1, i=0; j<=k; j++, i++){
        if(i>=n && j<=k){
            i=0;
            sort(v.begin(), v.end());
            v[i]=-v[i];
            continue;
        }
        v[i]=-v[i];
    }*/

    for(int j=1; j<=k; j++){
        *v.begin() = *(v.begin())*(-1);
        sort(v.begin(), v.end());
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=v[i];
    }
    cout<< sum << "\n";
}


int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
