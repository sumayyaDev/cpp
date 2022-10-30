#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin>> n;

    getchar();
    while(n--){
        getline(cin, str);
        //cin>> str;
        int len = str.length();
        stack<char> stk;
        if(len%2!=0){
            cout<< "No\n";
        }
        else{
            for(int i=0; i<len; i++){
                if(str[i]=='(' || str[i]=='['){
                   stk.push(str[i]);
                }
                else if(!stk.empty() && str[i]==')' && stk.top()=='('){
                    stk.pop();
                }
                else if(!stk.empty() && str[i]==']' && stk.top()=='['){
                    stk.pop();
                }
                else{
                    stk.push(str[i]);
                }
            }

            if(stk.empty()) cout<< "Yes\n";
            else cout<< "No\n";
        }
    }
    return 0;
}

