#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

const int maxn = 1e6+10;
//const int mod = 1e9+7;
bool isprime[maxn];

void sieve()
{
    isprime[1]=false;
    for(int i=2; i<=maxn; i++){
        if(isprime[i]==true){
            for(int j=i*2; j<=maxn; j+=i){
                isprime[j]=false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int n; cin>>n;
    while(n--){
       ll x;
       cin>>x;
       /*double sqrtx = sqrt(x);
       int indx = sqrtx;*/
       int sqrtx = (int)sqrt(x);
       /*if(indx==sqrtx){ //if x is a perfect square
            if(isprime[indx]) //the 3rd factor is its square root and it has to be a prime number
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
       }else{
           cout<< "NO" <<endl;
       }*/
       if(isprime[sqrtx]){
        cout<<"YES"<<endl;
       }else{
           cout<< "NO" <<endl;
       }
    }

   return 0;
}

