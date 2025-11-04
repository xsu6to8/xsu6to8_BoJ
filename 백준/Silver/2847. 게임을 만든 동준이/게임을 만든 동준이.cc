#include <bits/stdc++.h>
using namespace std;

int n;
int l[105];
int cnt = 0;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> l[i];

	for (int i = n; i > 1; i--)
	{
		if (l[i - 1] >= l[i]) {
			int gap = l[i - 1] - l[i] + 1;
			l[i - 1] -= gap;
			cnt += gap;
		}
	}
	cout << cnt;
}
