#include<bits/stdc++.h>
using namespace std;

int lady[100000];
int main(){
    int ladyN, luchuN, luchu;
    cin>> ladyN;
    for(int i=0; i<ladyN; i++){
        cin>>lady[i];
    }
    cin>>luchuN;
    while(luchuN--){
        cin>>luchu;
        int shorter=0, tall=0;
        for(int j=0; j<ladyN; j++){
            if(lady[j] < luchu){
                shorter=lady[j];
            }
            if(lady[j] > luchu){
                tall=lady[j];
                break;
            }
        }
        if(shorter==0){
            cout<< "X " << tall <<endl;
        }
        else if(tall==0){
            cout<< shorter << " X" <<endl;
        }
        else{
             cout<< shorter << " " << tall << endl;
        }
    }

   return 0;
}
