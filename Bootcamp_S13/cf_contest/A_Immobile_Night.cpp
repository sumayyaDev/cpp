#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>> n >> m;
    if(n==3 && m==3){
        cout<< 2 << " " << 2 <<endl;
    }
    else{
        cout<< n << " " << m <<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t; cin>> t;
    while(t--){
       solve();
    }

   return 0;
}

