#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1000005], b[1000005], c[2000005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];

	int a_idx = 0, b_idx = 0;
	for (int i = 0; i < n + m; i++)
	{
		if (a_idx != n && b_idx != m) {
			if (a[a_idx] < b[b_idx])
				c[i] = a[a_idx++];
			else
				c[i] = b[b_idx++];
		}
		else {
			if (a_idx == n)
				c[i] = b[b_idx++];
			else if (b_idx == m)
				c[i] = a[a_idx++];
		}
	}

	for (int i = 0; i < n + m; i++)
		cout << c[i] << ' ';

}
