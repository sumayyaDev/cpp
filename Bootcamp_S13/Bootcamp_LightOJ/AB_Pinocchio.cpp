#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    int n;
    while(t--){
        cin>> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }
        int lies=0;
        for(int i=0; i<n-1; i++){
            if(arr[i+1]>arr[i]){
               lies++;
            }
        }
        cout<< "Case " << cs++ << ": " << lies <<endl;
    }

  return 0;
}
