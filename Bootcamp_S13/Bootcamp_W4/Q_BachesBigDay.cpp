#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<int, int> cnt_prim_factors; //<factor, occurance>

    int n; cin>> n;

    for(int i=0; i<n; i++){
       int strength;
       cin>> strength;

       for(int i=2; i*i<=strength; i++){
           if(strength%i==0)
               cnt_prim_factors[i]++;
           while(strength%i==0){
                 strength /= i;
           }
       }

       if(strength>1)  cnt_prim_factors[strength]++;
    }

    int ans=1;
    for(auto it=cnt_prim_factors.begin(); it!=cnt_prim_factors.end(); it++){
        ans = max(ans, (*it).second);
    }
    cout<< ans << "\n";

    return 0;
}
