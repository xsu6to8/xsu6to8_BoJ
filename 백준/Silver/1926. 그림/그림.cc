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
	vector<vector<int>> board(n, vector<int>(m));
	vector<vector<bool>> visited(n, vector<bool>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> board[i][j];
	}

	queue<pair<int, int>> q;
	int s_max = 0;
	int total_paints = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 1)
			{
				if (board[i][j] == 0 || visited[i][j])
					continue;

				total_paints++;
				int s_temp = 1;
				visited[i][j] = true;
				q.push({ i, j });
				while (!q.empty()) {
					pair<int, int> curr = q.front();
					q.pop();
					for (int k = 0; k < 4; k++) {
						int nx = curr.X + dx[k];
						int ny = curr.Y + dy[k];


						if (nx < 0 || nx >= n || ny < 0 || ny >= m)
							continue;
						if (board[nx][ny] == 0 || visited[nx][ny] == true)
							continue;

						s_temp++;
						visited[nx][ny] = true;
						q.push({ nx, ny });
					}
				}
				s_max = max(s_max, s_temp);

			}
		}
	}

	cout << total_paints << '\n' << s_max;

}