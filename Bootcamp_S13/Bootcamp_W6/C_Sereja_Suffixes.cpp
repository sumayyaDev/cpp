#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>> n >> m;
    vector<int> elem(n+1);
    vector<int> no_dist_from(n+1, 0);
    set<int> dist_elem_set; //set doesn't contains repeated elements

    for(int i=1; i<=n; i++){
        cin>> elem[i];
    }

    for(int i=n; i>=1; i--){ //iterating from right(last)
        dist_elem_set.insert(elem[i]);
        no_dist_from[i] = dist_elem_set.size();
    }
    int l;
    while(m--){
       cin>> l;
       cout<< no_dist_from[l] <<endl;
    }

   return 0;
}

