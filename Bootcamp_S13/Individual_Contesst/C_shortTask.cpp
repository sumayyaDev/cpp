#include<bits/stdc++.h>
using namespace std;

void sumOfDiv(int c)
{
    int n=1;
    int sum = 1;
    if(c==1) n=1;
    else{
        while(sum!=c && (n<c || n==c)){
            n++;
            for(int i=2; (i*i)<=n; i++){
                if(n%i==0){
                   if(i==(n/i)) sum += i;
                   else sum += (i + n/i);
                }
             }
             sum += n;
        } //while end here
    }
    if(sum==c || c==1) cout<< n <<endl;
    else cout<< "-1" <<endl;

}


int main(){

    int t, c; cin>>t;
    while(t--){
        cin>>c;
        sumOfDiv(c);
    }

   return 0;
}
