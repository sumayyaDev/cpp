#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    getchar();
    int cs=1;
    while(t--){
        stack<string> FORWARD;
        stack<string> BACKWARD;
        string str, temp;

        FORWARD.push("http://www.lightoj.com/");
        cout<< "Case " << cs++ << ":" <<endl;

        while(1){
        cin>> str;
        if(str=="VISIT"){
            string url;
            cin>> url;

            if(!FORWARD.empty()){
               temp=FORWARD.top();
               FORWARD.pop();
               BACKWARD.push(temp);
            }
               while(!FORWARD.empty()){
                  FORWARD.pop();
               }
               FORWARD.push(url);


            cout<< FORWARD.top() <<endl;
        }

        else if(str=="BACK"){
            if(BACKWARD.empty()){
                cout<< "Ignored" <<endl;
            }else{
                temp=BACKWARD.top();
                BACKWARD.pop();
                FORWARD.push(temp);

                cout<< FORWARD.top() <<endl;
            }
        }
        else if(str=="FORWARD"){
            if(FORWARD.size()<2){
                cout<< "Ignored" <<endl;
            }else{
                temp=FORWARD.top();
                FORWARD.pop();
                BACKWARD.push(temp);

                cout<< FORWARD.top() <<endl;
            }
        }
        else if(str=="QUIT"){
            break;
        }
    }

    }

   return 0;
}






