#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n, k;
        cin>> n >> k;

        if(k<n)  cout<< k <<endl;
        else if(k >= n){
            int x=k;
            int y=k;
            while((x/n) > 1){
                x = x/n;
                y = y+x;
            }

            while((y-(y/n)) != k){
                y += 1;
            }
            cout<< y <<endl;
        }
    }

   return 0;
}
