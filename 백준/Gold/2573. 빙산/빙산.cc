#include <bits/stdc++.h>
using namespace std;

int n, m;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int arr[302][302];
int dist[302][302];

int BFS() {
	for (int i = 0; i < 302; i++)
		fill(dist[i], dist[i] + 301, -1);

	queue<pair<int, int>> q;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			if (arr[i][j] != 0 && dist[i][j] == -1) {
				dist[i][j] = 1;
				q.push({ i,j });

				cnt++;

				while (!q.empty()) {
					auto [x, y] = q.front();
					q.pop();

					for (int k = 0; k < 4; k++)
					{
						int nx = x + dx[k];
						int ny = y + dy[k];

						if (nx < 0 || nx >= n || ny < 0 || ny >= m)
							continue;
						if (arr[nx][ny] == 0 || dist[nx][ny] != -1)
							continue;

						dist[nx][ny] = 1;
						q.push({ nx, ny });
					}
				}
			}
		}
	}

	return cnt;
}

void melt() {
	int temp[302][302] = { 0 };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] > 0) {
				int water = 0;
				for (int k = 0; k < 4; k++) {
					int nx = i + dx[k];
					int ny = j + dy[k];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) 
						continue;
					if (arr[nx][ny] == 0)
						water++;
				}
				temp[i][j] = max(0, arr[i][j] - water);
			}
		}
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = temp[i][j];
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	for (int i = 0; i < 302; i++)
		fill(arr[i], arr[i] + 301, -1);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}
	
	int year = 0;
	while (true) {
		int cnt = BFS();
		if (cnt == 0) {
			cout << 0 << "\n";
			break;
		}
		if (cnt >= 2) {
			cout << year << "\n";
			break;
		}
		melt();
		year++;
	}
	
}
