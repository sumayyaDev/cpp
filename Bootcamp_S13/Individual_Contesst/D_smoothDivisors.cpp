#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int result = 0;
    for(int i=2; i<=n; i++){
        if((n/i) == (n%i)){
            result++;
        }
    }
    cout<<result<<endl;

   return 0;
}

