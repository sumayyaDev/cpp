#include <iostream>
using namespace std;
typedef long long ll;
const int maxn=1000011;
int a[maxn];//Store how many zeros are behind the factorial of this number
int b[maxn];//There are m number of 0s, and finally output
void init()
{
    int k=0;
    for(int i=5;i<maxn;i++)
    {
        if(i%5==0)
        {
            int t=i;
            while(t%5==0)
            {
                t/=5;
                k++;
            }
        }
        a[i]=k;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    init();
    int m,cnt=0;
    cin>>m;
    for(int i=1;i<maxn;i++)
    {
        if(a[i]==m)
            b[cnt++]=i;
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}

