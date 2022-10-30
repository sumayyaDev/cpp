#include<bits/stdc++.h>
using namespace std;
#define endl "\n"


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        int n; cin>> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
           cin>> v[i];
        }
        string s; cin>> s;

        sort(v.begin(), v.end());

        set<int> a;
        for(int i=0; i<n; i++){
           a.insert(v[i]);
        }

        set<char> st;
        for(int i=0; i<s.size(); i++){
            st.insert(s[i]);
        }
        cout<< "s.size()=" << s.size() << "  " << "st.size()=" << st.size() <<"  a.size()="<< a.size() <<endl;

    }


    return 0;
}
