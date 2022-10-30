#include<bits/stdc++.h>
typedef long long int64;
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;

    return gcd(b, a%b);
}

int main(){

    int t; cin>>t;
    while(t--){

        string str;
        getline(cin, str);
        int64 temp=0;
        int64 len=str.length();
        int64 i=0;
        int64 num[50]={0};
        while(i<len){
            if(isdigit(str[i])){
                temp= temp*10 + (int)(str[i]-'0');
            }
            else{
                if(temp>0){
                    num[n++]=temp;
                    temp=0;
                }
            }
            i++;
        }

        if()
    }

  return 0;
}
