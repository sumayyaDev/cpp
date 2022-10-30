#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        int n; cin>> n;
        int a[n];
        int sort_a[n];
        for(int i=0; i<n; i++){
            cin>> a[i];
            sort_a[i]=a[i];
        }
        sort(sort_a, sort_a+n);

        int flag=0;
        for(int i=0; i<n; i++){
            if(a[i]!=sort_a[i]){
                flag=1;
                break;
            }
        }
        int op=0;
        if(!flag) cout<< 0 << '\n';
        else{
            for(int i=0; i<n; i++){
                if(a[i]==1){
                   for(int j=n-1; j>=0, i<j; j--){
                       if(a[j]==0){
                          a[j] += a[i];
                          int k=i;
                          while(k<n){
                            a[k]=a[k+1];
                          }
                          if(n==1) break;
                          else{
                            n -=1;
                            //i=0;
                            //j=n-1;
                            op++;
                          }
                         int falg=3;
                       }
                       if(flag==3) break;
                   }
                }

            }
            cout<< op << "\n";
        }

    }

  return 0;
}
