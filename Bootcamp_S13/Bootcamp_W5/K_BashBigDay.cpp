#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<int, int> count_prim_factors;

    int n; cin>> n;
    for(int k=0; k<n; k++){
        int strength;
        cin>> strength;
        for(int i=2; i*i<=strength; i++){

            if(strength%i==0) count_prim_factors[i]++;
            while(strength%i==0){
                strength /= i;
            }
        }

        if(strength>1) count_prim_factors[strength]++;
    }

    int ans = 1; //a pokemon cannot fight itself, so the min ans is 1
    for(auto it=count_prim_factors.begin(); it!=count_prim_factors.end(); it++){
        ans = max(ans, (*it).second);
    }
    cout<< ans <<"\n";

    return 0;
}


