#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    sort(arr, arr+n);

    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sumOfTwo = arr[i]+arr[j];
            //cout<< "\ni= " << i << "    j= "<< j <<endl;
            int index = upper_bound(arr, arr+n, sumOfTwo-1) - arr;
            index--;
            //cout<< "index-- = " << index << "   ";
            if(index>j){
                cnt += index-j;
                //cout<< "cnt= " << cnt <<endl;
            }
        }
    }
    cout<< "Case " << cs++ << ": " << cnt <<endl;

  }

   return 0;
}
