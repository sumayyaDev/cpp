#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

#define N 100010
int a[N], store_k[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int cs=1;
    while(t--){
        int n; cin>> n;
        cin>> a[0];
        store_k[0]=a[0];
        int max_K = store_k[0];
        for(int i=1; i<n; i++){
            cin>> a[i];
            store_k[i]=a[i]-a[i-1];
            max_K = max(max_K, store_k[i]);
        }

        int temp_mx_k = max_K;

        for(int i=1; i<n; i++){
            if(temp_mx_k==store_k[i]) temp_mx_k--;
            else if(temp_mx_k<store_k[i]){
                max_K++;
                //break;
            }

        }

        cout<< "Case " << cs++ << ": " << max_K << "\n";
    }

    return 0;
}
