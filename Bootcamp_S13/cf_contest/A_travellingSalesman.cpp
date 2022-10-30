#include<bits/stdc++.h>
using namespace std;


int main(){

    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int cord[n][n];
        for(int i=0; i<=n-1; i++){
            for(int j=0; j<=n-1; j++){
                cin>> cord[i][j];//cordinate of box
            }
        }

        /*for(int i=0; i<=n-1; i++){
            for(int j=0; j<=y-1; j++){
                cin>> cord[i][j];//cordinate of box
            }
         }*/

        int min_path[n][n];
        min_path[0][0]=cord[0][0];
        for(int j=1; j<=n-1; j++){
            min_path[0][j]=min_path[0][j-1]+cord[0][j];
        }
        for(int i=1; i<=n-1; i++){
            min_path[i][0]=min_path[i-1][0]+cord[i][0];

        }

        for(int i=1; i<=n-1; i++){
            for(int j=1; j<=n-1; j++){
                min_path[i][j]=min(min_path[i-1][j], min_path[i][j-1]) + cord[i][j];
            }
       }

       cout<< min_path[n-1][n-1]<<endl;


    }



  return 0;
}
