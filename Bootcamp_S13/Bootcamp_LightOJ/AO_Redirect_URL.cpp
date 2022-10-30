#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t; int cs=1;
    string url;

    while(t--){
        cin>> url;
        if(url[4]!='s'){
            url.insert(4, "s");
        }
        cout<< "Case " << cs++ << ": " << url <<endl;
    }

   return 0;
}
