#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int cs=1;
    while(t--){
        int n;
        cin>> n;
        int a[n];
        a[0]=0;
        for(int i=1; i<=n; i++){
            cin>> a[i];
        }
        vector<int> v;
        for(int i=1; i<=n; i++){
            int diff = abs(a[i]-a[i-1]);
            v.push_back(diff);
        }
        sort(v.rbegin(), v.rend());
        cout<< "Case " << cs++ << ": " << *v.begin() << "\n";

    }

   return 0;
}

