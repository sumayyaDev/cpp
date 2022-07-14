#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        if(n==1 || n==2){
            cout<<"0"<<endl;
        }
        else{
            int count =0;
            int hn=n/2;
            n=n-1;
            while(n!=hn){
            count++;
            n--;
            }
        cout<<count<<endl;
       }

    }


   return 0;
}
