#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>> n >> m;

    //n even but m odd => impossible, because every element other than the largest must have even occurrences
    //n>m => impossible
    if((n%2==0) && (m%2==1) || (n>m)){
       cout<< "NO" <<endl;
    }
    else if(n%2==1){ // n-->odd
        cout<< "YES" <<endl;
        for(int i=1; i<n; i++){
            cout<< "1 ";
        }
        cout<< m-n+1 <<endl;
    }
    else{ //n->even, m->even
        cout<< "YES" <<endl;
        for(int i=2; i<n; i++){
            cout<< "1 ";
        }
        cout<< (m-n+2) / 2 << " " << (m-n+2) / 2 <<endl;
    }
}

int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
