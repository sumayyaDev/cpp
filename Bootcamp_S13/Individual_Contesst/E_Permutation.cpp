#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<n<<" "; //base case
        for(int i=0; i<n-1; i++){
            cout<<i+1<<" ";  //surely here i=0 but i+1 not, so the index won't match with number
        }
        cout<<endl;
    }

  return 0;
}
