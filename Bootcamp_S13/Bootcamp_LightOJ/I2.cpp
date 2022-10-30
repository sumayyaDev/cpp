#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
double memoArray[N+5];

int main(){

     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);

    for(int i=1; i<=N; i++){
        memoArray[i]=memoArray[i-1]+log(i);
    }

    int t; cin>> t;
    int cs=1;
    int b;
    long long n, digits;
    while(t--){
       cin>> n >> b;
        digits = memoArray[n]/log(b) + 1;
        cout<< "Case " << cs++ << ": " << digits <<endl;
    }


   return 0;
}
