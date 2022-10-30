#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;

    while(t--){
        int n; cin>> n;
        vector<int> p(n);
        iota(p.begin(), p.end(), 1);

         if(n%2==0){
            for(int i=0; i<n-2; i+=2){
                swap(p[i], p[i+1]);
            }
         }
         else{
            for(int i=1; i<n-2; i+=2){
                swap(p[i], p[i+1]);
            }
         }

         for(auto x : p){
            cout<< x << " ";
         }
         cout<<endl;
    }

   return 0;
}
