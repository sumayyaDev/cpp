#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const ll MAX=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>> n;
    vector<int> v(n);
    map<int, int> occurr; //<num, occurrence>
    for(int i=0; i<n; i++){
        cin>> v[i];
        occurr[v[i]]++;
    }

    int ans=0;
    for(int i=0; i<n; i++){
        bool isgood = false;
        for(int j=0; j<=31; j++){
            int x = (1<<j)-v[i]; // 2^j - v[i]
            if(occurr.count(x) && (occurr[x]>1 || (occurr[x]==1 && x!=v[i]))){
               isgood=true;
            }
        }
        if(!isgood) ans++;
    }

    cout<< ans <<"\n";

    return 0;
}
