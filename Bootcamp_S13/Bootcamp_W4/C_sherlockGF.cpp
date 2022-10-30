#include<bits/stdc++.h>
using namespace std;
int sieve[100000];

int main(){

    int n; cin>>n;
    for(int i=2; i<=n+1; i++){
        if(!sieve[i]){
            for(int j=2*i; j<=n+1; j+=i){
                sieve[j]=1;
            }
        }
    }

    if(n>2)  cout<<"2"<<endl;
    else  cout<<"1"<<endl;

    for(int i=2; i<=n+1; i++){
        if(!sieve[i])   cout<<"1 ";
        else  cout<<"2 ";
    }

  return 0;
}
