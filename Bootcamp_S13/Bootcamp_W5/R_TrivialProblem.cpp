#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

const ll N = 1000010;
ll a[N];//a[x]=y means y no. of zeros in x!
ll storeNum[N]; //store all the num with m no. of trailing zeros
void num_with_mTrailingZeros()
{
    ll zeros=0;
    for(ll i=5; i<N; i++){ //trailing zero starts from 5!
        if(i%5==0){
            ll temp=i;
            while(temp%5==0){
                zeros++;
                temp /= 5;
            }
        }
        a[i]=zeros;

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
n
    num_with_mTrailingZeros();
    ll m; cin>> m;

    ll k=0;
    for(ll i=1; i<N; i++){
        if(a[i]==m){
            storeNum[k++]=i;
        }
    }
    cout<< k << "\n";
    for(ll i=0; i<k; i++){
        cout<< storeNum[i] << " ";
    }
    cout<< "\n";

   return 0;
}


