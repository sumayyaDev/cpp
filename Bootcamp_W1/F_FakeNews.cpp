#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin>>str;
    string substr = "heidi";

    int j=0, count=0;
    for(int i=0; i<str.size(); i++){
        if(str[i] == substr[j]){
            count++;
            j++;
        }
    }

    if(count == substr.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  return 0;
}
