#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>> n; //no. of strings
    map<string, int> mp;  //<word, count>
    string a[3][n]; //3 persons gonna enter n no. of strings

    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            cin>> a[i][j];
            mp[a[i][j]]++;
        }
    }

    for(int i=0; i<3; i++){
        int total=0;
        for(int j=0; j<n; j++){
            if(mp[a[i][j]]==1) total+=3;
            else if(mp[a[i][j]]==2) total+=1;
        }
        cout<< total << " ";
    }
    cout<<endl;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
