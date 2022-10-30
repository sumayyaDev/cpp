#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, c;
int check(int mid, int stalls[])
{
    int cows=1;
    int pos=stalls[0];
    for(int i=1; i<n; i++){

        if(stalls[i]-pos>=mid){
            pos=stalls[i];
            cows++;
            if(cows==c)
                return 1;
        }
    }
    return 0;
}

int binarySearch(int stalls[])
{
    int left=0, right=stalls[n-1];
    int max_K=-1;

    while(left<right){
        int mid = (left+right)/2;

        if(check(mid, stalls)==1){
            if(mid>max_K)
                max_K = mid;
            left = mid+1; //largest distance
        }
        else{
            right=mid; //decrease the value of k
        }
    }
    return max_K;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        cin>> n >> c;
        int stalls[n];
        for(int i=0; i<n; i++){
            cin>> stalls[i];
        }
        sort(stalls, stalls+n);
        int k = binarySearch(stalls);
        cout<< k << "\n";

    }


   return 0;
}
