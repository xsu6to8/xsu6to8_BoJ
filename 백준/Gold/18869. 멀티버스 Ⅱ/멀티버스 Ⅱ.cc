#include <bits/stdc++.h>
using namespace std;

int m, n;
int pla[105][10005];
int tmp[105][10005];
int uni[105][10005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> pla[i][j];
			tmp[i][j] = pla[i][j];
		}
	}

	for (int i = 0; i < m; i++)
		sort(tmp[i], tmp[i] + n);

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			uni[i][j] = lower_bound(tmp[i], tmp[i] + n, pla[i][j]) - tmp[i];

	int ans = 0;
	for (int i = 0; i < m; i++) {
		for (int j = i + 1; j < m; j++) {
			bool equal = true;
			for (int k = 0; k < n; k++) {
				if (uni[i][k] != uni[j][k]) {
					equal = false;
					break;
				}
			}
			if (equal)
				ans++;
		}
	}

	cout << ans;
}
