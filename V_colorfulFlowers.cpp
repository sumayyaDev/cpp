#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){

    double a,b,c;
    double s,areaCircl,bigR, smallR,areaTri,sun,vio,ross;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3){
        s=(a+b+c)/2;
        areaTri=sqrt(s*(s-a)*(s-b)*(s-c));
        bigR=(a*b*c)/(4*areaTri);
        smallR=areaTri/s;
        ross=4*atan(1)*smallR*smallR;
        vio=areaTri-ross;
        areaCircl=4*atan(1)*bigR*bigR;
        sun=areaCircl-areaTri;
        printf("%.4lf %.4lf %.4lf\n",sun,vio,ross);
    }


   return 0;
}

