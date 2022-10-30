#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        int a, b, c;
        cin>> a >> b >> c;
        int arr[3];
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        sort(arr, arr+3);
        if(arr[0]+arr[1]==arr[2]) cout<< "YES\n";
        else cout<< "NO\n";
    }

   return 0;
}
