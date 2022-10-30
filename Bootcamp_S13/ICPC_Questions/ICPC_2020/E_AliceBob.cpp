#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int tcase=0;
    while(t--){
        int moves=0;
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>> a[i];
        }

        for(int i=n/2; i>=0; i--){
            if(a[i]<0){
                if(i<=n/2 && a[i-1]>=0 && (i-1>=0)){
                    int temp= a[i-1];
                    a[i-1] = a[i];
                    a[i] = temp;
                    moves++;
                }
            }
        }

         for(int i=(n/2)+1; i<n; i++){
            if(i>n/2 && a[i+1]>=0 && i+1!=n){
                    int temp= a[i+1];
                    a[i+1] = a[i];
                    a[i] = temp;
                    moves++;
                }
        }

        int sum=0;
        for(int i=0; i<n; i++){
            if(a[i]>=0){
                sum += a[i];
            }
        }

        cout<< "Case " << ++tcase << ": " << sum << " " << moves << endl;
    }

   return 0;
}
