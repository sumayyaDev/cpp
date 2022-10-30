#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e9+9;
const ll MAX2 = 1e18+10;

void solve()
{
    int n, t, c;
    cin>> n >> t >> c;
    int crime;
    vector<int> v;

    v.push_back(-1); //to subtract from 1st index
    for(int i=0; i<n; i++){
        cin>> crime;
        if(crime>t){
            v.push_back(i); //storing the index where crime is greater than t
        }
    }
    v.push_back(n); //to subtract with last index
    // v = {-1, 3, 8, 11};

    int ans=0;
    for(int i=1; i<v.size(); i++){
        int diff = v[i] - v[i-1]-1; //v[i-1] is also counted but it cannot be so subtract 1
        ans += max(diff-c+1, 0); //previous 1 index can be used because of being contiguous, so add 1
    }
    cout<< ans <<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    solve();

   return 0;
}
