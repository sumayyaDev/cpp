#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int MAX=1e6+10;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin>> n >> s;
    int budget[n];
    int budget_sum[n];

    for(int i=1; i<=n; i++){
        cin>> budget[i];
    }
    int l=0, r=n;
    int Final_cost=0;
    int pos;
    while(l<=r){
        int mid = (l+r)/2;

        for(int i=1; i<=n; i++)
            budget_sum[i]=budget[i]+i*mid;
        sort(budget_sum, budget_sum+n);
        int tot_cost=0;
        for(int i=1; i<=mid; i++){
            tot_cost+=budget_sum[i];
        }
        if(tot_cost>s) r=mid-1;
        else{
            pos=mid;
            Final_cost=tot_cost;

            l=mid+1;
        }
    }


    cout<< pos << " " << Final_cost << "\n";

    return 0;
}
