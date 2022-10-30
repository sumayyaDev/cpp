#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        string name= "Timur";
        int n; string str;
        cin>> n >> str;
        if(n!=5){
           cout<< "NO" <<endl;
        }
        else{
                int flag=-1;
            if(str==name){
                cout<< "YES" <<endl;
                flag=1;
            }else{
                while(next_permutation(name.begin(), name.end())){
                    if(str==name){
                        cout<<"YES"<<endl;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==-1)  cout<< "NO" <<endl;
        }

    }

   return 0;
}
