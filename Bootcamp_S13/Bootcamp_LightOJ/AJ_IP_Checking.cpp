#include<bits/stdc++.h>
using namespace std;

int Binary_to_Decimal(int b)
{
    int temp = b;
    int deci = 0;
    int base = 1; //2^0=1
    while(temp){
        int last_digit = temp%10; // 1 or 0
        temp = temp/10;
        deci += last_digit * base;
        base = base * 2; //2^1=1*2=2, 2^2=2*2=4, 2^3=4*2
    }
    return deci;
}

int main(){
    int t; cin>> t;
    int cs=1;
    int a, b, c, d;
    int b1, b2, b3, b4;
    char dot;
    while(t--){
        cin>> a >> dot >> b >> dot >> c >> dot >> d;
        cin>> b1 >> dot >> b2 >> dot >> b3 >> dot >> b4;

        b1 = Binary_to_Decimal(b1);
        b2 = Binary_to_Decimal(b2);
        b3 = Binary_to_Decimal(b3);
        b4 = Binary_to_Decimal(b4);

        if(a==b1 && b==b2 && c==b3 && d==b4){
            cout<< "Case " << cs++ << ": Yes\n";
        }
        else{
           cout<< "Case " << cs++ << ": No\n";
        }

    }

    return 0;
}
