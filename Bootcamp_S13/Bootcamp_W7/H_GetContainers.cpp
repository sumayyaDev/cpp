#include<bits/stdc++.h>
using namespace std;

int c[1005];
int main(){
    int t; cin>> t;
    int tc=1;
    while(t--){
        int n, m;
        cin>> n >> m; //no. of vessels, no. of containers
        int left=0, right=0;
        for(int i=1; i<=n; i++){
            cin>> c[i];
            left = max(left, c[i]);
            right += c[i];
        }

        while(left<=right){
            int cnt=1;
            int current=0;
            int mid = (left+right)/2;

            for(int j=1; j<=n; j++){
                if(current+c[j]>mid){
                    cnt++;
                    current = c[j];
                }
                else{
                    current += c[j];
                }
            }

            if(cnt <= m){
               right = mid-1;
            }else{
                left = mid+1;
            }
        }
        cout<< "Case " << tc++ << ": " << left <<endl;
    }

   return 0;
}
