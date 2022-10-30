#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c;
    cin>> n >> c;
    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    sort(a, a+n);
    int cost=0;
    for(int i=0; i<n-1; i++){
        int cost1=0, cost2=0;
        int j=i;
        if(a[j]==a[j+1]){
            cost1 += 1;
            cost2 += c;
            j++;
            while(a[j]==a[j+1]){
                cost1 += 1;
                j--;
            }
            if(cost1<cost2) cost+=cost1;
            else cost+=cost2;
            i=j-1;
        }
        else if(a[j]!=a[j+1]){
            cost1 += 1;
            cost2 += c;
            if(cost1<cost2) cost+=cost1;
            else cost+=cost2;
            if(j+1==n-1){
                cost1 += 1;
            cost2 += c;
            if(cost1<cost2) cost+=cost1;
            else cost+=cost2;
            }
        }
    }
        cout<< cost <<endl;
}


int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }
   return 0;
}
