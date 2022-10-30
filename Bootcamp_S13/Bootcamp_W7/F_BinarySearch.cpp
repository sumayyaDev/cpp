#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

     int n, q;
     cin>> n >> q;
     int arr[n];
     for(int i=0; i<n; i++){
        cin>> arr[i];
     }
     while(q--){
        int x;
        cin>>x;
        int left, right, mid;
        left=0; right=n-1;
        int ans = -1;
        while(left<=right){
            mid = (right+left)/2;
            if(arr[mid]==x){
               ans=mid;
               break;
            }
            else if(arr[mid]<x){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        cout<< ans << endl;
        cout.flush();
     }

   return 0;
}
