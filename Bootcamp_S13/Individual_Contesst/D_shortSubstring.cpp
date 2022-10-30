#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        string str;
        cin>> str;
        vector<char> a;
        a.push_back(str[0]);
        a.push_back(str[1]);
        for(int i=2; i<str.length()-1; i+=2){
           a.push_back(str[i+1]);
        }
        for(auto x : a){
            cout<< x;
        } cout<< endl;
    }

   return 0;
}
