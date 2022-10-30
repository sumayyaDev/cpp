#include<bits/stdc++.h>
#define N 1010
using namespace std;
int prime[N],cnt=1;
bool isprime[N];
void sieve_prime()
{
	memset(isprime,true,sizeof(isprime));
	isprime[0]=false;

    for(int i=2;i<=N;i++)
        for(int j=i+i;j<=N;j+=i)
            isprime[j]=false;

    for(int i=0;i<=N;i++)
        if(isprime[i])
            prime[cnt++]=i;
}
int main()
{
    sieve_prime();

    int n,c;
    while(cin>> n >> c)
    {
        int pos=0;
        for(int i=1;i<cnt;i++)//Finding the center
        {
            if(prime[i]<=n&&prime[i+1]>n)
            {
                pos=i;
                break;
            }
        }

        cout<< n << " " << c << ": ";

        if(pos<c&&pos%2==0)
            c=pos/2;
        else if(pos<c)
            c=(pos+1)/2;


        if(pos%2)
        {
            for(int i=(pos-(c*2-1))/2+1;i<=(pos-(c*2-1))/2+c*2-1;i++)
                cout<<prime[i]<<" ";
            cout<<endl<<endl;
        }
        else
        {
            for(int i=(pos-c*2)/2+1;i<=(pos-c*2)/2+c*2;i++)
                cout<<prime[i]<<" ";
            cout<<endl<<endl;
        }
    }

    return 0;
}
