#include<bits/stdc++.h>
using namespace std;

int points[500000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    int caseN=0;
    while(t--){
        int n, q, a, b;
        cin>> n >> q;
        for(int i=0; i<n; i++){
            cin >> points[i];
        }
        vector<int> v;
        while(q--){
            cin>> a >> b;
            int count=0;
            for(int i=0; i<n; i++){
               if(points[i]>=a && points[i]<=b){
                  count++;
               }

            }
            v.push_back(count);
        }
        cout<< "Case " << ++caseN << ":" <<endl;
        for(auto x : v){
           cout<< x << endl;
        }

    }

   return 0;
}
