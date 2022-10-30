#include<bits/stdc++.h>
using namespace std;

void printSubarray(int arr[], int n, int k)
{
    int max;
    for(int i=0; i<=n-k; i++){
        max = arr[i];
        for(int j=1; j<k; j++){

            if(arr[i+j] > max){
                    max = arr[i+j];
            }
        }
        cout<< max << " ";
    }
}


int main(){

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k; cin>>k;

    printSubarray(arr, n, k);

  return 0;
}
