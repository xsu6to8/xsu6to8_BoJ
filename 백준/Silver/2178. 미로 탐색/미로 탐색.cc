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

	cin >> n >> m;

	string s;
	vector<vector<int>> board(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < m; j++)
			board[i][j] = s[j] - '0';
	}

	vector<vector<int>> visited(n, vector<int>(m, 0));

	queue<pair<int, int>> q;
	visited[0][0] = 1;
	q.push({ 0, 0 });

	while (!q.empty()) {
		pair<int, int> curr = q.front();
		int now_dist = visited[curr.X][curr.Y];
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = curr.X + dx[i];
			int ny = curr.Y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (board[nx][ny] == 0 || visited[nx][ny] != 0)
				continue;

			visited[nx][ny] = now_dist + 1;
			
			q.push({ nx, ny });
		}
	}

	cout << visited[n - 1][m - 1];
}