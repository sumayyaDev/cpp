#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>> t;
    int caseN=1;
    while(t--){
       int n; cin>> n;
       int a[n-1], b[n-1];

       for(int i=0; i<n-1; i++){
          cin>> a[i] >> b[i];
       }
       int max = a[0] - b[0];
       int diff = a[0] - b[0];
       for(int i=1; i<n-1; i++){
          diff = (diff+a[i]) -b[i];
          if(diff>max) max=diff;
       }
       cout<< "Case " << caseN++ << ": " << max <<endl;
    }

  return 0;
}
