#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a;
    cin>> n >> m;
    int remaining=n;
    for(int i=0; i<m; i++){
        cin>> a;
        remaining = remaining - a;
    }
    if(remaining>=0){
        cout<< remaining << endl;
    }else{
        cout<< "-1" <<endl;
    }

   return 0;
}

