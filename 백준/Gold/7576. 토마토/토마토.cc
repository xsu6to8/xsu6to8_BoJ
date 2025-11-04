#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int n, m; // n: 행, m: 열

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n;

	queue<pair<int, int>> q;
	vector<vector<int>> tomato(n, vector<int>(m));
	vector<vector<int>> dist(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tomato[i][j];
			if (tomato[i][j] == 1) 
				q.push({ i, j });
			
			if (tomato[i][j] == 0)
				dist[i][j] = -1;
		}
	}

	while (!q.empty()) {
		pair<int, int> curr = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = curr.X + dx[i];
			int ny = curr.Y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (tomato[nx][ny] == -1 || dist[nx][ny] != -1)
				continue;

			dist[nx][ny] = dist[curr.X][curr.Y] + 1;

			q.push({ nx, ny });
		}
	}

	int max_day = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (dist[i][j] == -1) {
				cout << -1;
				return 0;
			}
			else {
				max_day = max(max_day, dist[i][j]);
			}
		}
	}
	cout << max_day;

	
}