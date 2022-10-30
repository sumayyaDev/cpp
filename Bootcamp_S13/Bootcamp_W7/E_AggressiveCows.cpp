#include<bits/stdc++.h>
using namespace std;

int n, c;

int check(int mid, int stalls[])
{
    int cows=1, pos=stalls[0];
    for(int i=1; i<n; i++){
        if(stalls[i]-pos >= mid){
            pos=stalls[i];
            cows++;
            if(cows==c) return 1;
        }
    }
    return 0;
}

int binarySearch(int stalls[])
{
   int left=0, right=n-1, max=-1;
   while(right>=left){
    int mid = (left+right)/2;
    if(check(mid, stalls)==1){
        if(mid>max) max=mid;

        left = mid+1;
    }
    else  right=mid-1;
   }
   return max;
}

int main(){
    int t; cin>>t;
    while(t--){
        cin>> n >> c;
        int stalls[n];
        for(int i=0; i<n; i++){
            cin>> stalls[i];
        }
        sort(stalls, stalls+n);

        int k = binarySearch(stalls);
        cout<< k <<endl;
    }

   return 0;
}
