#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>> n; //no. of T-shirts
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

    set<int> st[3+1]; // color->1/2/3
    for(int i=0; i<n; i++){
        st[front_color[i]].insert(prize[i]);
        st[back_color[i]].insert(prize[i]);
    }

    int m; cin>> m; //no. of buyers
    for(int i=1; i<=m; i++){
        int c;
        cin>> c;
        if(st[c].size()==0) cout<< -1 <<endl;
        else{
            int minPrize = *(st[c].begin());
            cout<< minPrize << " ";
            for(int j=1; j<=3; j++){
                st[j].erase(minPrize);
            }
        }
    }


}

