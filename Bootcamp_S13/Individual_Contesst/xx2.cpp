#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int mod = 10^9;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin>> a >> b;
    /*if(a>b){
        cout<< "GREATER\n";
    }
    else if(a<b){
        cout<< "LESS\n";
    }
    else{
        cout<< "EQUAL\n";
    }*/
    if(stoi(a)%mod > stoi(b)%mod){
        cout<< "GREATER\n";
    }
    else if(stoi(a)%mod < stoi(b)%mod){
        cout<< "LESS\n";
    }
    else{
        cout<< "EQUAL\n";
    }
}

