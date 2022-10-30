#include<bits/stdc++.h>
using namespace std;

int Find_first_pos(int a[], int x)
{
    int n = a.size();
    int first_pos = -1;
    int low=0;
    int high=n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(a[mid] >= x){
            first_pos = mid;
            high = mid - 1;
        }
        else{ //a[mid] < x
            low = mid + 1;
        }
    }
    return first_pos;
}

vector<int> searchRange(int a[], int x)
{


    int first = Find_first_pos(a, x);
    int last = Find_first_pos(a, x+1) - 1;
    if(first<=last){
        return {first, last};
    }
    return {-1, -1};
}

int main(){
    int n, x;
    cin>> n >> x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    vector<int> ans;
    ans = searchRange(a, x);
    cout<< ans <<endl;

   return 0;
}
