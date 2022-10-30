#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    while(t--){
        int n; cin>> n;
        int arr[n+1];
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }
        //let's just check if the sum of 2 smallest side is greater than the largest side or not
        if(arr[0]+arr[1]>arr[n-1]){ //triangle is okay
            cout<< "-1\n";
        }
        else{
            cout<< "1 2 " << n << "\n";
        }

        /*int flag=0;
        //int a1, a2, a3;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(arr[i]+arr[j]<arr[k]){
                        cout<< i+1 << " " << j+1 << " " << k+1<<"\n";
                        flag=1;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(!flag) cout<< "-1\n"; //if no impossible case is found*/
    }

   return 0;
}
