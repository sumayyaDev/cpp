#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int n;
    while(t--){
        cin>> n;
        int a[n];
        if(n==1 || n==3) cout<< "-1" << "\n";
        else if(n==2) cout<< "2 1\n";
        else{
            a[2]=n;
            a[1]=n-1;
            int start = 1;
            for(int i=3; i<=n; i++){
                a[i]=start++;
            }
            for(int i=1; i<=n; i++){
                cout<< a[i] << " ";
            }
            cout<< "\n";
        }
    }

    return 0;
}
