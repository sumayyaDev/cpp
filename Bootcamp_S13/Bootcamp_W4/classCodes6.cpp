#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    //base case
    if(b==0) return a;
    //general case
    return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return ((a/gcd(a, b)) * b);
}

int main(){

    int a, b, rlcm;
    cin>> a >> b;
    rlcm = lcm(a, b);
    cout<< rlcm << endl;

   return 0;
}
