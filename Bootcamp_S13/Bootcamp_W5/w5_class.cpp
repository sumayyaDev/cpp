//1. Binary exponentiation
//2. Modular Binary Exponentiation

#include<bits/stdc++.h>
using namespace std;

// O(exponent)
int power_naieve(int base, int exponent)
{
    int result = 1;
    while(exponent--){
        result *= base;
    }
    return result;
}

// 3^5 = 3*3*3*3*3
/*int power(int base, int exponent)
{
    if(exponent == 0){//base case
        //cout<< "epo is 0"<<endl;
        return 1;
    }

    int result = 1;
    if(exponent%2){ //odd case
        //cout<<"expo_0= "<<exponent<<endl;
        result *= base;
        //cout<<"res1= "<< result <<endl;
        //--exponent; /*no need-->5/2=2 & 4/2=2
        //cout<<"expo1= "<<exponent<<endl;
    }
    //cout<<"expo2= "<<exponent<<endl;
    int half = power(base, exponent/2);
    //cout<<"b-half= "<<half<<endl;
    //cout<<"b-result= "<<result<<endl;
    result *= (half*half);
    //cout<<"final result= "<<result<<endl;
    return result;
}*/

// Binary exponentiation
int power(int base, int exponent)
{
    //base case
    if(exponent==0){
        return 1;
    }
    //cout<<"expo--F= "<<exponent<<endl;
    int result = power(base, exponent/2);
    //cout<<"expo--"<<exponent<<endl;
    //cout<<"result1= "<<result<<endl;
    result *= result;
    //cout<<"result2= "<<result<<endl;
    if(exponent%2){
        result *= base;
        //cout<<"result_IN= "<<result<<endl;
    }
    //cout<<"result_last= "<<result<<endl;
    return result;
}

// Modular Binary exponentiation
int power_modulo(int base, int exponent, int modulo)
{
    //base case
    if(exponent==0){
        return 1;
    }

    int result = power_modulo(base, exponent/2, modulo);
    result = (result*result) % modulo;

    if(exponent%2){
        result = (result*base) % modulo;
    }
    return result;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //cout<< power(2, 5) <<endl;
    /*for(int i=1; i<=5; i++){
        for(int j=0; j<=5; j++){
            cout<<i<<"^"<<j<<" = "<<power(i, j)<<endl;
        }
    }*/

    const int m = 1e9 + 7;
    for(int i=1; i<=20; i++){
        for(int j=0; j<=20; j++){
            cout<<i<<"^"<<j<<" = "<<power_modulo(i, j, m)<<endl;
        }
    }


   return 0;
}
