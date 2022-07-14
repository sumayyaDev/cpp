#include<stdio.h>
long long f(int n)
{
    long long v;
    if(n==0)
        return 1;
    printf("n=%d  n/2=%d\n", n, n/2);
    v=f(n/2);
    printf("v=%d\n", v);
    if(n%2==0)
        return v*v%1000000007;
    else
        return (v*v%1000000007*2)%1000000007;
}
int main()
{
    int t,n,i;
    long long ans;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        ans=(n*f(n-1))%1000000007;
        printf("Case #%d: %lld\n",i,ans);
    }
    return 0;
}
