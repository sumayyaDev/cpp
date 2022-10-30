#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
        int mypos, lift;
        cin>> mypos >> lift;
        int come = abs(lift-mypos);
        int ans = come*4 + 19 + mypos*4;
        cout<< "Case " << cs++ << ": " << ans << endl;
    }

   return 0;
}
