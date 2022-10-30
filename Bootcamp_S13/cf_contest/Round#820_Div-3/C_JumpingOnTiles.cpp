#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>> s;
    int n = s.size();
    map<char, vector<int>> toward_indx;

    for(int i=0; i<n; i++){
        toward_indx[s[i]].push_back(i);
    }

    int direction = (s[0] < s[n-1]) ? 1 : -1;
    vector<int> ans;

    for(char c=s[0]; c!=s[n-1]+direction; c+=direction){
        for(auto now : toward_indx[c]){
            cout<< "  dir=" << direction << "  c=" << c << "  now=" << now <<endl;
            ans.push_back(now);
        }
    }

    int cost = 0;
    for(int i=1; i<ans.size(); i++){
        cost += abs(s[ans[i]] - s[ans[i-1]]);
    }
    cout<< cost << " " << ans.size() <<endl;
    for(auto x : ans){
        cout<< x+1 << " ";
    }
    cout<<endl;

}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}

