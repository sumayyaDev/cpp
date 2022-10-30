#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        int n; string str;
        cin>> n >> str;
        if(n!=5){
            cout<< "NO" <<endl;
        }
        else{
            if(str=="Timur" || str=="miurT" || str=="Trumi" || str=="mriTu"){
                cout<< "YES" <<endl;
            }else{
                cout<< "NO" <<endl;
            }
        }
    }

   return 0;
}
