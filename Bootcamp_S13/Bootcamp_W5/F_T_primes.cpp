#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;  cin>>n;
    while(n--){
        ll x;
        cin>>x;
        ll count=0;
        for(ll i=1; i<=x; i++){
           if(x%i==0) count++;
        }
        if(count==3){
           cout<< "YES" <<endl;
        }
        else{
            cout<< "NO" <<endl;
        }
    }
   return 0;
}
