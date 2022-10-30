#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin>> t;
    int cs=1;
    while(t--){
      int n;
      ll arr[10005];
      cin>> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];
      cin>> n;
      //n<=5, at that position whatever the input was given
      //n>5, summation of previous 6 elements
      for(int i=6; i<=n; i++){
        arr[i] = (arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6]) % 10000007;
      }
      cout<< "Case " << cs++ << ": " << arr[n]%10000007 <<endl;
    }

    return 0;
}

