#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main(){

    int n, x, gcd;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        gcd = (i==0? x : __gcd(gcd, x));
    }
    int minSum=n*gcd;
    cout<<minSum<<endl;

   return 0;
}
