#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
int a[10005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int sum = 0;
	int cnt = 0;
	int l = 0, r = 0;
	for (int r = 0; r < n; r++) {
		sum += a[r];

		while (sum > m) {
			sum -= a[l];
			l++;
		}
		if (sum == m)
			cnt++;
	}

	cout << cnt;
}
