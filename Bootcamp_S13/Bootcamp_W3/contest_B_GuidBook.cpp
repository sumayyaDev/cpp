#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

struct PairComp{
    bool operator()(pair<pair<string, int>, int> lhs, pair<pair<string, int>, int> rhs) const{
       const auto l = lhs.first;
       const auto r = rhs.first;

       if(l.first == r.first){
          return l.second > r.second;
       }
       else
        return l.first < r.first;
    }

};

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; cin>>n;
    vector<pair<pair<string, int>, int>> rest(n);

    for(int i=0; i<n; ++i){
        cin>>rest[i].first.first>>rest[i].first.second;
        rest[i].second = i+1;
    }

    sort(rest.begin(), rest.end(), PairComp());
    for(auto x : rest){
        cout<< x.second << endl;
    }


  return 0;
}


