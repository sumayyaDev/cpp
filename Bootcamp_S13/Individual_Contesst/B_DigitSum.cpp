#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){

    int n; cin>>n;
    int div = n;
    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum += rem;
        n = n/10;
    }

    if(div%sum == 0) cout<< "Yes" <<endl;
    else cout<< "No" <<endl;

  return 0;
}
