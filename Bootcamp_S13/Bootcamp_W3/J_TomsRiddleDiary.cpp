#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){

    int n; cin>>n;
    string name[500];
    for(int i=0; i< n; i++){
        cin>>name[i];
        int flag = 0;
        for(int j=0; j<i; j++){

            if(name[i] == name[j]){
                 cout<< "YES" <<endl;
                 flag=1;
                 break;
            }
        }

        if(flag==0){
                cout<< "NO" <<endl;
        }
    }

  return 0;
}
