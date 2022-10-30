#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin>> a >> b >> c >> d;
    int train, bus;
    if(a>b) train=b;
    else train=a;

    if(c>d) bus=d;
    else bus=c;

    cout<< train+bus <<endl;

   return 0;
}
