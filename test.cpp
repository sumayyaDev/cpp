#include<bits/stdc++.h>
using namespace std;
long long con(long long m)
{
    long long a=0;
    cout<<"m="<<m<<endl;
    while(m)
        {

            a+=m%2;
            cout<<"xa="<<a<<endl;
            m/=2;
        }
        cout<<"a="<<a<<endl;
        return a;
}
int main()
{
    long long n,m,a,b,t,l,i,sum,c;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l=s.length();
        sum=0;
        c=1;

        for(i=l-1;i>=0;i--)
        {
           sum+=(s[i]-'0')*c;
           c*=10;
           cout<<"sum="<<sum<<endl;
        }

        a=con(sum);
        cout<<"a="<<a<<endl;
        sum=0;
        c=1;
        for(i=l-1;i>=0;i--)
        {
           sum+=(s[i]-'0')*c;
           c*=16;
           cout<<"sum="<<sum<<endl;
        }
        b=con(sum);
        cout<<"sum="<<sum<<endl;
        cout<<"ans: "<<a<<" "<<b<<endl;
    }
    return 0;
}
