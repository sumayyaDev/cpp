#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

    ll k;
    cin>>k;
    string str;
    int count = 0;
    while(1){
        count++;
        str += to_string(count);
        if(count==k){
            break;
        }
    }
    cout<<str[k-1]<<endl;

  return 0;
}
