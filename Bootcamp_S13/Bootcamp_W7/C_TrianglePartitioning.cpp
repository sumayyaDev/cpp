#include<bits/stdc++.h>
#define Deposit(n) fixed << setprecision(n)
using namespace std;


int main(){
    int t; cin>>t;
    double ab, ac, bc, ratio_ade;
    double ad;
    int cas=0;
    while(t--){
        cin >> ab >> ac >> bc >> ratio_ade;
        double ad = sqrt(ratio_ade/(ratio_ade+1))*ab;  //using criteria of 2 triangles we can derive this formula; as the ration is given, considering BDEC=1
        cout<< "Case "<<++cas<<": "<<Deposit(6)<<ad<<endl;
    }

   return 0;
}
