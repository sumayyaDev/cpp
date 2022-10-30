#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
     int n; cin>>n;
     char n1[1000], n2[1000];
     cin>>n1>>n2;
     int count = 0;

     for(int i=0; i<n; i++){
        if(n1[i] >= n2[i]){
            count +=min(n1[i]-n2[i],n2[i]+10-n1[i]);
        }else{
            count +=min(n2[i]-n1[i],n1[i]+10-n2[i]);
        }
     }
     cout<< count <<endl;

  return 0;
}

