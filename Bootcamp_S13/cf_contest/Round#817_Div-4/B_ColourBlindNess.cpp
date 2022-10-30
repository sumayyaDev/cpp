#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int colNo; cin>>colNo;
        string row1, row2;
        cin>> row1 >> row2;
        int flag=0;
        for(int i=0; i<colNo; i++){
            if(row1[i]=='R' && row2[i]!='R'){
                cout<< "NO" <<endl;
                flag=1;
                break;
            }
            else if(row1[i]!='R' && row2[i]=='R'){
                cout<< "NO"<<endl;
                 flag=1;
                 break;
            }
        }
        if(!flag)  cout<< "YES" <<endl;
    }

   return 0;
}
