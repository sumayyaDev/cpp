#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const int MAX=1e7+5;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin>> a >> b;
    //2, 3, 5
    int a2, a3, a5;
    int b2, b3, b5;
    a2=a3=a5=0;
    b2=b3=b5=0;

    while(a%2==0){
        a2++;
        a /= 2;
    }
    while(a%3==0){
        a3++;
        a /= 3;
    }
    while(a%5==0){
        a5++;
        a /= 5;
    }


    while(b%2==0){
        b2++;
        b /= 2;
    }
    while(b%3==0){
        b3++;
        b /= 3;
    }
    while(b%5==0){
        b5++;
        b /= 5;
    }

    if(a!=b) cout<< -1 << "\n";
    else{
        cout<< abs(a2-b2) + abs(a3-b3) + abs(a5-b5) <<"\n";
    }

    return 0;
}
