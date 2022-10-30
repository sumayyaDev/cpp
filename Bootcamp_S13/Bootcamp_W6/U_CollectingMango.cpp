#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pi acos(-1)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int cs=1;
    while(t--){

        stack<int> st;
        int maxS=0;
        int no_op; cin>> no_op;
        cout<< "Case " << cs++ << ":\n";

        while(no_op--){
            char op;
            cin>> op;
            if(op=='A'){
               int x;
               cin>> x;
               if(x>maxS){
                  maxS=x;
               }
               st.push(maxS);
            }
            else if(op=='R'){
                if(!st.empty()){
                    st.pop();
                    if(!st.empty()){
                        if(maxS>st.top()) maxS=st.top();
                    }
                    else{ //if the stack is empty
                        maxS=0; //reset
                    }
                }
            }
            else{
                if(!st.empty()){
                    cout << st.top() <<"\n";
                }else{
                    cout << "Empty\n";
                    maxS=0;
                }
            }
        }

     }

}

