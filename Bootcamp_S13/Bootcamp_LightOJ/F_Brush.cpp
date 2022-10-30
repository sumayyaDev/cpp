#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
        //cout<<endl;
        int n; cin>> n;
        int sum=0;
        while(n--){
            int a; cin>> a;
            if(a>0){
               sum+=a; //ignore negative value, lucky one
            }
        }
        //Case 1: 16
        cout<<"Case "<<cs++<<": "<<sum<<endl;
    }

   return 0;
}
