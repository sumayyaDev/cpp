#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin>> n;
    int case1=0;
    int case2=0;
    for(int i=0; i<n-2; i++){
        case1^=i;
        case2^=(i+1);
    }

    long long addLast = ((long long)1<<31)-1;
    if(case1!=0){
        for(int i=0; i<n-2; i++){
            cout<< i << " ";
        }
        case1^=addLast;
        cout<< addLast << " " << case1 << endl;
    }
    else{
        for(int i=1; i<=n-2; i++){
            cout<< i << " ";
        }
        case2^=addLast;
        cout<< addLast << " " << case2 << endl;
    }
}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
