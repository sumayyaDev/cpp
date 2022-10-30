#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    double pi = (2.0)*acos(0.0);
    int cs=1;
    while(t--){
        double R;
        int n;
        cin>> R >> n;
        double theta = pi/(double)n;
        double r = (R*sin(theta)) / (1+sin(theta));
        printf("Case %d: %.10f\n", cs++, r);

    }

  return 0;
}
