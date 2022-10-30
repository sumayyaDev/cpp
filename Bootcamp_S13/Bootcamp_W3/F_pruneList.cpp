#include<bits/stdc++.h>
#define endl "\n";
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int m, n;
        cin>> m >> n;
        vector<int> v1;
        vector<int> v2;
        for(int i=0; i<m; i++){
            int x; cin>>x;
            v1.push_back(x);
        }
        for(int i=0; i<n; i++){
            int x; cin>>x;
            v2.push_back(x);
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(v1[i]==v1[j]){
                    v1.pop_back();
                }
            }
        }

    }

  return 0;
}
