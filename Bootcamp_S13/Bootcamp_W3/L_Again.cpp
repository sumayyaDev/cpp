#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    int n; cin>>n;
    string name;
    map<string, int> mp; //generate pair for each person with the no.

    for(int i=0; i<n; i++){
        cin>>name;
        if(mp[name] == 0){
            cout<< "OK" <<endl;
            mp[name]++;
        }else{
            cout<< name << mp[name] <<endl;
            mp[name]++;
        }
    }


  return 0;
}
