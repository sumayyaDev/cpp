#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

//calculating the count of div in n!
//4!=24= 2x2x2 x6
//4/2=2, count=2
//2/2=1, count=2+1= 3 no of 2's exist in 4!
int factorial_func(int n, int div)
{
    int countOf_div = 0;
    while(n>0){
        countOf_div += n/div;
        n /= div;
    }
    return countOf_div;
}
//calculate the no. of div in p
int func(int p, int div)
{
    int countOf_div = 0;
    while(p%div==0){
        countOf_div++;
        p /= div;
    }
    return countOf_div;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>> t;
    int cs=1;
    while(t--){
        int n, r, p, q, i, j ,k ,l, u, v, x, y, ans;
    cin>> n >> r >> p >> q;
    //nCr= n! / {r! (n-r)!}
    //f = n-r;
    // n!-> 2x5
    i = factorial_func(n, 2); //how many 2's multiples in n!
    j = factorial_func(n, 5); //how many 5's multiples in n!
    // r!-> 2x5
    k = factorial_func(r, 2); //how many 2's multiples in r!
    l = factorial_func(r, 5); //how many 5's multiples in r!
    // (n-r)!-> 2x5
    u = factorial_func(n-r, 2); //how many 2's multiples in r!
    v = factorial_func(n-r, 5); //how many 5's multiples in r!
    //for p^q, now lets count for p
    x = func(p, 2);
    y = func(p, 5);

    ans = min( i-k-u+x*q, j-l-v+y*q );
    cout<< "Case " << cs++ << ": " << ans << "\n";
    }

    return 0;
}
