#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>> a >> b >> c;
    int ans;
    if(a==1 && b==1 && c==1){
        ans=a+b+c;
    }
    if(a==1 || b==1){
       ans= (a+b)*c;
    }
    else if(c==1){
        ans = a*(b+c);
    }
    else{
        ans = a*b*c;
    }
    cout<< ans <<endl;

   return 0;
}
