#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

/*bool comp(int x, int y){

    if(x%2 == y%2){
        return x<y;
    }
    return x%2 == 0;
}*/

struct Comp{
    bool operator()(int lhs, int rhs) const{
       if(lhs%2 == rhs%2) return lhs<rhs;
       return lhs%2 == 0;
    }
};

/*struct Comp{
    bool operator()(int lhs, int rhs) const{
        return lhs<rhs;
    }
};*/




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /*map<int, int> mp;
    mp.insert({2, 3});
    mp.insert({1, 5});

    pair<int, int> x = *mp.begin();
    cout<< x.first << ", " << x.second <<endl;
    pair<int, int> y = *prev(mp.end());
    cout<< y.first << ", " << y.second <<endl;*/

    /*map<int, int> mp;
    mp[2] = 1;
    mp.insert({1, 0});

    auto map_it = (mp.begin());
    //increment one of the smallest value
    set<int> st = {1, -1, 3}; //set automatically sort everything
    for(auto x : st){
        cout<< x <<" ";
    }
    cout<<endl;

    int smallest_value = *st.begin();
    st.erase(st.begin());
    smallest_value++;
    st.insert(smallest_value);

    for(auto x : st){
        cout<< x <<" ";
    }
    cout<<endl;*/

    /*multiset<int> mset = {3, -1, 1, 1};
    for(auto x : mset){
        cout<< x << " ";
    }
    cout<<endl;
    mset.erase(1);
    for(auto x : mset){
        cout<< x << " ";
    }
    cout<<endl;*/

    /*multiset<int> mset = {3, -1, 1, 1};
    for(auto x : mset){
        cout<< x << " ";
    }
    cout<<endl;
    mset.erase(mset.find(1));
    for(auto x : mset){
        cout<< x << " ";
    }
    cout<<endl;*/


    /*unordered_set<int> uset = {-1, 0, 11, 20};

    for(auto x: uset){
        cout<< x << " ";
    }
    cout<<endl;*/


    //lower_bound(equal or greater)
    //upper_bound(strictly greater)
    /*vector<int> v = {1, 2, 2, 3, 3, 5, 6, 7};
    int lb3 = lower_bound(v.begin(), v.end(), 3) - v.begin();
    cout<< lb3 <<endl;
    int ub3 = upper_bound(v.begin(), v.end(), 3) - v.begin();
    cout<< ub3 <<endl;
    cout<<endl;*/


    /*multiset<int> mst = {1, 2, 2, 3, 3, 5, 6, 7};
    auto it = mst.lower_bound(3);
    while(it != mst.end()){
        cout<< *it << " ";
        ++it;
    }*/


    /*multiset<int> mst = {1, 2, 2, 3, 3, 5, 6, 7};
    auto lb = mst.lower_bound(3);
    auto ub = mst.upper_bound(3);
    while(lb != ub){
        cout<< *lb << " ";
        ++lb;
    }
    cout<<endl;*/


    /*vector<int> v = {2, 1, 3, 3, 2, 5, 6, 7};
    //ascending order
    sort(v.begin(), v.end(), less<int>());
    for(auto x: v){
        cout<< x << " ";
    }  cout<<endl;
    //Descending order
    sort(v.begin(), v.end(), greater<int>());
    for(auto x: v){
        cout<< x << " ";
    }  cout<<endl;*/


    /*vector<int> v = {2, 1, 3, 3, 2, 5, 6, 7};
    sort(v.begin(), v.end(), comp);
    for(auto x: v){
        cout<< x << " ";
    }  cout<<endl;*/


    //Comp cmp;
    //cout<<cmp(1,2)<<endl;

    multiset<int, Comp> mst = {1, 2, 2, 3, 3, 5, 6, 7};
    for(auto x : mst){
        cout << x << " ";
    }
    cout<<endl;












  return 0;
}
