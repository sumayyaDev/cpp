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
    int prize[n+1];
    int front_color[n+1];
    int back_color[n+1];
    for(int i=0; i<n; i++){
        cin>> prize[i];
    }
    for(int i=0; i<n; i++){
        cin>> front_color[i];
    }
    for(int i=0; i<n; i++){
        cin>> back_color[i];
    }

    set<int> st[3+1]; //color-1/2/3
    for(int i=0; i<n; i++){
        st[front_color[i]].insert(prize[i]);
        st[back_color[i]].insert(prize[i]);
    }

    /*cout<< "set elements-- "<<endl;
    for(int i=1; i<=3; i++){
        for(auto it : st[i]){
            cout<< " " << it;
        }cout<<endl;
    } cout<<endl;*/

    int m; cin>> m; //no. of buyers
    for(int i=1; i<=m; i++){
        int c;
        cin>> c; //chosen color by buyers
        if(st[c].size()==0) cout<< "-1" <<"\n";
        else{
            int minPrize = *(st[c].begin());
            cout<< minPrize << " ";
            for(int j=1; j<=3; j++){
                st[j].erase(minPrize);
            }
        }
    }


    return 0;
}
