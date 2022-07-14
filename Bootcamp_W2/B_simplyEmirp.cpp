#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, n2;
    cin>>n;
    n2 = n;
    int res = 0;
    for(int i=2; i*i<=n2; ++i){
        if(n%i == 0){
            res = 1;//not prime
        }
    }

    if(res==0){
            res=3; //prime emirp
        int rem, rev_num=0;
        while(n2!=0){
            rem = n%10;
            rev_num = rev_num*10+rem;
            n2 = n2/10;
        }
        for(int i=2; i*i<=rev_num; ++i){
            if(rev_num%i == 0){
                res = 2; //prime not emirp
            }
        }
    }
    cout<<res<<endl;
    if(res==1){
        cout<< n <<" is not prime."<<endl;
    }
    if(res==2){
        cout<< n <<" is prime."<<endl;
    }
    if(res==3){
        cout<< n <<" is emirp."<<endl;
    }


  return 0;
}
