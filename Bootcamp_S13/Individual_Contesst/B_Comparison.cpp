#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin>> a >> b;

    if(a.size() > b.size()){
        cout<< "GREATER\n";
    }
    else if(a.size()< b.size()){
        cout<< "LESS\n";
    }
    else{
        if(a>b) cout<< "GREATER\n";
        else if(a<b) cout<< "LESS\n";
        else cout<< "EQUAL\n";
    }

}
