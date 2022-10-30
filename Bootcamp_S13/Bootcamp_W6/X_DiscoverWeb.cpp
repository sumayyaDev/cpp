#include<bits/stdc++.h>
using namespace std;

void solve()
{
    stack<string> FORWARD, BACK;
    string str, url;

    FORWARD.push("http://www.lightoj.com/");
    while(1){
        cin>> str;
        string temp;
        if(str=="VISIT"){
            cin>> url; //change
            if(FORWARD.empty()){
                cout<< "Ignored\n";
            }else{
                temp=FORWARD.top();
                FORWARD.pop();
                BACK.push(temp);

                while(!FORWARD.empty()){
                    FORWARD.pop();
                }
                //push the url in empty FORWARD stack
                FORWARD.push(url);
            }
            cout<< FORWARD.top() <<"\n";
        }

        else if(str=="BACK"){
            if(BACK.empty()){
                cout<< "Ignored\n";
            }
            else{
                temp=BACK.top();
                BACK.pop();
                FORWARD.push(temp);

                cout<< FORWARD.top() << "\n";
            }
        }

        else if(str=="FORWARD"){
            if(FORWARD.size()<2){
                cout<< "Ignored\n";
            }
            else{
                temp=FORWARD.top();
                FORWARD.pop();
                BACK.push(temp);
                cout<< FORWARD.top() <<"\n";
            }
        }

        else if(str=="QUIT"){
            break;
        }
    }

}

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
        cout<< "Case " << cs++ << ":\n";
        solve();
    }

   return 0;
}


