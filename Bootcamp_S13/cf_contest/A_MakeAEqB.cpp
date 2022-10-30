#include<bits/stdc++.h>
using namespace std;
#define endl '\n';


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        int n; cin>> n;
        int a[n];
        int b[n];
        int one_a=0, zero_a=0;
        int one_b=0, zero_b=0;
        int flag;

        for(int i=0; i<n; i++){
            cin>> a[i];
            if(a[i]==0) zero_a++;
            else one_a++;
        }
        for(int i=0; i<n; i++){
            cin>> b[i];
            if(b[i]==0) zero_b++;
            else one_b++;
        }

        if(zero_a==zero_b && one_a==one_b){
           flag=0;
               for(int i=0; i<n; i++){
                   if(a[i]!=b[i]){
                      flag=1;
                      break;
                   }
               }
               if(!flag) cout<< 0 << "\n";
               else  cout<< 1 << "\n";
        }

        else{
            int op=0;
            if(zero_b>zero_a){
               for(int i=0; i<n; i++){
                   if(b[i]==0 && a[i]!=0 && zero_b!=zero_a){
                     a[i] = 0;
                     op++;
                   }
               }
               flag=0;
               for(int i=0; i<n; i++){
                   if(a[i]!=b[i]){
                      flag=1;
                      break;
                   }
               }
               if(zero_b==zero_a && flag==0){
                  cout<< op << "\n";
               }
               else if(zero_b==zero_a && flag==1) {
                      cout<< op+1 << "\n";
               }
            }

            else if(zero_b<zero_a){
                    for(int i=0; i<n; i++){
                        if(one_b!=one_a && a[i]==0){
                           a[i] = 1;
                           op++;
                           if(one_b==one_a) break;
                        }
                    }

                flag=0;
               for(int i=0; i<n; i++){
                   if(a[i]!=b[i]){
                      flag=1;
                      break;
                   }
               }
               if(one_b==one_a && flag==0){
                  cout<< op << "\n";
               }
               else if(one_b==one_a && flag==1) {
                      cout<< op+1 << "\n";
               }
            }
        }


    }


    return 0;
}

