#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, m, n;
    cin>>t;

    for(int i=0; i<t; i++){
        cin>>m>>n;
        vector<int> vec;
        for(int j=m; j<=n; j++){
            int res=0;
            if(j==2 || j>2){
                for(int k=2; k*k<=j; k++){
                if(j%k==0){
                    res=1;

                }
            }
            if(res==0){
                vec.push_back(j);
             }
           }
        }
        for(int s=0; s<vec.size(); s++){
            cout<<vec[s]<<endl;
           }

           cout<<endl;
    }

  return 0;
}
