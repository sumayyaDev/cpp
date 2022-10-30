#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
        cin>> n;
        int a, cnt1=0, cnt2=0;
        for(int i=0; i<n; i++){
            cin>> a;
            if(a%2 != i%2){
                if(i%2==0){
                   cnt1++;
                }
                else{
                   cnt2++;
                }
            }
        }

        if(cnt1!=cnt2){
           cout<< "-1" <<endl;
        }
        else{
          cout<< cnt1 << endl;
        }

}

int main(){
    int t; cin>> t;
    while(t--){
        solve();
    }

  return 0;
}
