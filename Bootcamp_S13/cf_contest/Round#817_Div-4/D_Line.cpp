#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>> n; //length of the string
    string s; cin>> s;
    long long total=0;

    vector<long long> v;
    for(int i=0; i<n; i++){
        if(s[i] == 'L'){
            v.push_back((n-1-i) - i);
            total += i;
        }
        else{
            v.push_back(i - (n-1-i));
            total += n-1-i;
        }
    }

    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<n; i++){
        if(v[i]>0)  total += v[i];

        cout<< total << " ";
    }
    cout<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        solve();
    }

    return 0;
}
