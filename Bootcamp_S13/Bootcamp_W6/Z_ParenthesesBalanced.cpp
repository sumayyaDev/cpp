#include<bits/stdc++.h>
using namespace std;

bool is_matching(char opening, char closing)
{
    for(auto p : {"()", "[]"}){
        if(p[0]==opening && p[1]==closing){
            return true;
        }
    }
    return false;
}

bool is_opening(char c)
{
    for(char b : "(["){
        if(b==c) return true;
    }
    return false;
}

bool is_bracket(char c)
{
    for(char b : "()[]"){
        if(b==c) return true;
    }
    return false;
}

bool is_balanced(string bracket)
{
    stack<char> stk;
    for(char c : bracket){
        if(!is_bracket(c)) continue;
        if(is_opening(c)){
            stk.push(c);
        }
        else{ //not opening
           if(!stk.empty() && is_matching(stk.top(), c)){
              stk.pop();
           }else{
               return false;
           }
        }
    }

    return stk.empty();
}

int main(){
    int n; cin>> n;
    while(n--){
        string bracket;
        cin>> bracket;
        //int len = strlen(bracket);
        if(bracket.size()==0) cout<< "Yes\n";
        else{
           bool decision = is_balanced(bracket);
          if(decision) cout<< "Yes\n";
          else cout<< "No\n";
        }

    }

    return 0;
}

