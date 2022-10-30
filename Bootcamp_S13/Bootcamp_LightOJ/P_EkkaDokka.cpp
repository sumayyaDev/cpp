#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
      ll w;
      cin>> w;
      ll n, m; //n->odd, m->even
      if(w%2==0){
        n=w/2;
        m=2;
        while(n%2==0){
            n /= 2;
            m *= 2;
        }
        cout<< "Case " << cs++ << ": " << n << " " << m <<endl;
      }
      else{ //odd*even!=odd-->Impossible
        cout<< "Case " << cs++ << ": Impossible" <<endl;
      }
    }

   return 0;
}
