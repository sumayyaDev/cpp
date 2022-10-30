#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char input[1000005];
    ll cs=1;
    while(cin>> input)
    {
        ll n;
        cin>>n;
        ll a, b;
        cout<< "Case " << cs++ << ":\n";
        for(ll i=1;i<=n;i++)
        {
            cin>> a >> b;
            ll max_elem=max(a,b);
            ll min_elem=min(a,b);
            ll get=0;
            for(ll j=min_elem+1; j<=max_elem; j++)
            {
                if(input[j]==input[j-1])
                {
                    continue;
                }
                else //not equal
                {
                    get=1;
                    break;
                }
            }
            if(get==1)
                cout<< "No\n";
            else
               cout<< "Yes\n";
        }
    }

    return 0;
}
