#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    int n; cin>>n;
    string str[500];
    for(int i=0; i<n; i++){
        cin>>str[i];
        if(i==0) cout<< "OK" <<endl; //base case
        int count=0;
        for(int j=i-1; j>=0; j--){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==0 && i!=0){
            cout<< "OK" <<endl;
        }
        if(count!=0){
            cout<<str[i]<<count<<endl;
        }
    }

 return 0;
}
