
#include<bits/stdc++.h>

#define x first
#define y second

using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
const int N = 100000;
const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;}
int lowbit(int x) {
    return x & -x;}

int n;
int p[N];

int main()
{

	cin >> n;
	for(int i = 0; i < n; i ++ )
	{

		bool flag = false;
		for(int j = 0; j < 3; j ++ ) cin >> p[j];
		for(int j = 0; j < 2; j ++ )
		{

			for(int l = j + 1; l < 3; l ++ )
			{

				for(int q = 0; q < 3; q ++ )
				{

					if(max(p[j], p[l]) < p[q])
					{

						flag = true;
						break;
					}
				}
				if(flag) break;
			}
		}
		if(flag) cout << "No" << endl;
		else
		{

			cout << "Yes" << endl;
			cout << min(p[0], p[1]) << ' ' << min(p[1], p[2]) << ' ' << min(p[0], p[2]) << endl;
		}
	}
	return 0;
}

