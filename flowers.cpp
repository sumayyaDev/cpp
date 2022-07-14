#include <cmath>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    double a, b, c, s, areaTri, r, cR, areaC, ross, vio, sun;
    cin>> a >> b >> c;
    s=(a+b+c)/2;
    areaTri = sqrt(s*(s-a)*(s-b)*(s-c));
    r = areaTri/s;
    ross = 4*atan(1)*r*r;
    vio = areaTri - ross;
    cR = (a*b*c)/(4*areaTri);
    areaC = 4*atan(1)*cR*cR;
    sun = areaC - areaTri;

    printf("%.4lf %.4lf %.4lf\n", sun, vio, ross);

  return 0;
}
