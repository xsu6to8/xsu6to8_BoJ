#include <bits/stdc++.h>
using namespace std;

int t, m, n, k, x, y;
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

vector<vector<int>> farm(50, vector<int>(50, 0));
vector<vector<bool>> visited(50, vector<bool>(50, false));

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--) {
        cin >> m >> n >> k;

        for (int i = 0; i < n; i++) {
            fill(farm[i].begin(), farm[i].begin() + m, 0);
            fill(visited[i].begin(), visited[i].begin() + m, false);
        }

        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            farm[y][x] = 1;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (farm[i][j] == 1 && !visited[i][j]) {
                    queue<pair<int, int>> q;
                    q.push({ i, j });
                    visited[i][j] = true;

                    while (!q.empty()) {
                        auto [cy, cx] = q.front(); 
                        q.pop();
                        for (int d = 0; d < 4; d++) {
                            int ny = cy + dy[d];
                            int nx = cx + dx[d];
                            if (ny >= 0 && ny < n && nx >= 0 && nx < m) {
                                if (farm[ny][nx] == 1 && !visited[ny][nx]) {
                                    visited[ny][nx] = true;
                                    q.push({ ny, nx });
                                }
                            }
                        }
                    }
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
}
