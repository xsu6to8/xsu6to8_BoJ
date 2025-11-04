#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int n, m;
int arr[1002][1002];
int dist[1002][1002][2];  // [x][y][0] = 벽 안부숨, [x][y][1] = 벽 부숨

bool OOB(int x, int y) {
	return x < 0 || x >= n || y < 0 || y >= m;
}

int bfs() {
	memset(dist, -1, sizeof(dist));
	queue<tuple<int, int, int>> q; // {x, y, 벽부숨 여부}
	q.push({ 0, 0, 0 });
	dist[0][0][0] = 1;

	while (!q.empty()) {
		auto [x, y, broken] = q.front(); 
		q.pop();

		for (int dir = 0; dir < 4; ++dir) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (OOB(nx, ny)) 
				continue;

			if (arr[nx][ny] == 0 && dist[nx][ny][broken] == -1) {
				dist[nx][ny][broken] = dist[x][y][broken] + 1;
				q.push({ nx, ny, broken });
			}

			if (arr[nx][ny] == 1 && broken == 0 && dist[nx][ny][1] == -1) {
				dist[nx][ny][1] = dist[x][y][broken] + 1;
				q.push({ nx, ny, 1 });
			}
		}
	}

	int d1 = dist[n - 1][m - 1][0];
	int d2 = dist[n - 1][m - 1][1];

	if (d1 == -1 && d2 == -1) 
		return -1;
	else if (d1 == -1) 
		return d2;
	else if (d2 == -1) 
		return d1;
	else 
		return min(d1, d2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s_input;
		cin >> s_input;
		for (int j = 0; j < m; j++) {
			arr[i][j] = s_input[j] - '0';
		}
	}

	cout << bfs();
}
