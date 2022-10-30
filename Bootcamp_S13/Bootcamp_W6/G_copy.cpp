#include<bits/stdc++.h>
using namespace std;

#define MAX 1000000

bool prime[MAX + 1];
int dPrime[MAX + 1];

int dSum(int N) {
	int T = 0;
	while (N) {
		T += (N % 10);
		N /= 10;
	}
	return T;
}

void seive() {
	long long i, j;
	for (i = 0; i <= MAX; i++) {
		prime[i]  = true;
		dPrime[i] = 0;
	}
	prime[0] = false;
	prime[1] = false;
	for (i = 2; i <= MAX; i++) {
		dPrime[i] = dPrime[i - 1];
		if (prime[i]) {
			if (prime[dSum(i)]) ++dPrime[i];
			for (j = i * i; j <= MAX; j += i)
				prime[j] = false;
		}
	}
}

int main(){
	//freopen("testI.txt", "r", stdin);
	//freopen("testO.txt", "w", stdout);
	seive();
	int N;
	int A, B;
	scanf("%d", &N);
	while (N--) {
		scanf("%d%d", &A, &B);
		printf("%d\n", dPrime[B] - dPrime[A - 1]);
	}
	return 0;
}
