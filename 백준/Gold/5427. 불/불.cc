#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> y >> x;

        vector<vector<char>> building(x, vector<char>(y));
        vector<vector<int>> sang_dist(x, vector<int>(y, -1));
        vector<vector<int>> fire_dist(x, vector<int>(y, -1));

        queue<pair<int, int>> sang_q;
        queue<pair<int, int>> fire_q;

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                cin >> building[i][j];
                if (building[i][j] == '@') {
                    sang_dist[i][j] = 0;
                    sang_q.push({ i, j });
                }
                if (building[i][j] == '*') {
                    fire_dist[i][j] = 0;
                    fire_q.push({ i, j });
                }
            }
        }

        while (!fire_q.empty()) {
            auto [cx, cy] = fire_q.front(); fire_q.pop();
            for (int i = 0; i < 4; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                if (nx < 0 || nx >= x || ny < 0 || ny >= y) 
                    continue;
                if (building[nx][ny] == '#' || fire_dist[nx][ny] != -1) 
                    continue;
                fire_dist[nx][ny] = fire_dist[cx][cy] + 1;
                fire_q.push({ nx, ny });
            }
        }

        bool escaped = false;
        while (!sang_q.empty() && !escaped) {
            auto [cx, cy] = sang_q.front(); sang_q.pop();
            for (int i = 0; i < 4; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];

                if (nx < 0 || nx >= x || ny < 0 || ny >= y) {
                    cout << sang_dist[cx][cy] + 1 << '\n';
                    escaped = true;
                    break;
                }

                if (building[nx][ny] == '#' || sang_dist[nx][ny] != -1) 
                    continue;

                int next_dist = sang_dist[cx][cy] + 1;
                if (fire_dist[nx][ny] != -1 && fire_dist[nx][ny] <= next_dist) 
                    continue;

                sang_dist[nx][ny] = next_dist;
                sang_q.push({ nx, ny });
            }
        }

        if (!escaped) 
            cout << "IMPOSSIBLE\n";
    }
}
