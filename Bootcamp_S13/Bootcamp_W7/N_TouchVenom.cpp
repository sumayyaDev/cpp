#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const ll MAX=1e10;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int h, p, a;
    while(t--){
        cin>> h >> p >> a;
        int i=1, cnt=0;
        while(h>0){
            h -= i*p;
            cnt++;
            if(h<=0) break;
            else{
                h+=a;
                i++;
                cnt++;
            }
        }
        cout<< cnt << "\n";
    }


}
