#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c;
    cin>> n >> c;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v[i] = x;
    }
    sort(v.begin(), v.end());

    int cost=0;

    for(int i=n-1; i>0; i--){
        while(!v.empty()){
          if(v[i]==v[i-1]){
            cost+=c;
            v.erase(v.begin()+i);
            i--;
            while(v[i]==v[i-1]){
                v.erase(v.begin()+i);
                i--;
            }
          }
            else{
                cost += 1;
                v.erase(v.begin()+i);
            }
            if(v.size()==1){
                cost+=1;
                v.erase(v.begin());
            }
        }

    }

    cout<< cost <<endl;
}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
