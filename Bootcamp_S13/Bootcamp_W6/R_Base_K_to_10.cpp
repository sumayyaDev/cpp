#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

     int k; // k->base
     string n; //n->num
     cin>> k >> n;
     int ans=0;
     int len=n.length();
     for(int i=0; i<len; i++){
        ans = (ans*k) + (n[i]-'0');
     }
     cout<< ans <<endl;

    return 0;
}
