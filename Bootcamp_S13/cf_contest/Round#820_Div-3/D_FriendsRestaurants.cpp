#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>> n;
    vector<int> x(n), y(n);
    vector<pair<int, int>> diff(n);
    int k, l;
    for(int i=0; i<n; i++){
        cin>>k;
        x[i]=k;
    }
    for(int i=0; i<n; i++){
        cin>>l;
        y[i]=l;
    }

    for(int i=0; i<n; i++){
        diff[i].first = y[i]-x[i];
        diff[i].second = i;
    }
    sort(diff.begin(), diff.end());
    reverse(diff.begin(), diff.end());

    int j=n-1;
    int cnt=0;
    for(int i=0; i<n; i++){
        while(j>i && diff[i].first + diff[j].first<0){
            j--; }
        if(j<=i) break;
        cnt++;
        j--;
    }

    cout<< cnt << endl;
}



int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
