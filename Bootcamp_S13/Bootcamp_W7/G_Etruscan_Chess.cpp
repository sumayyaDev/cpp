#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 500000
ll arr[MAX];
ll findingIndx(ll n)
{
    arr[0]=1;
    ll curr=arr[0];
    if(curr==n)  return 1;
    for(ll i=1; i<MAX; i++){
       arr[i]= i+1;
       curr += arr[i];
       if(curr==n){
         return i+1;
       }
       else if(curr<n){
          continue;
       }
       else if(curr>n){
           return i;
       }
    }
    return -1;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
    ll n; //no. of warriors
    cin>> n;
    cout << findingIndx(n) <<endl;
   }
   return 0;
}
