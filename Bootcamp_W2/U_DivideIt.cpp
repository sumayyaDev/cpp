#include <bits/stdc++.h>

using namespace std;

int main() {

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		long long n;
		cin >> n;
		int count2 = 0, count3 = 0, count5 = 0;
		while (n % 2 == 0) {
			n /= 2;
			++count2;
		}
		while (n % 3 == 0) {
			n /= 3;
			++count3;
		}
		while (n % 5 == 0) {
			n /= 5;
			++count5;
		}
		if (n != 1) {
			cout << -1 << endl;
		} else {
			cout << count2 + count3 * 2 + count5 * 3 << endl;
		}
	}

	return 0;
}
