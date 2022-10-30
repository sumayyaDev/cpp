#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){

    int n ,m;
    cin>> n >> m;
    map<string, string> mp;
    string name, ip;
    string cmd;

    while(n--){
        cin>> name >> ip;
        mp[ip] = name;  //(ip, name)---ip is unique
    }

    while(m--){
        cin>> cmd >> ip;

        cout<< cmd << " " << ip << " #" << mp[ip.substr(0, ip.length()-1)] << endl;
    }

  return 0;
}
