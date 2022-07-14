#include<iostream>
#include<cstdio>
using namespace std;
int main(){

    string s;
    cin>>s;
    int count = 0;
    for(int i=1; i<s.size()-1; i++){
        if(isupper(s[i])){
            count++;
        }
    }
    cout<<count+1<<endl;

  return 0;
}
