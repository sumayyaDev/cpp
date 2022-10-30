#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    int n, money;
    string str;
    while(t--){
        cout<< "Case " << cs++ << ":\n";
        cin>> n; //no. of Instructions
        int account=0;
        while(n--){
           cin>> str;
           if(str=="donate"){
              cin>> money;
              account+=money;
           }
           else if(str=="report"){
               cout<< account <<endl;
           }
        }
    }

   return 0;
}
