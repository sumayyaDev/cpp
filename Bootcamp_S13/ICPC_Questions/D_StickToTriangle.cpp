#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>> t;
    while(t--){
        int n;
        cin>> n;
        int l=n/2;
        int s=n/3;
        int mid=n-(l+s);
        int count=0;
        while(l+s>=mid && (l+s+mid==n)){
            count++;
            l=l-1;
            s=s+1;
        }

        l=n/2;
        s=n/3;
        mid=n-(l+s);
        while(l+s>=mid && (l+s+mid==n)){
            l=l+1;
            s=s-1;
            if(l+s>=mid) count++;
        }

        l=n/2;
        s=n/3;
        mid=n-(l+s);
        while(l+s>=mid && (l+s+mid==n)){
            mid=mid-1;
            s=s+1;
            if(l+s>=mid) count++;
        }

        l=n/2;
        s=n/3;
        mid=n-(l+s);
        while(l+s>=mid && (l+s+mid==n)){
            mid=mid+1;
            s=s+1;
            l=l-2;
            if(l+s>=mid) count++;
        }


    }

  return 0;
}
