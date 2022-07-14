#include<bits/stdc++.h>
using namespace std;
long long con(long long m)
{
    long long ones=0;
    while(m)
        {

            ones+=m%2;
            m/=2;
        }
        return ones;
}
int main()
{
    long long m,a,b,t,l,i,sum;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l=s.length();
        sum=0;
        long deci=1;

        for(i=l-1;i>=0;i--)
        {
           sum+=(s[i]-'0')*deci;
           deci*=10;
        }

        a=con(sum);
        sum=0;
        long hexa=1;;
        for(i=l-1;i>=0;i--)
        {
           sum+=(s[i]-'0')*hexa;
           hexa*=16;
        }
        b=con(sum);
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
