#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>> n;
    //the sum is even, then diff=0
    //the sum is odd, then diff=
    ll sum=(n*(n+1)) / 2;
    if(sum%2==0){
        cout<< 0 <<endl;
    }
    else{
        cout<< 1 <<endl;
    }

   return 0;
}
