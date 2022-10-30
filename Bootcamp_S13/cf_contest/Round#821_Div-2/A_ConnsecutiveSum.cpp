#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        long long n, k;
        cin>> n >> k;
        long long a[n];
        for(long long i=1; i<=n; i++){
            cin>> a[i];
        }
        long long k2=0;
        long long max_indx=-1;
        long long flag=-1;
        for(long long i=1; i<=n-1; i++){
            for(long long j=i+1; j<=n; j++){
                if(a[i]<a[j] && i%k==j%k){
                   max_indx = j;
                   flag=1;
                }
                if(a[i]<a[max_indx] && flag==1 && k2<k){
                        swap(a[i], a[max_indx]);
                        k2++;
                }
            }
        }

        long long sum=0;
        for(long long i=1; i<=k; i++){
            sum += a[i];
        }
        cout<< sum <<endl;
    }


  return 0;
}
