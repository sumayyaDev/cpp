#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int n, k;
    while(t--){
        cin>> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }
        int min = arr[0];
        int count = 0;
        for(int i=0; i<n; i++){
            if(i==n-1) break;
            if(arr[i+1]<arr[i]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                count++;
                if(arr[i]==k) break;
            }
        }
        cout<<count<<endl;
    }

   return 0;
}
