#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=1;
    for(int i=2; (i*i)<=n; i++){
        if(n%i==0){
           if(i==(n/i)) sum += i;
           else sum += (i + n/i);
        }
    }
    cout<< sum+n <<endl;

   return 0;
}
