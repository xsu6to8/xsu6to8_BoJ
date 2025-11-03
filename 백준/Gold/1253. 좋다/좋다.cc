#include <bits/stdc++.h>
using namespace std;

int n;
int a[2005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);

	int tot = 0;
	for (int curr = 0; curr < n; curr++)
	{
		int st = 0;
		int en = n - 1;

		while (st < en) {
			if (st == curr) {
				st++;
				continue;
			}
			if (en == curr) {
				en--;
				continue;
			}

			if (a[st] + a[en] == a[curr]) {
				tot++;
				break;
			}
			else if (a[st] + a[en] < a[curr])
				st++;
			else if (a[st] + a[en] > a[curr])
				en--;
		}
	}

	cout << tot;
}