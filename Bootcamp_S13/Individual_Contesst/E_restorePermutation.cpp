#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        int n; cin>> n;
        int a[2*n];
        vector<int> p;
        for(int i=0; i<2*n; i++){
            cin>> a[i];
        }
        p.push_back(a[0]);
        for(int i=1; i<2*n; i++){
            int flag=0;
            for(int j=i-1; j>=0; j--){
                if(a[i]==a[j]){
                   flag=1;
                   break;
                }
            }
            if(flag==0){
                p.push_back(a[i]);
            }
        }

        for(auto x : p){
            cout<< x << " ";
        }  cout<<endl;
    }

   return 0;
}
