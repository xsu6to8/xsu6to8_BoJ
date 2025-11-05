#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> a(n);
	int sum = 0;
	int minOdd = 1001;

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
		if (a[i] % 2 == 1) {
			minOdd = min(minOdd, a[i]);
		}
	}

	if (sum % 2 == 0) {
		cout << sum << '\n';
	} else {
		if (minOdd == 1001) cout << 0 << '\n';
		else cout << sum - minOdd << '\n';
	}

	return 0;
}
