#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    ll count=0;
    if(n>2519){  //2^3x3^2x5x7=2520-->there are n/2520 numbers that are divisible by 2520
            count = n/2520;
        }
    cout<< count <<endl;

  return 0;
}
