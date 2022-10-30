#include<bits/stdc++.h>
#define N 1010
using namespace std;

vector<bool> isprime;
vector<int> primes;
int noPrims;
void sieve()
{
    isprime.assign(N+1, true);
    isprime[0]= false;
    for(int j=4; j<=N; j+=2){
        isprime[j]=false;
    }
    for(int i=3; (i*i)<=N; i+=2){
        if(!isprime[i]) continue;
        for(int j=(i*i); j<=N; j += (i+i)){
            isprime[j]=false;
        }
    }
    //storing primes
    primes.push_back(1);
    primes.push_back(2);
    noPrims=2;
    for(int i=3; i<=N; i+=2){
        if(isprime[i]){
           primes.push_back(i);
           noPrims++;
        }
    }

    for(auto x : primes){
        cout<< x <<"  ";
    }

}

int main(){
    int n, c;
    while(cin>> n >> c){
        int pos=0;
        //finding the center position
        for(int i=1; i<noPrims; i++){
            if(primes[i]<=n && primes[i+1]>n){
                pos=i;
                break;
            }
        }
        cout<< n << " " << c << ": ";

        if(pos<c && pos%2==0){ //even case
            c=pos/2;
        }
        else if(pos<c){  //odd case
            c=(pos+1)/2;
        }

        if(pos%2){  //even case
            for(int i=(pos-(c*2-1))/2+1;  i<=(pos-(c*2-1))/2+c*2-1;  i++)
                cout<< primes[i] << " ";
            cout<<endl;
        }
        else{  //odd case
             for(int i=(pos-c*2)/2+1;i<=(pos-c*2)/2+c*2;i++)
                cout<< primes[i] <<" ";
             cout<<endl;
        }

    }

  return 0;
}
