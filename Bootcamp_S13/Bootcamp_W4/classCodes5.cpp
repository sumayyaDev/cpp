#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    //base case
    if(b==0) return a;
    //general case
    return gcd(b, a%b);
}

int main(){

    int a,b, rgcd;
    cin>> a >> b;
    rgcd = gcd(a, b);
    cout<< rgcd <<endl;

   return 0;
}
