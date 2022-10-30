#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll b, p, m;
    while(cin>> b >> p >> m){
       ll result=1;
       for(ll i=1; i<=b; i++){
          result = (result*i)%m;
       }
       cout<< result <<endl;
     }

  return 0;
}
