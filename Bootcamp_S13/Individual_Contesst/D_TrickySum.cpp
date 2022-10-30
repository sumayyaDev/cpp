#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        ll n; cin>>n;
        //1+2+..n=(n*n+1)/2
        ll sum = (n * (n+1)) /2;
        //now,(power of 2) step-1->subtract the value itself then step-2->add negative of the value
        // for 2 steps each time multiply by 2
        //sum = sum-(1)*2-(2)*2-(4)*2-(8)*2-(16)*2...
        ll powOf2 = 1;
        while(powOf2<=n){
            sum -= powOf2 * 2;
            powOf2 = powOf2 * 2;
        }

        cout<< sum <<"\n";

    }

    return 0;
}
