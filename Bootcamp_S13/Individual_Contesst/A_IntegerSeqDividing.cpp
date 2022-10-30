#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>> n;
    n %= 4;
    //n=12->1,2,3,4,5,6,7,8,9,10,11,12
    //sum1=3+4+5+7+9+11=39
    //sum2=1+2+6+8+10+12=39
    //sum1-sum2=0, 12%4=0
    //n=15, 15%4=3, sum1=1+2+3+8+10+11+12+13=60 , sum2=6+4+5+7+9+14+15=60
    if(n==0 || n==3){
        cout<< 0 <<endl;
    }
    else{
        cout<< 1 <<endl;
    }

   return 0;
}

