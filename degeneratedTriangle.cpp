#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long arr[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    sort(arr+1,arr+1+n);
    int flag = 0;
    for(int i=2;i<=n-1;i++){
        if(arr[i]+arr[i-1]>arr[i+1])
            flag = 1;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
