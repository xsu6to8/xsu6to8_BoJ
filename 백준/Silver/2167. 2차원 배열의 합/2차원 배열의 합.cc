#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> arr(n + 1, vector<int>(m + 1, 0));
	vector<vector<int>> psum(n + 1, vector<int>(m + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			psum[i][j] = psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1] + arr[i][j];
		}
	}

	int k;
	cin >> k;
	while (k--) {
		int i, j, x, y;
		cin >> i >> j >> x >> y;

		int sum = psum[x][y] - psum[i - 1][y] - psum[x][j - 1] + psum[i - 1][j - 1];
		cout << sum << '\n';
	}

	return 0;
}
// 누적 합 방식