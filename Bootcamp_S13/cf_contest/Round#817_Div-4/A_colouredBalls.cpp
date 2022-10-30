#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>> n;
    int cnt[n];
    for(int i=0; i<n; i++){
        cin>> cnt[i];
    }
    int flag=0;
    int color=cnt[0];
    int index=1;
    for(int i=0; i<n; i++){
        if(cnt[i]>color){
            color=cnt[i];
            index=i+1;
        }
        if( i!=n-1 && cnt[i]!=cnt[i+1]){
            flag=1;
        }
    }
    if(flag==0) { cout<< n <<endl; }
    else{
        cout<< index <<endl;
    }
}


int main(){
    int t; cin>> t;
    while(t--){
       solve();
    }

   return 0;
}
