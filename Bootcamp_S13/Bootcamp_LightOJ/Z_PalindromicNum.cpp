#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    string n;
    string reverse_n;

    int cs=1;
    while(t--){
        cin>> n;
        reverse_n = n;
        reverse(reverse_n.begin(), reverse_n.end());
        if(n==reverse_n){
            cout<< "Case " << cs++ << ": Yes" << endl;
        }else{
            cout<< "Case " << cs++ << ": No" << endl;
        }
    }

   return 0;
}
