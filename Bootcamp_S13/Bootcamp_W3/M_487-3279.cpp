#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

const ll MAX=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        int n; cin>> n;
        map<string, int> mp;
        while(n--){
            string s, str="";
            cin>> s;

            for(int i=0; i<s.size(); i++){
                if(s[i]=='-'){
                   continue;
                }
                else if(s[i]=='A' || s[i]=='B' || s[i]=='C'){
                    str += '2';
                }
                else if(s[i]=='D' || s[i]=='E' || s[i]=='F'){
                    str += '3';
                }
                else if(s[i]=='G' || s[i]=='H' || s[i]=='I'){
                    str += '4';
                }
                else if(s[i]=='J' || s[i]=='K' || s[i]=='L'){
                    str += '5';
                }
                else if(s[i]=='M' || s[i]=='N' || s[i]=='O'){
                    str += '6';
                }
                else if(s[i]=='P' || s[i]=='R' || s[i]=='S'){
                    str += '7';
                }
                else if(s[i]=='T' || s[i]=='U' || s[i]=='V'){
                    str += '8';
                }
                else if(s[i]=='W' || s[i]=='X' || s[i]=='Y'){
                    str += '9';
                }
                else if(s[i]>='0' && s[i]<='9'){
                    str += s[i];
                }
            }
            mp[str]++;
        }

        int flag=0;
        for(auto it : mp){
            if(it.second>1){
                flag=1;
                for(int i=0; i<3; i++){
                   cout<< it.first[i];
                }
                cout<< "-";
                for(int i=3; i<7; i++){
                    cout<<it.first[i];
                }
                cout<< " " << it.second <<"\n";
            }

        }

        if(!flag) cout<< "No duplicates." <<"\n";

    if(t>=1) cout<< "\n";
    }

    return 0;
}
