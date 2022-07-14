#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin>>n;
    vector<int> prime;
    if(n>2){
       for(int i=2; i<n; i++){
            int res=1;
            for(int m=2; m*m<=i; m++){
                if(i%m == 0){
                    res=0;
                }
            }
            if(res == 1){
                    prime.push_back(i);
            }
    }

    bool flag = false;
    for(int j=0; j<prime.size()-1; j++){
        for(int k=j+1; k<prime.size(); k++){
            if(prime[j]+prime[k] == n){
                a=prime[j];
                b=prime[k];
                flag = true;
                break;
            }
        }
      }
      if(flag==true){
        cout<<a<<" "<<b<<endl;
      }else{
        cout<<"-1"<<endl;
      }

    }
    else{
        cout<<"-1"<<endl;
    }


  return 0;
}
