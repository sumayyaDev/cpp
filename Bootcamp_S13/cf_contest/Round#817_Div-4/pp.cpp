#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, m;
    cin>> n >> m;
    char grid[n][m];
    int mark[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> grid[n][m];
            mark[n][m]=0;
        }
    }

    int curr=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]=='*'){
                vector<pair<int, int>> adj_v, adj_h;
                if(i>0 && grid[i-1][j]=='*'){ //go upward
                    adj_v.emplace_back(i-1, j);
                }
                if(i<n-1 && grid[i+1][j]=='*'){ //go downward
                    adj_v.emplace_back(i+1, j);
                }
                if(j>0 && grid[i][j-1]=='*'){ //go left
                    adj_h.emplace_back(i, j-1);
                }
                if(j<m-1 && grid[i][j+1]){ //go right
                    adj_h.emplace_back(i, j+1);
                }

                if(adj_v.size()==1 && adj_h.size()==1){
                    if(mark[i][j]==0) mark[i][j]==curr;
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }

   return 0;
}
