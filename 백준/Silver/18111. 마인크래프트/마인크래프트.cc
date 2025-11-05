#include <bits/stdc++.h>
using namespace std;

int n, m, b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m >> b;

	vector<vector<int>> field(n, vector<int>(m));
	int minHeight = 256, maxHeight = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> field[i][j];
			minHeight = min(minHeight, field[i][j]);
			maxHeight = max(maxHeight, field[i][j]);
		}
	}

	int minTime = INT_MAX;
	int bestHeight = 0;

	for (int targetHeight = minHeight; targetHeight <= maxHeight; targetHeight++) {
		int removeBlocks = 0;
		int addBlocks = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (field[i][j] > targetHeight)
					removeBlocks += field[i][j] - targetHeight;

				else if (field[i][j] < targetHeight)
					addBlocks += targetHeight - field[i][j];
			}
		}

		if (removeBlocks + b >= addBlocks) {
			int totalTime = removeBlocks * 2 + addBlocks * 1;

			if (totalTime < minTime || (totalTime == minTime && targetHeight > bestHeight)) {
				minTime = totalTime;
				bestHeight = targetHeight;
			}
		}
	}

	cout << minTime << " " << bestHeight;
}
