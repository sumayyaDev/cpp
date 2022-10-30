#include<bits/stdc++.h>
using namespace std;

char getString(int i)
{
    return ('a' + i-1);
}

void solve()
{
    int n; //length of the string
    string str;
    cin>> n >> str;

    string decoded;
    int i = n-1; //iterate the string from the last
    while(i>=0){
        if(str[i]!='0'){
           decoded += getString(str[i]-'0');
           i--;
        }
        else{
            decoded += getString(stoi(str.substr(i-2, 2)));
            i -= 3;
        }
    }
    reverse(decoded.begin(), decoded.end());
    cout<< decoded <<endl;
}


int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
