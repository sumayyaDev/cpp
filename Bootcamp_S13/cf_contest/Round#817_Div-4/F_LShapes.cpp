#include<bits/stdc++.h>
using namespace std;

const int dx[3] = {-1,0,1};
const int dy[3] = {-1,0,1};

void solve()
{
    int n, m;
    cin>> n >> m;
    char grid[n][m];
    int mark[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> grid[i][j];
            mark[i][j]=0;
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
                if(j<m-1 && grid[i][j+1]=='*'){ //go right
                    adj_h.emplace_back(i, j+1);
                }

                if(adj_v.size()==1 && adj_h.size()==1){
                    if(mark[i][j]==0) { mark[i][j]=curr; }
                    else { cout<< "NO" <<endl;  return; }
                    if(mark[adj_v[0].first][adj_v[0].second]==0) { mark[adj_v[0].first][adj_v[0].second]=curr; }
                    else { cout<< "NO" <<endl;  return; }
                    if(mark[adj_h[0].first][adj_h[0].second]==0) { mark[adj_h[0].first][adj_h[0].second]=curr; }
                    else { cout<< "NO" <<endl;  return; }
                    curr++;
                }
                else if(adj_v.size()>1 || adj_h.size()>1){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]=='*'){
               if(mark[i][j]==0) { cout<<"NO"<<endl;  return; }
               else{
                  for(int x=0; x<3; x++){
                    for(int y=0; y<3; y++){
                        if(0<=i+dx[x] && i+dx[x]<n){
                            if(0<=j+dy[y] && j+dy[y]<m){
                                if(mark[i+dx[x]][j+dy[y]] != mark[i][j] && mark[i+dx[x]][j+dy[y]] !=0){
                                    cout<<"NO"<<endl;
                                    return;
                                }
                            }
                        }
                    }
                  }
               }
            }
        }
    }
    cout<< "YES" <<endl;
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
