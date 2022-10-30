#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int r1, r2, h, p;
    double pi = 2.0*acos(0.0);
    int cs=1;
    while(t--){
        cin>> r1 >> r2 >> h >> p;
        double r_water = p/(h*1.0) * (r1-r2) + r2;
        double volume = (pi/3) * p * (r_water*r_water+r2*r2+r_water*r2);

        printf("Case %d: %.10f\n", cs++, volume);
    }

   return 0;
}
