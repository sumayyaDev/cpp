#include<bits/stdc++.h>
using namespace std;

int gcd(int g, int l)
{
    if(l==0) return g;
    return gcd(l, g%l);
}

int lcm(int g, int l)
{
    return ((g/gcd(g,l)) * l);
}

int main(){
    int t; cin>>t;
    while(t--){
        int g, l, a, b;
        cin>> g >> l;
        a = gcd(g, l);
        b = lcm(g, l);
        if(a==g && b==l)
            cout<< a << " " << b<<endl;
        else
            cout<< "-1" <<endl;
    }

   return 0;
}
