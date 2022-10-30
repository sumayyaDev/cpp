#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t; int cs=1;

    while(t--){
        int n; cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++){
            int x; cin>> x;
            v.push_back(x);
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int v1 = v[i];
                int v2 = v[j];
                if(v1<0) v1=-v1;
                if(v2<0) v2=-v2;
                if(v1==v2){
                    v.erase(v.begin()+i);
                    n--;
                    i=i-1;
                    break;
                }
            }
        }
        int sum=0;
        for(auto a : v){
            sum += a;
        }
        cout<< "Case " << cs++ << ": " << sum <<endl;
    }

    return 0;
}
