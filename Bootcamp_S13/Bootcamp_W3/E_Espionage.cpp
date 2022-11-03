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
    int cs=1;
    while(t--){
        int n, r; //n->persons, r->relations
        cin>> n >> r;
        //wipe out duplicates values and sort
        set<int> spy;
        set<int> civilian;
        int s, c;
        for(int i=0; i<r; i++){
            cin>> s >> c;
            spy.insert(s);
            civilian.insert(c);
        }
        //Now check both set have any existence of same element or not
        int flag=0;
        for(int i=0; i<n; i++){
            if(spy.count(i)>0 && civilian.count(i)>0){
                flag=1;
                break;
            }
        }

        if(flag){
            cout<< "Scenario #" << cs++ << ": spied\n";
        }
        else{
            cout<< "Scenario #" << cs++ << ": spying\n";
        }

    }

    return 0;
}
