#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    int Ax, Ay, Bx, By, Cx, Cy;
    int Dx, Dy;
    int x1, y1, x2, y2, l, w, area;

    while(t--){
        cin>> Ax >> Ay >> Bx >> By >> Cx >> Cy;
        int d1 = Cx-Bx;
        int d2 = Cy-By;
        Dx = Ax + d1;
        Dy = Ay+d2;

        area = (0.5) * (((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay)) - ((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax)));

        if(area<0) area = -area;

        cout<< "Case " << cs++ << ": " << Dx << " " << Dy << " " << area <<endl;
    }


   return 0;
}
