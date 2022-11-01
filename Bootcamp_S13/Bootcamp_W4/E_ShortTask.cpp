#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int MAX=1e7;
int SOD[MAX+10];
int ans[MAX+10];

void sieveSOD()
{
    for(int i=1; i<=MAX; i++){
        for(int j=i; j<=MAX; j+=i){
            SOD[j] += i;
        }
    }

    memset(ans, -1, sizeof(ans));
    for(int i=1; i<=MAX; i++){

         if(SOD[i]>MAX) continue;
        else if(ans[SOD[i]] == -1){ //ans[sumOfDiv]
            ans[SOD[i]] = i; // ans[sumOfDiv]=num
         }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieveSOD();

    int t; cin>> t;
    while(t--){
        int c; cin>> c; //c=SOD, ans[c]=num
        cout<< ans[c] << "\n";
    }


}
