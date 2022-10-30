#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    double v1, v2, v3, a1, a2;
    while(t--){
        cin>> v1 >> v2 >> v3 >> a1 >> a2;
        double t1 = v1/a1;
        double t2 = v2/a2;
        double t3 = max(t1, t2);
        double d_bird = v3*t3;
        double d1 = v1*t1 - 0.5*a1*t1*t1; //s=ut-0.5at^2
        double d2 = v2*t2 - 0.5*a2*t2*t2;
        double d_train = d1+d2;

        //cout<< "Case " << cs++ << ": " << d_train << " " << d_bird <<endl;
        printf("Case %d: %.10f %.10f\n", cs++, d_train, d_bird);
    }

   return 0;
}
