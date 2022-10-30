#include<bits/stdc++.h>
using namespace std;
const double pi=2*acos(0.0);

int main(){

    //freopen("in.txt","r",stdin);
    int n,p=0;
    double r;
    cin>>n;
    while(n--){
        cin>>r;p++;
        //printf("%.20f\n",pi);
        printf("Case %d: %.2f\n",p,(4-pi)*r*r);
    }
}
