#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int cs=1;
    while(t--){
        int n, m;
        cin>> n >> m;
        if(m==1 || n==1){
            cout<< "Case " << cs++ << ": " << max(n,m) <<endl;
        }
        else if(n==2 || m==2){
           int ans = (((m*n)%8)>=4?4:(m*n)%8);
           int ans2 = ((m*n)/8) * 4 + ans;
           cout<< "Case " << cs++ << ": " << ans2 <<endl;
        }
        else{
            int ans = (n*m+1)/2;
            cout<< "Case " << cs++ << ": " << ans <<endl;
        }
    }

   return 0;
}
