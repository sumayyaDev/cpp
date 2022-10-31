#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const ll MAX=1e10;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin>> n >> t;
    vector<int> v(n);
    for(int& x : v){
        cin>> x;
    }

    int r=0;
    int sum=0;
    int ans=0;

    for(int i=0; i<n; i++){
        while(r<n && sum+v[r] <= t){
            sum += v[r];
            cout<< "loop--sum= " <<sum<<endl;
            r++;
        }
        cout<< "out--sum=" << sum << "  i=" <<i << "  r=" << r <<endl;
        ans = max(ans, r-i);
        sum -= v[i];
        cout<< "last--sum=" << sum <<endl;
    }

    cout<< ans << "\n";

    return 0;
}


