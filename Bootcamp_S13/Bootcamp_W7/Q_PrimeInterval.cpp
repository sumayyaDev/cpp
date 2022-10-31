#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int MAX=1e6+10;
int pref_sum_prime[MAX];
bool isprime[MAX];
int a, b, k;

void prefSum_sieve()
{
    for(int i=2; i<1e6+5; i++){
        isprime[i]=true;
    }

    for(int i=2; i<1e6+5; i++){
        pref_sum_prime[i] = pref_sum_prime[i-1];
        if(!isprime[i]) continue;

        pref_sum_prime[i]++;
        for(int j=i+i; j<=1e6+5; j+=i){
            isprime[j]=false; //setting non-prime=1
        }
    }
}

int isPossible(int mid)
{
    for(int i=a; i<=b-mid+1; i++){
        if(pref_sum_prime[i+mid-1]-pref_sum_prime[i-1] < k){
            return 0; //increase mid, so l=mid+1, as we need more no. of primes
        }
    }
    return 1; // dicrease mid, so r=mid-1, as we need minimum integer l to find k no. of primes
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    prefSum_sieve();

    cin>> a >> b >> k;
    if(pref_sum_prime[b] - pref_sum_prime[a-1] < k){
        cout<< "-1" << "\n";
        return 0;
    }
    int left=1, right=b-a+1, mid;
    int ans;
    while(left<=right){
        mid=(left+right)/2;

        if(isPossible(mid)){
            ans=mid; //as possible
            right=mid-1; //check for the minimum possibility
        }
        else{
            left=mid+1;
        }
    }

    cout<< ans << "\n";

    return 0;
}
