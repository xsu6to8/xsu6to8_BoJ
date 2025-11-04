#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[1001][1001];
int dist[1001][1001];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

queue<pair<int, int>> q[10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		fill(dist[i], dist[i] + 1002, -1);

	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 2) {
				dist[i][j] = 0;
				q.push({ i,j });
			}
			if (arr[i][j] == 0)
				dist[i][j] = 0;

		}
	}

	while (!q.empty()) {
		auto [x, y] = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (arr[nx][ny] != 1 || dist[nx][ny] != -1)
				continue;

			dist[nx][ny] = dist[x][y] + 1;
			q.push({ nx,ny });
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << dist[i][j] << ' ';
		cout << '\n';
	}

}
