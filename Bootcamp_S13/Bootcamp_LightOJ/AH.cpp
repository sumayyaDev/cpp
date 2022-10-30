#include <bits/stdc++.h>
using namespace std ;

double findArea(double r , double angle)
{
    return 0.5*r*r*angle ;
}

double findAngle(double a, double b, double c)
{
    double angle = acos( ( (b*b)+(c*c)-(a*a) ) / (2*b*c) ) ;
    return angle;
}

int main ()
{
    int t; cin>> t; int cs=1;
    while(t--){
        double r1, r2, r3;
        cin >> r1 >> r2 >> r3;
        double a = r1+r2;
        double b = r2+r3;
        double c = r3+r1;
        double s = 0.5 * (a+b+c);
        double area_tri = sqrt(s*(s-a)*(s-b)*(s-c));

        area_tri -= findArea(r1, findAngle(b, c, a));
        area_tri -= findArea(r2, findAngle(c, a, b));
        area_tri -= findArea(r3, findAngle(a, b, c));

        cout<< "Case " << cs++ << ": ";
        cout<< fixed << setprecision(10) << area_tri <<endl;

    }

    return 0;
}

