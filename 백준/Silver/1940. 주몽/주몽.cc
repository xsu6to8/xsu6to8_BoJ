#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[15005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);

	int st = 0;
	int en = n - 1;
	int cnt = 0;
	while (st < en) {
		int curr = a[st] + a[en];

		if (curr == m) {
			cnt++;
			st++;
			en--;
		}
		else if (curr < m)
			st++;
		else if (curr > m)
			en--;
	}

	cout << cnt;
}