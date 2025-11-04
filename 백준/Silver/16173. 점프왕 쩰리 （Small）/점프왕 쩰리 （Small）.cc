#include <iostream>
#include <vector>

using namespace std;

int n;
vector<vector<int>> map;
vector<vector<bool>> visited;
bool found = false;

void dfs(int x, int y) {
	if (found || visited[x][y]) return;

	visited[x][y] = true;

	if (map[x][y] == -1) {
		found = true;
		return;
	}

	int jump = map[x][y];

	if (x + jump < n)
		dfs(x + jump, y);
	if (y + jump < n)
		dfs(x, y + jump);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	map = vector<vector<int>>(n, vector<int>(n));
	visited = vector<vector<bool>>(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];

	dfs(0, 0);

	cout << (found ? "HaruHaru" : "Hing");
	return 0;
}
