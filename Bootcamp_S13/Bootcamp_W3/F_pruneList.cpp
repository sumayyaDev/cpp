#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const ll MAX=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
       int n, m;
       cin>> n >> m;
       map<int, int> mp; //num, it's occurrance

       int x;
       for(int i=0; i<n; i++){
           cin>> x;
           mp[x]++;
       }
       for(int i=0; i<m; i++){
           cin>> x;
           mp[x]--;
       }

       int cnt=0;
       for(auto it : mp){
           if(it.second!=0){ //if occurrance not zero
              cnt += abs(it.second);
           }
       }

       cout<< cnt << "\n";

    }

    return 0;
}



