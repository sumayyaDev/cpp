#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>> s;
    int cnt=0;

    if(s[0]=='R'){
        cnt++;
        if(s[1]=='R'){
            cnt++;
            if(s[2]=='R'){
                cnt++;
            }
        }
    }
    else if(s[1]=='R'){
        cnt++;
        if(s[2]=='R'){
            cnt++;
        }
    }
    else if(s[2]=='R') cnt++;

    cout<< cnt << "\n";


    return 0;
}
