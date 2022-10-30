#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t; int cs=1;
    string m1, m2;
    int d1, y1, d2, y2;
    char comma;

    while(t--){
        cin>> m1 >> d1 >> comma >> y1;
        cin>> m2 >> d2 >> comma >> y2;

        if(m1=="January" || m1=="February"){
            y1=y1;
        }else{ y1++; }

        if(m2=="January" || (m2=="February" && d2<29)){
            y2--;
        }else{ y2=y2; }

        //leap years comes after 4 years
        //so find no. of multiples of 4 by dividing 4
        //int multiples_Of_4 = (y2-y1+1) / 4;
        int multiples_Of_4 = y2/4 - (y1-1)/4;
        //multiples of 100 are not leap year
        //int multiples_Of_100 = (y2-y1+1) / 100;
        int multiples_Of_100 = y2/100 - (y1-1)/100;
        //multiples of 400 are leap year
        //there are some multiples of 100 those are also multiples of 400
        //int multiples_Of_400 = (y2-y1+1) / 400;
        int multiples_Of_400 = y2/400 - (y1-1)/400;
        //formula
        int leapYears = multiples_Of_4 + multiples_Of_400  - multiples_Of_100;

        cout<< "Case " << cs++ << ": " << leapYears <<endl;

    }

   return 0;
}
