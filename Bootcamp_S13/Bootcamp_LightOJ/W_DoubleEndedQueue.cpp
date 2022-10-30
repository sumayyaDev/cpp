#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
        int n, m, x; //n->size queue, m->no commands
        cin>> n >> m;
        deque<int> dq;
        string command;
        cout<< "Case " << cs++ << ":\n";
        while(m--){
            cin>> command;
            if((command=="pushLeft" || command=="pushRight") && (dq.size()==n)){
                cin>> x;
                cout<< "The queue is full" <<endl;
            }
            else if((command=="popLeft" || command=="popRight") && dq.size()==0){
                cout<< "The queue is empty" <<endl;
            }
            else if(command=="pushLeft"){
                cin>> x;
                dq.push_front(x);
                cout<< "Pushed in left: " << x <<endl;
            }
            else if(command=="pushRight"){
                cin>> x;
                dq.push_back(x);
                cout<< "Pushed in right: " << x <<endl;
            }
            else if(command=="popLeft"){
                x=dq.front();
                dq.pop_front();
                cout<< "Popped from left: " << x <<endl;
            }
            else if(command=="popRight"){
                x=dq.back();
                dq.pop_back();
                cout<< "Popped from right: " << x <<endl;
            }
        }
    }

  return 0;
}
