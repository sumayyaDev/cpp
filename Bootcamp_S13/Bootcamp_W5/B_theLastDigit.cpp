#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t, a, b;
    cin>> t;
    while(t--){
        cin >> a >> b;
        int result = 1;
        if(a==0 && b==0){
            cout<< "1" <<endl;
        }
        else{
            while(b!=0){
            result *= a;
            result %= 10;
            b--;
        }
        cout<< result << endl;
        }
    }

   return 0;
}
