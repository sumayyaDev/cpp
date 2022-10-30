#include<bits/stdc++.h>
using namespace std;

int arr[100000+5];
int n, q;

int BinarySearch(int x)
{
    int left, right, mid;
    left=0; right=n-1;
    while(left<right){
       mid = left + (right-left)/2;
       if(arr[mid] >= x){ //the array could be with repeated elements
        right = mid;
       }
       else{
          left = mid+1;
       }
    }

    if(arr[left] == x){
        return left;
    }
    else return -1;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

     scanf("%d%d", &n, &q);
     for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
     }
     while(q--){
        int x;
        scanf("%d", &x);
        printf("%d\n", BinarySearch(x));

     }

  return 0;
}
