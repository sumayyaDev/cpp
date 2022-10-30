#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){

    int n; cin>>n;
    int ai; cin>>ai; //no. of worms in 0-th pile
    int sum[100005];
    sum[0] = ai;
    for(int i=1; i<n; i++){
        cin >> ai;
        sum[i] = sum[i-1] + ai;
    }

    int m; cin>>m; //no. of juicy worms
    int qi;
    while(m--){
       cin>> qi;
       int nopile = lower_bound(sum, sum+n, qi) - sum;
       cout<< nopile +1 <<endl;
    }

  return 0;
}

