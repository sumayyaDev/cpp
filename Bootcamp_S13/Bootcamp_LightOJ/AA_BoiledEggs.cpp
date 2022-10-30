#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    int n, p, q;
    while(t--){
       cin>> n >> p >> q;
       int arr[n];
       for(int i=0; i<n; i++){
        cin>> arr[i];
       }
       int sum=0, cnt=0;
       for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum<=q && cnt<p) cnt++;
       }
       cout<< "Case " << cs++ << ": " << cnt <<endl;
    }

   return 0;
}
