#include<bits/stdc++.h>
using namespace std;

//prime factorization
//Find the prime factors of n
/*vector<int> prime_factors(int n)
{
    vector<int> result;
    for(int p=2; p<=n; p++){
       while(n%p == 0){
        n /= p;
        result.push_back(p);
       }
    }
    return result;
}*/

//prime factorization-->better time complexity
vector<int> prime_factors(int  n)
{
    vector<int> result;
    for(int p=2; p*p<=n; p++){
        while(n%p == 0){
            n /= p;
            result.push_back(p);
        }
    }
    if(n>1){
        result.push_back(n);
    }
    return result;
}

vector<int> primes; //primes up to sqrt(n_max)
vector<bool> isprime;
const int n_max=(int)1e8;
void sieve()
{
    int sqrtn = sqrt(n_max)+10;
    isprime.assign(sqrtn, true);
    isprime[0]=isprime[1]=false;
    for(int i=4; i<=sqrtn; i+=2){
        isprime[i]=false;
    }
    for(int i=3; i<=sqrtn; i+=2){
        if(isprime[i]){
            for(int j=i*i; j<=sqrtn; j+=i){
                isprime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3; i<=sqrtn; i+=2){
            if(isprime[i])
        primes.push_back(i);
    }
}

//Find prime factors-->better version
vector<int> prime_fact_better(int n)
{
    vector<int> result;
    for(int p : primes){
        if(p*p > n) break;
        while(n%p == 0){
            n /= p;
            result.push_back(p);
        }
    }
    if(n>1) result.push_back(n);
    return result;
}

// O(sqrt(n)) / log(n) [because O(log(sqrt(n))) ~ O(log(n))]
/*vector<pair<int, int>> prime_fact_pairs(int n)
{
    vector<pair<int, int>> result;
    for(int p : primes){
        if(p*p > n)  break;
        if(n%p) continue;
        int exponent = 0;
        while(n%p == 0){
            n /= p;
            ++exponent;
        }
        result.push_back({p, exponent});
    }
    if(n>1){
        result.push_back({n, 1});
    }
    return result;
}*/

// 8! = 1*2*3*4*5*6*7*8
// 2 * 4 * 6 * 8
// prime factors: 2, 3, 5
// how many 2's? (8/2) + (8/4) + (8/8) = 4+2+1 = 7

vector<pair<int, int>> prime_factors_factorial(int n)
{
    vector<pair<int, int>> result;
    for(int p : primes){
        if(p>n) break;

        int ppower = p; //prime power
        int exponent = 0;
        while(ppower <= n){
            exponent += (n/ppower);
            ppower *= p;
        }
        result.push_back({p, exponent});
    }
    return result;
}

// 8! = 1*2*3*4*5*6*7*8
// 2 * 4 * 6 * 8
// prime factors: 2, 3, 5
// how many 2's? (8/2) + (8/4) + (8/8) = 4+2+1 = 7
// how many 2's? (8/2) = 4+(4/2) = 4+2+(2/2) = 4+2+1-->power isn't increased but n is decreasing
// To deal with overflow we are gonna build it this way
vector<pair<int, int>> prime_factorial_Noverflow(int n)
{
    vector<pair<int, int>> result;
    for(int p : primes){
        if(p>n) break;

        int n_temp = n;
        int exponent = 0;
        while(n_temp/p){
            exponent += (n_temp/p);
            n_temp /= p;
        }
        result.push_back({p, exponent});
    }
    return result;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    /*for(int p : prime_factors(2520)){
        cout<< p << " ";
    }*/
    /*for(int p : prime_fact_better(2520)){
        cout<< p << " ";
    }*/
    /*for(auto p : prime_fact_pairs(2520)){
        cout<< p.first << "^" << p.second << " ";
    }*/
    /*for(auto p : prime_factors_factorial(8)){
        cout<< p.first << "^" << p.second << " ";
    }*/
    for(auto p : prime_factorial_Noverflow(195)){
        cout<< p.first << "^" << p.second << " ";
    }

   return 0;
}




