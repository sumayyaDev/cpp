#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> ans[1010];
int res[1010];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    auto f=[&] (int x){
         for(int i=2; i<=x; i++){
            if(x%i==0)
                return i;
         }
    };

    int t; cin>> t;
    while(t--){
        int n; cin>> n;
        for(int i=1; i<=1000; i++) ans[i].clear();

        for(int i=1; i<=n; i++){
            int x;
            cin>> x;
            //ans[x].push_back(i);
            ans[f(x)].push_back(i);
        }
        int used_color=0;
        for(int i=1; i<=1000; i++){
            if(ans[i].size()){
               used_color++;
               for(auto c : ans[i]){
                   res[c] = used_color;
               }
            }
        }

        cout<< used_color << "\n";
        for(int i=1; i<=n; i++){
            cout<< res[i] << " ";
        }
        cout<< "\n";

    }

    return 0;
}


