#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int m, n, k;

int bfs(pair<int, int> start, vector<vector<int>>& arr, vector<vector<bool>>& visited) {
	vector<pair<int, int>> move = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
	queue<pair<int, int>> q;
	q.push(start);
	visited[start.first][start.second] = true;
	int area = 1;

	while (!q.empty()) {
		pair<int, int> curr = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = curr.first + move[i].first;
			int ny = curr.second + move[i].second;

			if ((0 <= nx && nx < m) && (0 <= ny && ny < n)) {
				if (!visited[nx][ny] && arr[nx][ny] == 0) {
					visited[nx][ny] = true;
					q.push({ nx, ny });
					area++;
				}
			}
		}
	}
	return area;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> m >> n >> k;
	vector<vector<int>> arr(m, vector<int>(n, 0));

	while (k--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int y = y1; y < y2; y++) {
			for (int x = x1; x < x2; x++)
				arr[y][x] = 1; 
		}
	}

	vector<vector<bool>> visited(m, vector<bool>(n, false));
	vector<int> areas;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 0 && !visited[i][j]) {
				int area = bfs({ i, j }, arr, visited);
				areas.push_back(area);
			}
		}
	}

	sort(areas.begin(), areas.end());

	cout << areas.size() << endl;

	for (int i = 0; i < areas.size(); i++) {
		cout << areas[i];
		if (i < areas.size() - 1) {
			cout << " ";
		}
	}
	cout << endl;

	return 0;
}