#include<bits/stdc++.h>
#define ll long long
using namespace std;
//int const m = 10;
int modularExponentiation(int a, ll b, int m=10)
{
    int result = 1;
    int lastD_a = a%m; //get the last digit of a
    while(b){
       if(b&1){ //checking if bis odd
        result = (result * lastD_a)%m; //removing a^1 from the number
       }
       b>>=1; //shifting right means dividing by 2
       lastD_a=(lastD_a*lastD_a)%m;
    }
    return result;
}

int main(){

   int a, t;
   ll b;
   cin>>t;
   while(t--){
    cin >> a >> b;
    cout<< modularExponentiation(a, b) <<endl;
   }

   return 0;
}
