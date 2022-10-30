#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    arr[0][0]=1;    arr[2][0]=9;
    arr[0][1]=4;    arr[2][1]=8;
    arr[0][2]=5;    arr[2][2]=7;
    arr[0][3]=16;   arr[2][3]=14;
    arr[0][4]=17;   arr[2][4]=19;
    arr[1][0]=2;    arr[3][0]=10;
    arr[1][1]=3;    arr[3][1]=11;
    arr[1][2]=6;    arr[3][2]=12;
    arr[1][3]=15;   arr[3][3]=13;
    arr[1][4]=18;   arr[3][4]=20;

    arr[4][0]=25;
    arr[4][1]=24;
    arr[4][2]=23;
    arr[4][3]=22;
    arr[4][4]=21;

    int t; cin>> t;
    int cs=1;
    while(t--){
       int s;
       cin>> s;
       for(int row=0; row<5; row++){
        for(int col=0; col<5; col++){
            if(arr[row][col]==s){
                cout<< "Case " << cs++ << ": " << col+1 << " " << row+1 <<endl;
            }
        }
       }
    }

  return 0;
}
