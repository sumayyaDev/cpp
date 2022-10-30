#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    string temp;

    getchar();
    int cs=1;
    while(t--){
        cout<< "Case " << cs++ << ":" <<endl;

        stack<string> FORWARD, BACK;
        string str, url;

        FORWARD.push("http://www.lightoj.com/");

        while(1){
            cin>> str;

            if(str=="VISIT"){
                cin>> url;
                //top element-->FORWARD to BACK
                temp=FORWARD.top();
                FORWARD.pop();
                BACK.push(temp);
                while(!FORWARD.empty()){
                    FORWARD.pop();
                }
                FORWARD.push(url);
                cout<< FORWARD.top() <<endl;

            }
            else if(str=="BACK"){
                if(BACK.empty()){
                    cout<< "Ignored" <<endl;
                }else{
                    //moving top element from "BACK" stack to "FORWARD" stack
                    //BACK to FORWARD
                    temp=BACK.top();
                    BACK.pop();//Delete the top element
                    FORWARD.push(temp);// added to top of FORWARD
                    cout<< FORWARD.top() <<endl;
                }
            }
            else if(str=="FORWARD"){
                if(FORWARD.size() < 2){
                    cout<< "Ignored" <<endl;
                }else{
                    temp = FORWARD.top();
                    FORWARD.pop();
                    BACK.push(temp);
                    cout<< FORWARD.top() << endl;
                }
            }else if(str=="QUIT"){
                break;
            }
        }
    }

   return 0;
}











