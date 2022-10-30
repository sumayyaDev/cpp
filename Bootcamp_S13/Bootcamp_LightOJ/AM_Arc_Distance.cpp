#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t; int cs=1;
    double Ox, Oy, Ax, Ay, Bx, By;
    double arc; // s=r*theta
    while(t--){
       cin>> Ox >> Oy >> Ax >> Ay >> Bx >> By;
       double r  = sqrt(pow(Ox-Ax, 2) + pow(Oy-Ay, 2));
       double OA = sqrt(pow(Ox-Ax, 2) + pow(Oy-Ay, 2));
       double OB = sqrt(pow(Ox-Bx, 2) + pow(Oy-By, 2));
       double AB = sqrt(pow(Ax-Bx, 2) + pow(Ay-By, 2));
       double theta = acos((OB*OB+OA*OA-AB*AB) / (2*OB*OA));

       arc = r*theta;
       cout<< "Case " << cs++ << ": ";
       cout<< fixed << setprecision(8) << arc <<endl;

    }

   return 0;
}
