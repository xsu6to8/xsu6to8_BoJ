#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<vector<char>> room;
vector<vector<bool>> visited;

void dfs(int x, int y, char type) {
	visited[x][y] = true;

	if (type == '-') {
		int ny = y + 1;
		if (ny < m && !visited[x][ny] && room[x][ny] == '-')
			dfs(x, ny, '-');
	}
	else if (type == '|') {
		int nx = x + 1;
		if (nx < n && !visited[nx][y] && room[nx][y] == '|') 
			dfs(nx, y, '|');
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	room = vector<vector<char>>(n, vector<char>(m));
	visited = vector<vector<bool>>(n, vector<bool>(m, false));

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> room[i][j];

	int count = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			if (!visited[i][j]) {
				dfs(i, j, room[i][j]);
				count++;
			}
		}

	cout << count;
	return 0;
}
