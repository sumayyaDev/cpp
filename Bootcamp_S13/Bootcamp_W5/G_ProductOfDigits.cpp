#include<bits/stdc++.h>
using namespace std;

int productOfDigit(int n)
{
    if(n>=0 && n<=9){
        return n;
    }
    stack<int> digits; //LIFO
    //divides by 9 to 2 until n>1
    for(int i=9; i>=2 && n>1; i--){
        while(n%i==0){
            digits.push(i); //push divisors of n into the stack
            n = n / i;
        }
    }
    if(n!=1) return -1;
    int k=0;
    while(!digits.empty()){
        k=k*10+digits.top();
        digits.pop();
    }
    return k;

}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<< productOfDigit(n) <<endl;
    }

   return 0;
}
