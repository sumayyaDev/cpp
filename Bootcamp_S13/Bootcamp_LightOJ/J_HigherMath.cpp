#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
        int a[3];
        for(int i=0; i<3; i++){
            cin>> a[i];
        }
        sort(a, a+3);
        int c1 = a[0]*a[0] + a[1]*a[1];
        int c2 = a[2]*a[2];
        if(c1 == c2){
            cout<< "Case " << cs++ << ": yes" << endl;
        }else{
            cout<< "Case " << cs++ << ": no" << endl;
        }
    }

   return 0;
}
