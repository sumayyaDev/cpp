#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>> n;
    vector<int> a(n);
    map<int, int> occurr; // <num, it's occurence>

    for(int i=0; i<n; i++){
        cin>> a[i];
        occurr[a[i]]++;
    }
    int ans=0;
    for(int i=0; i<n; i++){
        bool isgood = false;

        for(int j=0; j<=31; j++){
           int x = (1<<j)-a[i]; //multiplying by 2^j
           if( occurr.count(x) && (occurr[x]>1 || (occurr[x]==1 && x!=a[i])) ){
             isgood = true;
           }
        }
        if(!isgood) ans++;
    }
    cout<< ans <<endl;

   return 0;
}

