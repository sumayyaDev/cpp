#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

//There are 11 primes whose square are less than 1000
//A number can be composed into the product of several prime numbers
//The smallest prime factor with the same color can be dyed in one color

int primes[15] = {2,3,5,7,11,13,17,19,23,29,31};
int ans[1010];
int a[1010];
int flag[15];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n; cin>> t;
    while(t--){
      cin>> n;
      memset(flag, 0, sizeof(flag));
      for(int i=1; i<=n; i++){
         cin>> a[i];
      }
      int color=0;
      for(int i=1; i<=n; i++){
          for(int j=0; j<11; j++){

             if(a[i]%primes[j]==0){ //check if it composite
                if(flag[j]){ //flag is anything other than 0, their gcd is the divisor which gcd>1 so we can color it same
                    ans[i]=flag[j];
                    //cout<< "1--> " << "ans[" << i << "]= " << ans[i] << "  flag[" << j << "]= " << flag[j] <<endl;
                }
                else { //flag[j]==0
                    flag[j]= ++color;
                    ans[i] = flag[j];
                    //cout<< "2--> " << "ans[" << i << "]= " << ans[i] << "   ]\ flag[" << j << "]= " << flag[j] <<endl;
                }
                break;
             }

          }
      }

      cout<< color << "\n";
      for(int i=1; i<=n; i++){
         if(i==n) cout<< ans[i] << '\n';
         else cout<< ans[i] << " ";
      }

    }
    return 0;
}
