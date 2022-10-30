#include<bits/stdc++.h>
using namespace std;
const double pi = (2.0)*acos(0.0);
int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
        double r;
        cin>> r;
        double d = (2.0) * r;
        double circA = pi * r * r;
        double sqrA = d * d;
        double blueA = (sqrA - circA);
        //double blueA = (2*r * 2*r) - (pi*r*r);
        //printf("Case %d: %.2lf\n", cs, blueA);
        printf("Case %d: %.2f\n", cs, blueA+1e-9);
        cs++;
    }

    return 0;
}

