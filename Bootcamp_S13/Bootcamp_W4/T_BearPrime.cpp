#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const int MAX=1e7;
int cnt_occur[MAX+1]={0};
int F[MAX+1]={0};

vector<bool> isprime;
void sieve()
{
    isprime.assign(MAX+1, true);
    isprime[0]=isprime[1]=false;

    for(int i=2; i<=MAX; i++){
        if(!isprime[i]) continue;
        for(int j=2*i; j<=MAX; j+=i){
            isprime[j]=false;
        }
    }

}

void compute()
{
    for(int i=2; i<=MAX; i++){
        if(isprime[i]){
            for(int j=i; j<=MAX; j+=i){
                F[i] += cnt_occur[j]; //F[2]=how many 2's + how many 4's + 8's...
            }
        }
    }

    //prefix sum of F(P)
    for(int i=1; i<=MAX; i++){
        F[i] += F[i-1];
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int n; cin>> n;
    for(int i=0; i<n; i++){
        int x;
        cin>> x;
        cnt_occur[x]++;
    }

    compute();
    int m; cin>> m;
    while(m--){
        int l, r;
        cin>> l >> r;

        if(r>MAX) r=MAX;
        if(l>MAX) cout<< 0 <<endl;
        else{
            if(l<=0) cout<< F[r] <<endl;
            else cout<< F[r]-F[l-1] <<endl;
        }
    }


}
