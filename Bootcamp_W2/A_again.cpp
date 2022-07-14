#include<bits/stdc++.h>
using namespace std;

int divSum(int num)
{

    int result = 0;
    if(num == 1)
      return result=1;

    for (int i=2; i<=sqrt(num); i++)
    {
        if (num%i==0)
        {
            if (i==(num/i))
                result += i;
            else
                result += (i + num/i);
        }
    }

    return (result + 1);
}

int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; t++){
        int num;
        cin>>num;
        cout << divSum(num)<<endl;
    }

    return 0;
}
