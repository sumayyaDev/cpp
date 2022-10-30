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
        int n, m; //n->size of deque, m->no. of commands
        cin>> n >> m;
        deque<int> dq;
        cout<< "Case " << cs++ << ":\n";
        while(m--){
            string cmd;
            cin>> cmd;
            if(cmd=="pushLeft"){
               int x; cin>> x;
               if(dq.size()==n){
                 cout<< "The queue is full\n";
               }
               else{
                  cout<< "Pushed in left: " << x <<"\n";
                  dq.push_front(x);
               }
            }

            else if(cmd=="pushRight"){
                int x; cin>> x;
                if(dq.size()==n){
                 cout<< "The queue is full\n";
               }
               else{
                  cout<< "Pushed in right: " << x <<"\n";
                  dq.push_back(x);
               }
            }

            else if(cmd=="popLeft"){
                if(!dq.empty()){
                    cout<< "Popped from left: " << dq.front() <<"\n";
                    dq.pop_front();
                }
                else{
                    cout<< "The queue is empty\n";
                }
            }

            else{ //popRight
                if(!dq.empty()){
                    cout<< "Popped from right: " << dq.back() <<"\n";
                    dq.pop_back();
                }
                else{
                    cout<< "The queue is empty\n";
                }
            }

        }

    }

    return 0;
}

