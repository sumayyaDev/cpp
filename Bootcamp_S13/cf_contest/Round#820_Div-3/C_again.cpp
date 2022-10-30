#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>> s;
    string copys = s;
    map<char, vector<int>> to_indx;
    int n = s.size();
    char start = s[0];
    char ends = s[n-1];
    for(int i=0; i<n; i++){
        to_indx[copys[i]].push_back(i);
    }
    int flag=0;
    if(s[0]<s[n-1]){
        sort(s.begin(), s.end());
    }
    else{
        flag=1;
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
    }
    vector<int> ans;
    int start_indx, end_indx;
    for(int i=0; i<n; i++){
        if(s[i]==start){
           start_indx = i;
           //cout<< "start_indx=" <<start_indx<<endl;
        }
        if(s[i]==ends){
            end_indx = i;
            //cout<< "end_indx=" << end_indx <<endl;
        }
    }

    //cout<< s[start_indx] << "  end--" << s[end_indx] <<endl;
    if(flag){
        for(char c = s[start_indx]; c>=s[end_indx]; c--){
            for(auto x : to_indx[c]){
                //cout<< "  x=" << x << "  c=" << c <<endl;
                ans.push_back(x);
            }
        }
    }else{
        for(char c = s[start_indx]; c<=s[end_indx]; c++){
            for(auto x : to_indx[c]){
                //cout<< "  x=" << x << "  c=" << c <<endl;
                ans.push_back(x);
            }
        }
    }

    int cost=0;
    for(int i=1; i<ans.size(); i++){
         cost += abs(copys[ans[i]] - copys[ans[i-1]]);
    }
    cout<< cost << " " << ans.size() <<endl;
    for(auto x : ans){
        cout<< x+1 << " ";
    }
    cout<< endl;
}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

   return 0;
}
