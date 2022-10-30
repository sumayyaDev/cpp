#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

   long long n, m;
   cin>> n >> m; //n-->no. of job discription, m-->words in dic followed by m lines
   long long dollar[n];
   string job[n];

   for(long long i=0; i<n; i++){
    cin>>job[i]>>dollar[i];
   }

   while(m--){
    long long sum = 0;
    for( ; ; ){
        string str;
        cin>>str;
        if(str == ".") break; //if period, terminate
        for(long long i=0; i<n; i++){
            if(str == job[i]){
                sum += dollar[i];
                break;
            }
        }
    }
    cout<<sum<<endl;

   }

  return 0;
}
