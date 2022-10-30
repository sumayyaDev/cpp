#include<bits/stdc++.h>
using namespace std;

int const eps = 1e-9;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int cs=1;
    while(t--){
        int n, base;
        cin>> n >> base;
        double x=0;
        for(int i=1; i<=n; i++){ //concept from forthright48
            x += log10(i) / log10(base);
        }
        int digits = x+1+eps;
        cout<< "Case " << cs++ << ": " << digits <<endl;
    }

   return 0;
}
