#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    int n; cin>>n;
    vector<int> v;
    map<int, int> mp;
    while(n--){
        int x; cin>>x;

        if(mp.find(x) != mp.end()){  //found
            ++mp[x];  //map-->(x, occurence)
        }else{
            mp[x] = 1;
            v.push_back(x);
        }
    }

    int remove = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] < mp[v[i]]){
            int sub;
            sub=mp[v[i]] - v[i];
            remove += sub;
        }
        else if(v[i] > mp[v[i]]){
               remove += mp[v[i]];
        }
    }
    cout<< remove << endl;


  return 0;
}
