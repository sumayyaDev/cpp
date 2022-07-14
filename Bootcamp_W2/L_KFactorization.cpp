#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[N];
    int c=0;
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            n/=i;
            arr[c++]=i;
        }
    }
    if(c<k)cout<<-1<<endl;
    else
    {
        for(int i=0;i<k-1;i++)
        cout<<arr[i]<<' ';
        int sum=1;
        for(int i=k-1;i<c;i++)
        sum*=arr[i];
        cout<<sum<<endl;
    }
    return 0;
}
