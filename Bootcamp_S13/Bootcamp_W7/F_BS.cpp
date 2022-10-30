#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

     int n, q;
     scanf("%d%d", &n, &q);
     int arr[n];
     for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
     }
     while(q--){
        int x;
        scanf("%d", &x);
        int left, right, mid;
        left=0; right=n-1;
        int ans = -1;
        while(left<=right){
            mid = left + (right-left)/2;
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
        printf("%d\n", ans);
     }

   return 0;
}

