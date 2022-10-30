#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
        ll s;
        cin>> s; //second in the table
        //finding root by squaring the second
        ll root = ceil(sqrt(s));
        ll row, col;
        ll where_NextSquareNum = root*root - s;
        if(where_NextSquareNum < root){ //next square no. will be after this 's' or this is the one
           if(root%2==0){
            row=where_NextSquareNum+1; //for 15, 1<4, row=2=where_NextSquareNum+1
            col=root;                  //colm=4=root=sqrt(17)
           }else{
               row=root;
               col=where_NextSquareNum+1;
           }

        }
        else{ //next square no. will be before this 's'
            col=root;
            row=s-(root-1)*(root-1);
            if(root%2==0){ //sqrt(11)=4, row=4=root, col=2=11-3*3
                ll temp = row;
                row = col;
                col = temp;
            }
        }

        cout<<"Case "<<cs++<<": "<<col<<" "<<row<<endl;
    }

   return 0;
}
