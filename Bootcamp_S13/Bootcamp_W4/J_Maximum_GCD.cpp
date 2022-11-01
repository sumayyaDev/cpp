#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const int MAX=1e7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        stringstream ss(str);

        int num;
        vector<int> v;
        while(ss>>num){
            v.push_back(num);
        }
        int max_gcd=0;
        for(int i=0; i<v.size(); i++){
            for(int j=i+1; j<v.size(); j++){
                max_gcd = max(max_gcd, __gcd(v[i], v[j]));
            }
        }

        cout<< max_gcd <<"\n";
    }


    return 0;
}
