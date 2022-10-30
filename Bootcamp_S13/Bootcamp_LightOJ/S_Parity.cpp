#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
        int n;
        cin>> n;
        int ones=0;
        for(int i=0; i<=31; i++){ //integers are represented in binary 32 bits
            //left shifting 1
            // by logical AND operation checking
            //if output is 1 that means we found a set bit
            if(n & (1<<i)){
                ones++;
            }
        }
        if(ones%2==0){
            cout<< "Case " << cs++ << ": even" <<endl;
        }else{
            cout<< "Case " << cs++ << ": odd" <<endl;
        }

    }

    return 0;
}
