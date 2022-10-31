#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
bool prim[1100000];
int sum[1100000];
int a,b,k;
void getprim()
{
	int i,j;
	for(i=2;i<=1000000;i++)
	{
		sum[i]=sum[i-1];
		                                        //if(i==2) cout<< "sum[2]=" << sum[2] << endl;
		if(prim[i])
		continue;
		sum[i]++;
		                                          //if(i==2) cout<< "sum[2]=" << sum[2] << endl;
		for(j=i+i;j<=1000000;j+=i)
		prim[j]=1;
	}
}
int judge(int mid)
{
	for(int i=a;i<=b-mid+1;i++)
	{
		if(sum[i+mid-1]-sum[i-1]<k)
		 return 0;
	}
	return 1;
}
int main()
{
	getprim();
	while(scanf("%d%d%d",&a,&b,&k)!=EOF)
	{
		if(sum[b]-sum[a-1]<k)
		{
			printf("-1\n");
			continue;
		}
		int l,r,mid,ans;
		l=1;
		r=b-a+1;
		while(l<=r)
		{
			mid=(l+r)/2;
			if(judge(mid))
			{
				ans=mid;
				r=mid-1;
			}
			else
			{
				l=mid+1;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
