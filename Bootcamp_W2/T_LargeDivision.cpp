#include<bits/stdc++.h>
const int maxn=1e5+5;
typedef long long ll;
using namespace std;
char str[205];
int main()
{
   int T;
   cin>>T;
   int b;
   int cnt=1;
   while(T--)
   {
       scanf("%s",str);
       scanf("%d",&b);
       if(b<0)
       b=-b;
       int len=strlen(str);
       ll ans=0;
       for(int t=0;t<len;t++)
       {
           if(str[t]>='0'&&str[t]<='9')
           {
               ans=((ans*10)+(str[t]-'0'))%b;
        }
        else
        {
            continue;
        }
    }
    printf("Case %d: ",cnt++);
    if(ans==0)
    {
            puts("divisible");
    }
    else
    {
        puts("not divisible");
    }
   }
   return 0;
}
