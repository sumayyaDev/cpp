#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;  string s;
    cin>>t;
    while(t--){
        cin>>s;
        int len = s.size();
            for(int i=len-1; i>=0; i--){
                if(s[i] == '0'){
                    s.pop_back();
                }
                if(s[i] == '1'){
                    break;
                }
            }
            int count = 0;
            int flag=0;
            for(int i=0; i<s.size(); i++){
                if(s[i] == '1'){
                    flag=1;
                }
                if(flag){
                    if(s[i] == '0') count++;
                }
            }

            cout<<count<<endl;
    }

  return 0;
}
