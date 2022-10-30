#include<bits/stdc++.h>
using namespace std;

#define N 1000000
typedef long long ll;

bool isprime[N+1];
int digit_prime[N+1];

int digit_sum(int num)
{
    int sum_last_dig=0;
    while(num){
        sum_last_dig += (num%10);
        num /= 10;
    }
    return sum_last_dig;
}

void sieve()
{
    ll i, j;
    for(i=0; i<=N; i++){
        isprime[i]=true;
        digit_prime[i]=0;
    }
    isprime[0]=false;   isprime[1]=false;

    for(i=2; i<=N; i++){
            digit_prime[i] = digit_prime[i-1];
        if(isprime[i]){
                if(isprime[digit_sum(i)]) {
                    ++digit_prime[i]; //prefix_sum of occurrence of digit primes
                }
            for(j=i*i; j<=N; j +=i){
                isprime[j]=false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int n, a, b;
    scanf("%d", &n);
    while(n--){
       scanf("%d%d", &a, &b);
       printf("%d\n", digit_prime[b]-digit_prime[a-1]);

    }

   return 0;
}
