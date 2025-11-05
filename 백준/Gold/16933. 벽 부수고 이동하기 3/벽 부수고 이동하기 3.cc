#include <bits/stdc++.h>
using namespace std;

int n, m, k;
bool isDay = true;

int arr[1001][1001];
bool visited[1001][1001][11][2];	//	{Last Index} 0 : Day & 1 : night

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

	queue<tuple<int, int, int, int, int>> q;
	//	{2: arr} {1 : wall} {1 : day} {1 : time}
	visited[0][0][0][1] = true;
	q.push({ 0,0,0,1,1 });

	while (!q.empty()) {
		auto [x, y, wall, day, time] = q.front();
		q.pop();

		//	가장 빠른 도착
		if (x == n - 1 && y == m - 1) {
			cout << time;
			return 0;
		}

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;

			//	빈 칸 이동
			if (arr[nx][ny] == 0 && !visited[nx][ny][wall][!day]) {
				visited[nx][ny][wall][!day] = true;
				q.push({ nx, ny, wall, !day, time + 1 });
			}

			//	벽 부수기
			if (arr[nx][ny] == 1 && wall < k && day && !visited[nx][ny][wall + 1][!day]) {
				// 낮일 때만 벽을 부술 수 있음
				visited[nx][ny][wall + 1][!day] = true;
				q.push({ nx, ny, wall + 1, !day, time + 1 });
			}
		}

		// 가만히 있기
		if (!visited[x][y][wall][!day]) {
			visited[x][y][wall][!day] = true;
			q.push({ x, y, wall, !day, time + 1 });
		}
	}

	cout << -1;
}
