#include <bits/stdc++.h>
using namespace std;

int n, c;
int x[200005];

bool sol(int len) {
	int idx = 0;
	int cnt = 0;

	while (idx != n) {
		idx = lower_bound(x + idx, x + n, x[idx] + len) - x;
		cnt++;
	}
	return cnt >= c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> c;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	sort(x, x + n);

	if (n == 2) {
		cout << x[n - 1] - x[0];
		return 0;
	}

	int st = 1;
	int en = 1000000000;
	int mid;
	while (st < en) {
		mid = (st + en + 1) / 2;
		if (sol(mid))
			st = mid;
		else
			en = mid - 1;
	}

	cout << st;
}