#include<iostream>
using namespace std;

long long sumDivisors(long long n)
{
    long long sum = 0;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){

    int t;
     long long s, n;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        s = sumDivisors(n);
        cout<<s<<endl;
    }

   return 0;
}
