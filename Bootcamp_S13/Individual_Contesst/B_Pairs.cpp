#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, a;
    cin>> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    sort(arr, arr+n);
    int count=0;
    for(int i=n-1; i>=0; i--){
        for(int j=i-1; j>=0; j--){
           int sub;
           sub=arr[i]-arr[j];
           if(sub==k) { count++; break; }
        }

    }
    cout<<count<<endl;


   return 0;
}
