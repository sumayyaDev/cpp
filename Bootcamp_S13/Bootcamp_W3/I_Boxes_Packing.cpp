#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){

    int n; cin>>n; //n empty boxes
    vector<int> v;
    while(n--){
       int a; cin>>a;
       v.push_back(a);
    }
    sort(v.begin(), v.end());
     int si = v.size();
     for(int i=0; i<v.size(); i++){
        if(i==v.size()-1) break;
        if(v[i] < v[i+1]){

        si--;

        }
    }
    cout<< si <<endl;

  return 0;
}
