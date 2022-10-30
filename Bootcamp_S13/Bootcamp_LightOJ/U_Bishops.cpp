#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    int r1, c1, r2, c2;
    while(t--){
       cin>> r1 >> c1 >> r2 >> c2;
       int c = abs(c1-c2);
       int r = abs(r1-r2);
       if(c==r){
          cout<< "Case " << cs++ << ": 1\n";
       }
       else{
           if(c%2==r%2){
              cout<< "Case " << cs++ << ": 2\n";
           }else{
               cout<< "Case " << cs++ << ": impossible\n";
           }
       }
    }

   return 0;
}
