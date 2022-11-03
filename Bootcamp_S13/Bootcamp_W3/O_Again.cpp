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
    int cs=1;
    while(t--){
        int n, r;
        cin>> n >> r;
        vector<pair<int, int>> v(r); //<id, code>
        for(int i=0; i<r; i++){
            cin>> v[i].first;
            cin>> v[i].second;
        }
        int flag=1;
        sort(v.begin(), v.end());
        for(int i=0; i<v.size()-1; i++){
            if(v[i].first==v[i+1].first && v[i].second==v[i+1].second){
                flag=0;
            }
        }

        if(flag) cout<< "Scenario #" << cs++ << ": possible\n";
        else cout<< "Scenario #" << cs++ << ": impossible\n";
    }



    return 0;
}
