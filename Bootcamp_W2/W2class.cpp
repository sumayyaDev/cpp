#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n) {
   vector<int> div;
   for (int i = 1; i <= n; ++i) {
       if (n % i == 0) {
           div.push_back(i);
       }
   }

   return div;
}

int main(){
    int n;
    cin>>n;
    vector<int> divisor;
    divisor = divisors(n);
    for(int i=0; i<divisor.size(); i++){
        cout<<divisor[i]<<endl;
    }


   return 0;
}
