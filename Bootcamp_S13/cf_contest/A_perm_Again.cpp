#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int n, k;
    while(t--){
        cin>> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }
        int count=0;
        int min, temp;
        int flag=0;
        for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min]){
                min = j;
                flag=1;
            }
        }
        if(flag){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            count++;
        }

        if(i==k-1)
            break;
        }
        cout<< count <<endl;
    }

   return 0;
}

