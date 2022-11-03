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
        int n, r;
        cin>> n >> r;

        map<pair<int,int> , bool> visited;
        int id, code;
        int flag=1;
        for(int i=0; i<r; i++){
            cin>> id >> code;

            if(visited[{id,code}]==true)  flag=0;
            else visited[{id, code}]=true;
        }

        if(flag) cout<< "Scenario #" << cs++ << ": possible\n";
        else cout<< "Scenario #" << cs++ << ": impossible\n";
    }

    return 0;
}
