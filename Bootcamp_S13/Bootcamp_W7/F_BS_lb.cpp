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
        cin>> x;
        int *it = lower_bound(arr, arr+n, x);
        if(*it!=x){
            printf("-1\n");
        }
        else{
            printf("%d\n", it-arr); //compute index by address arithmetic
        }

     }

   return 0;
}
