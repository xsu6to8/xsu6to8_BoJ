#include <bits/stdc++.h>

using namespace std;

int area[101][101];
bool visited[101][101];

int dist[101][101];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
			cin >> area[i][j];
	}
	
	//	islands indexing
	int idx = 1;
	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			if (area[i][j] && !visited[i][j]) {
				area[i][j] = idx;
				visited[i][j] = true;
				q.push({ i,j });

				while (!q.empty()) {
					auto [x, y] = q.front();
					q.pop();

					for (int k = 0; k < 4; k++)
					{
						int nx = x + dx[k];
						int ny = y + dy[k];

						if (nx < 0 || nx >= n || ny < 0 || ny >= n)
							continue;
						if (!(area[nx][ny]) || visited[nx][ny])
							continue;

						visited[nx][ny] = true;
						area[nx][ny] = idx;
						q.push({ nx,ny });
					}
				}
				idx++;
			}
		}
	}

	//	min dist
	for (int i = 0; i < n; i++)
		fill(dist[i], dist[i] + 101, -1);

	queue<pair<int, int>> n_q;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (area[i][j]) {
				n_q.push({ i,j });
				dist[i][j] = 0;
			}

	int ans = INT_MAX;
	while (!n_q.empty()) {
		auto [x, y] = n_q.front(); n_q.pop();

		for (int d = 0; d < 4; d++) {
			int nx = x + dx[d], ny = y + dy[d];
			if (nx < 0 || ny < 0 || nx >= n || ny >= n) 
				continue;
			// same island
			if (area[nx][ny] == area[x][y]) 
				continue;

			// other island
			if (area[nx][ny] != 0 && area[nx][ny] != area[x][y]) {
				ans = min(ans, dist[x][y] + dist[nx][ny]);
				continue;
			}

			if (area[nx][ny] == 0 && dist[nx][ny] == -1) {
				dist[nx][ny] = dist[x][y] + 1;
				area[nx][ny] = area[x][y];
				n_q.push({ nx, ny });
			}
		}
	}

	cout << ans;
}