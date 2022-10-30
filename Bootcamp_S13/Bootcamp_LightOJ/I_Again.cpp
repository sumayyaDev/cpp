#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double memoizedArr[1000005];
    memoizedArr[0] = 0;

    for(int i=1; i<=1000000; i++){
        memoizedArr[i]=memoizedArr[i-1]+log10(i); //to avoid repetition log(1)+log(2)+...
    }

    int t; cin>> t;
    int cs=1;
    while(t--){
        int base;
        long long n, digits;
        cin>> n >> base;
        digits = memoizedArr[n]/log10(base) + 1;
        cout<< "Case " << cs++ << ": " << digits <<endl;
    }


   return 0;
}
