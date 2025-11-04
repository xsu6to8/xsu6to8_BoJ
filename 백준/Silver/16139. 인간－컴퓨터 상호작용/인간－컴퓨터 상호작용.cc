#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int n = s.size();
	vector<vector<int>> sum(n, vector<int>(26, 0));
	sum[0][s[0] - 'a'] = 1;
	for (int i = 1; i < n; i++) {
		for (int c = 0; c < 26; c++)
			sum[i][c] = sum[i - 1][c];

		sum[i][s[i] - 'a'] += 1;
	}

	int q;
	cin >> q;
	while (q--) {
		char target;
		int l, r;
		cin >> target >> l >> r;

		if (l != 0)
			cout << sum[r][target - 'a'] - sum[l - 1][target - 'a'] << '\n';
		else
			cout << sum[r][target - 'a'] << '\n';
	}
}