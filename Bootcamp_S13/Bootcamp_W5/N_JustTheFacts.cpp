#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while(cin>> n){
        int res=1;
        for(int i=1; i<=n; i++){
            res *= i;
            while(res%10==0){
                res /= 10; //taking out the trailing zeros
            }
            res %= 100000; //wipe out the carry of the last 5 non-zero digits, if overflow happens
        }

        printf("%5d -> %d\n", n, res%10);

    }


   return 0;
}

