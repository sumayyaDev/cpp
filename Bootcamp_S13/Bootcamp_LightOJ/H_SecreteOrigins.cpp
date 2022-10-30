#include<bits/stdc++.h>
using namespace std;

string decimal_T_oBinary(int n)
{
    string bit = "";
    for(int i=31; i>=0; i--){ //in binary represented in 32 bit
        //bit by bit operations
        int b = 1 << i;
        bit += (n & b)? '1' : '0';
    }
    return bit;
}

int Binary_To_Decimal(string binary2)
{
    int decimal = 0;
    for(int i=0; i<=31; i++){
        decimal = (2*decimal) + binary2[i] - '0';
    }
    return decimal;
}

int main(){
   int t; cin>> t; int cs=1;
   int n;
   while(t--){
       cin>> n;
       string binary= decimal_T_oBinary(n);
       next_permutation(binary.begin(), binary.end());
       int next_n = Binary_To_Decimal(binary);

       cout<< "Case " << cs++ << ": " << next_n <<endl;
   }

}
