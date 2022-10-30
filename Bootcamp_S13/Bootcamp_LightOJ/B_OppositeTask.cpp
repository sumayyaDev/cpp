#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        int n;
        cin>> n;
        //no. of problems in both computers
        //any valid solution will do
        //if n<10 let's assign 0 always for the 1st computer

        if(n<=10){
           cout<< 0 << " " << n <<endl;
        }
        else{
            cout<< 10 << " " << n-10 <<endl; //at most 10 in each computer
        }
    }

   return 0;
}
