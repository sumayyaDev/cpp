#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){

    int n, m;
    cin>> n >> m;
    int a[n];
    int b[m];
    for(int i=0; i<n; i++){
       cin>>a[i];
    }
    sort(a, a+n);

    for(int i=0; i<m; i++){
        cin>> b[i];
    }

    /*for(int i=0; i<m; i++){ //to iterate b
        for(int j = n-1; j>=0; j--){
            if( (a[j]<b[i]) || (a[j]==b[i]) ){
                cout<< j+1 << " ";
                break;
            }
        }
    }*/

    for(int i=0; i<m; i++){
        if(i == m-1){
            cout<< upper_bound(a, a+n, b[i]) -a <<endl;
        }else{
            cout<< upper_bound(a, a+n, b[i]) -a << " ";
        }
    }


  return 0;
}
