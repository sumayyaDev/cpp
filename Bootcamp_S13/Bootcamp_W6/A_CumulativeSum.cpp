#include<bits/stdc++.h>
using namespace std;

int const N = 1e5 + 5;
int arr[N];
int sum[N];

void summation()
{
    sum[0]=arr[0];
    for(int i=1; i<N; i++){
        //sum[i] += arr[i];
        sum[i] = arr[i] + sum[i-1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>> n;
    for(int k=0; k<n; k++){
        cin>> arr[k];
    }

    summation();
    int q; cin>> q; //no. of queries
    while(q--){
        int i, j;
        cin>> i >> j;
        if(i!=0){
            cout<< sum[j]-sum[i-1] <<endl;
        }
        else{
            cout<< sum[j] <<endl;
        }
    }



   return 0;
}
