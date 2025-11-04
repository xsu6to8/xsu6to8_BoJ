#include <bits/stdc++.h>
using namespace std;

int l, r, c;
int dz[6] = { 1, -1, 0, 0, 0, 0 };
int dx[6] = { 0, 0, 1, -1, 0, 0 };
int dy[6] = { 0, 0, 0, 0, 1, -1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true) {
		cin >> l >> r >> c;
		if (l == 0 && r == 0 && c == 0)
			return 0;

		vector<vector<vector<char>>> building(l, vector<vector<char>>(r, vector<char>(c)));
		vector<vector<vector<int>>> visited(l, vector<vector<int>>(r, vector<int>(c, -1)));

		int sz, sx, sy;
		for (int z = 0; z < l; z++) {
			for (int x = 0; x < r; x++) {
				for (int y = 0; y < c; y++) {
					cin >> building[z][x][y];
					if (building[z][x][y] == 'S') {
						sz = z; sx = x; sy = y;
					}
				}
			}
			cin.ignore();
		}

		queue<tuple<int, int, int>> q;
		q.push({ sz, sx, sy });
		visited[sz][sx][sy] = 0;

		bool escaped = false;
		while (!q.empty()) {
			auto [z, x, y] = q.front(); 
			q.pop();
			if (building[z][x][y] == 'E') {
				cout << "Escaped in " << visited[z][x][y] << " minute(s).\n";
				escaped = true;
				break;
			}
			for (int d = 0; d < 6; d++) {
				int nz = z + dz[d];
				int nx = x + dx[d];
				int ny = y + dy[d];
				if (nz < 0 || nz >= l || nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
				if (visited[nz][nx][ny] == -1 && building[nz][nx][ny] != '#') {
					visited[nz][nx][ny] = visited[z][x][y] + 1;
					q.push({ nz, nx, ny });
				}
			}
		}
		if (!escaped) cout << "Trapped!\n";
	}
}
