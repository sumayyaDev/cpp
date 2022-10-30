#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    ll a, b;
    cin>> t;
    while(t--){
        cin>> a >> b;
        ll result = 1;
        while(b>0){
            if(b&1){ //bitwise operation, if odd it is 1
               result *= a;
               result %= 10;
            }
            a = a*a;
            b = b >> 1;
        }
        cout<< result%10 << endl;
    }

   return 0;
}
