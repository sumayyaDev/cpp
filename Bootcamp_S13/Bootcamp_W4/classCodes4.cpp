#include<bits/stdc++.h>
using namespace std;

vector<int> nod; //no. of divisors

/*void sieve_nod(int n)
{
    nod.assign(n+1, 0);
    for(int i=1; i<=n; ++i){
        for(int j=i; j<=n; j += i){
            //cout<<nod[j]<<endl;
            ++nod[j];
            //cout<<nod[j]<<" ";
        }
    }
    for(auto x : nod){
        cout<< x << " ";
    }
}*/

vector<int> sod; //sum of divisors
void sieve_sod(int n)
{
    sod.assign(n+1, 0);
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j += i){
            sod[j] += i;
        }
    }
    for(auto x : sod){
        cout<< x << " ";
    }
}

int main(){
    int n;
    cin>>n;
    //sieve_nod(n);
    sieve_sod(n);

  return 0;
}
