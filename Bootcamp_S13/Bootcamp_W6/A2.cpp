#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>> n;
    int arr[n];
    int sum[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    sum[0]=arr[0];
    for(int i=1; i<n; i++){
        sum[i]=arr[i]+sum[i-1];
    }
    int q; cin>> q;
    int i, j;
    while(q--){
        cin>> i >> j;
        if(i>0){
            cout<< sum[j]-sum[i-1] <<endl;
        }
        else{
            cout<< sum[j] <<endl;
        }
    }



   return 0;
}

