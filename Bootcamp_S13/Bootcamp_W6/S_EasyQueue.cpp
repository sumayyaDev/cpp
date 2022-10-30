#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pi acos(-1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    queue<int> q;
    while(t--){
        int type, x;
        cin>> type;

        if(type==1){
            cin>> x;
            q.push(x);
        }
        else if(type==2){
            if(q.empty()) continue;
            else q.pop();
        }
        else{
            if(!q.empty()){
               cout<< q.front() <<"\n";
            }else{
               cout<< "Empty!\n";
            }
        }
    }

   return 0;
}
