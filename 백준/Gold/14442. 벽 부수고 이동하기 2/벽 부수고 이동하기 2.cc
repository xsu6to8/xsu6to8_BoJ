#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int arr[1001][1001];
int dist[1001][1001][11];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		string inp;
		cin >> inp;
		for (int j = 0; j < m; j++)
			arr[i][j] = inp[j] - '0';
	}

	queue<tuple<int, int, int>> q;
	dist[0][0][0] = 1;
	q.push({ 0, 0, 0 });

	while (!q.empty()) {
		auto [x, y, wall] = q.front();
		q.pop();

		if (x == n - 1 && y == m - 1) {
			cout << dist[x][y][wall];
			return 0;
		}

		// 벽 부수기 X
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (arr[nx][ny] == 1)
				continue;
			if (dist[nx][ny][wall])
				continue;

			dist[nx][ny][wall] = dist[x][y][wall] + 1;
			q.push({ nx, ny, wall });
		}

		if (wall < k) {
			for (int i = 0; i < 4; i++)
			{
				int nx = x + dx[i];
				int ny = y + dy[i];

				if (nx < 0 || nx >= n || ny < 0 || ny >= m)
					continue;
				if (arr[nx][ny] == 0)
					continue;
				if (dist[nx][ny][wall + 1])
					continue;

				dist[nx][ny][wall + 1] = dist[x][y][wall] + 1;
				q.push({ nx, ny, wall + 1 });
			}
		}
	}

	cout << -1;
}
