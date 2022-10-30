#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

#define N 100010
int a[N], diff[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int cs=1;
    while(t--){
        int n; cin>> n;
        a[0]=0;
        for(int i=1; i<=n; i++){
            cin>> a[i];
        }
        for(int i=1; i<=n; i++){
            diff[i]=abs(a[i]-a[i-1]);
        }

        int k=0;
        for(int i=n; i>=1; i--){

            if(k==diff[i]){
                k++;
            }
            if(k<diff[i]) k=diff[i]; //after increasing 1, it k is still greater than difference change k to that value
        }

        cout<< "Case " << cs++ << ": " << k << "\n";
    }

    return 0;
}

