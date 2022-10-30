#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, x, a;
    cin>> n >> d >> x;
    int count=0;
    while(n--){
        cin>>a;
        int i=1;
        int temp=0;
        while(temp<d || temp==d){
            temp=(a*i)+1;
            i++;
            count++;
            //cout<<count<<endl;
        }
    }
    cout<< x+count <<endl;

   return 0;
}
