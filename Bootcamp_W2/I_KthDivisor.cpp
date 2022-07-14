#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin>>n>>k;
    vector<int> div;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
           div.push_back(i);
           if(n/i != i){
            div.push_back(n/i);
           }
        }
    }
    int flag=0;
    sort(div.begin(), div.end());
    for(int i=0; i<div.size(); i++){
        if(i+1 == k){
            cout<<div[i]<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"-1"<<endl;
    }

  return 0;
}
