//to escape rang overflow each time (i*a)%Modulo
#include<bits/stdc++.h>
#define ll long long
using namespace std;

 ll factorial_mod(int n)
{
    int modulo = 1000000007;
    ll factorial=1;
    for(int i=1; i<=n; i++){
        factorial = (factorial*i)%modulo;
    }
    return factorial;
}

int main()
{
   int t, n;
   cin>>t;
   while(t--){
    cin>>n;
    cout<<factorial_mod(n)<<endl;
   }
   return 0;
}
