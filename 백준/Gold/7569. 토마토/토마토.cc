#include <bits/stdc++.h>
using namespace std;

int m, n, h;
int dz[6] = { 1, -1, 0, 0, 0, 0 };
int dx[6] = { 0, 0, 1, -1, 0, 0 };
int dy[6] = { 0, 0, 0, 0, 1, -1 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> m >> n >> h;

    vector<vector<vector<int>>> tomato(h, vector<vector<int>>(n, vector<int>(m)));
    vector<vector<vector<int>>> dist(h, vector<vector<int>>(n, vector<int>(m, -1)));

    queue<tuple<int, int, int>> q;

    for (int z = 0; z < h; z++) {
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < m; x++) {
                cin >> tomato[z][y][x];
                if (tomato[z][y][x] == 1) {
                    dist[z][y][x] = 0;
                    q.push({ z, y, x });
                }
            }
        }
    }

    while (!q.empty()) {
        auto [z, y, x] = q.front();
        q.pop();

        for (int dir = 0; dir < 6; dir++) {
            int nz = z + dz[dir];
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (nz < 0 || nz >= h || ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;
            if (tomato[nz][ny][nx] == -1 || dist[nz][ny][nx] != -1)
                continue;

            dist[nz][ny][nx] = dist[z][y][x] + 1;
            q.push({ nz, ny, nx });
        }
    }

    int answer = 0;
    for (int z = 0; z < h; z++) {
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < m; x++) {
                if (tomato[z][y][x] == 0 && dist[z][y][x] == -1) {
                    cout << -1;
                    return 0;
                }
                answer = max(answer, dist[z][y][x]);
            }
        }
    }

    cout << answer;
    return 0;
}
