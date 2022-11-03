#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const ll MAX=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>> n;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int x; cin>> x;
        mp[x]++;
    }
    int ans=0;
    for(auto it : mp){
        ans = max(ans, it.second);
    }

    cout<< ans << "\n";

    return 0;
}
