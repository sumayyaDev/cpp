#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int points[MAX+5];
int main(){
    int t; cin>>t;
    int cs=0;
    while(t--){
        int n, q;
        cin>> n >> q;
        for(int i=0; i<n; i++){
            cin>> points[i];
        }
        cout<< "Case " << ++cs << ":" <<endl;
        while(q--){
            int a, b;
            cin>> a >> b;
            int ub = upper_bound(points, points+n, b) - points;
            int lb = lower_bound(points, points+n, a) - points;
            cout<< ub-lb << endl;
        }
    }

   return 0;
}
