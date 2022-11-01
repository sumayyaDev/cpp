#include<bits/stdc++.h>
using namespace std;

const int MAX=1e7;
bool isprime[MAX+1]={true};
int count_num[MAX+1]={0};
int F[MAX+1] ={0};
void sieve()
{
    for(int i=2; i<=MAX; i++){
        isprime[i]=true;
    }
    isprime[0]=isprime[1]=false;
    for(int i=2; i<=MAX; i++){
        if(isprime[i]){
            for(int j=2*i; j<=MAX; j+=i){
                isprime[j]=false;
            }
        }
    }

}

void compute()
{
    for(int i=2; i<=MAX; i++){
        if(isprime[i]){
            for(int j=i; j<=MAX; j+=i){
                F[i] += count_num[j]; //F[2]=no of(2, 4, 6, 8, 10, 12....) in the array
            }
        }
    }

    //prefix sum of f(p)
    for(int i=1; i<=MAX; i++){
        F[i] += F[i-1];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int n; cin>> n;
    for(int i=0; i<n; i++){
        int x; cin>> x;
        count_num[x]++;
    }

    compute();
    int m; cin>> m;
    for(int i=0; i<m; i++){
        int l, r;
        cin>> l >> r;
        if(r>MAX) r=MAX;
        if(l>MAX) cout<< 0 <<endl;
        else{
            if(l<=0) cout<< F[r] <<endl;
            else{
                cout<< F[r]-F[l-1] <<endl;
            }
        }

    }

    return 0;
}


