#include <bits/stdc++.h>
using namespace std;

int N,C;

int check(int mid,int stalls[])
{
	int cows=1,pos=stalls[0];
	for (int i=1; i<N; i++)
	{
		if (stalls[i]-pos>=mid)
		{
		    cout<< "i=" << i << "  stalls[i]-pos=" << stalls[i]-pos << " mid=" << mid <<endl;
			pos=stalls[i];
			cout<< "pos=" << pos <<endl;
			cows++;
			if (cows==C){
               cout<< "cows=" << cows <<endl;
               return 1;
			}
		}
	}
	return 0;
}

int binarySearch(int stalls[])
{
	int start=0,end=stalls[N-1],max=-1;
	while (end>start)
	{
	    cout<< "end=" << end << "  start=" << start <<endl;
		int mid=(start+end)/2;
        cout<< "mid=" << mid <<endl;
		if (check(mid,stalls)==1)
		{
			if (mid>max){
               max=mid;
               cout<< "max=" << max <<endl;
			}
			start=mid+1;
			cout<< "start=" <<start<<endl;
		}
		else{
           end=mid;
           cout<< "end=" << end <<endl;
		}
	}
	return max;
}

int main()
{
	int t;
	cin>>t;

	while (t--)
	{
		cin>>N>>C;

		int stalls[N];

		for (int i=0; i<N; i++)
			cin>>stalls[i];

		sort(stalls,stalls+N);

		int k=binarySearch(stalls);

		cout<<k;
	}
	return 0;
}
