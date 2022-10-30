#include<bits/stdc++.h>
#define ll long long
using namespace std;

void NOD(ll x)
{
    ll count=0;
    for(ll i =1; i*i<=x; i++){
        if(x%i==0){
            count++;
            if(x/i != i) count++;
        }
    }
    if(count==3){
           cout<< "YES" <<endl;
        }
        else{
            cout<< "NO" <<endl;
        }
}


int main(){
    int n; cin>>n;
    while(n--){
        ll x;
        cin>>x;
        NOD(x);
    }

   return 0;
}
