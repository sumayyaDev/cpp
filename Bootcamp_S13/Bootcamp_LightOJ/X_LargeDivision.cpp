#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
        string a;
        int b;
        cin>> a >> b;
        if(b<0)  b=-b;
        int i=0;
        if(a[i]=='-') i++;
        long long rem=0;
        while(a[i]){
            rem = (rem*10 + (a[i++]-'0')) % b;
        }
        if(rem==0){
                cout<< "Case " << cs++ << ": divisible" <<endl;
        }
        else{
            cout<< "Case " << cs++ << ": not divisible" <<endl;
        }
    }

   return 0;
}
