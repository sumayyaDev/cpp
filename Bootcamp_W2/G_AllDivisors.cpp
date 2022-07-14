#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int n)
{
   vector<int> div;
   for(int i=1; i*i<=n; i++){
    if(n%i == 0){
        div.push_back(i);
        if(n/i != i){
            div.push_back(n/i);
        }
     }
   }
   sort(div.begin(), div.end());
   return div;
}

int main(){

    int n;
    cin>>n;
    vector<int> divisor;
    divisor = divisors(n);

    for(int i=0; i<divisor.size(); i++){
        cout<<divisor[i]<<" ";
    }

  return 0;
}
