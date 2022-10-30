#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>> n;
    int minX=0, maxX=0, minY=0, maxY=0;
    int x, y;
    for(int i=0; i<n; i++){
        cin>> x >> y;
        minX = min(x, minX);
        maxX = max(x, maxX);
        minY = min(y, minY);
        maxY = max(y, maxY);
    }
    int ans = 2 * (maxX+maxY -minX-minY);
    cout<< ans <<endl;
}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
