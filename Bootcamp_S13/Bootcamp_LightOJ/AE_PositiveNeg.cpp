#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>> t;
    int cs=1;
    ll n, m;

    while(t--){
        cin>> n >> m;
        ll sum= m * (n/2);
        cout<< "Case " << cs++ << ": " << sum <<endl;
    }

   return 0;
}
