#include <bits/stdc++.h>
using namespace std;

int r, c;
vector<vector<int>> maze;
vector<vector<int>> j_dist;
vector<vector<int>> f_dist;
queue<pair<int, int>> j_q;
queue<pair<int, int>> f_q;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> r >> c;

    maze = vector<vector<int>>(r, vector<int>(c));
    j_dist = vector<vector<int>>(r, vector<int>(c, -1));
    f_dist = vector<vector<int>>(r, vector<int>(c, -1));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            char temp;
            cin >> temp;
            if (temp == '#') {
                maze[i][j] = -1;
            } else {
                maze[i][j] = 0;
                if (temp == 'J') {
                    j_q.push({i, j});
                    j_dist[i][j] = 0;
                } else if (temp == 'F') {
                    f_q.push({i, j});
                    f_dist[i][j] = 0;
                }
            }
        }
    }

    while (!f_q.empty()) {
        auto [x, y] = f_q.front();
        f_q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (maze[nx][ny] == -1 || f_dist[nx][ny] != -1) continue;

            f_dist[nx][ny] = f_dist[x][y] + 1;
            f_q.push({nx, ny});
        }
    }

    while (!j_q.empty()) {
        auto [x, y] = j_q.front();
        j_q.pop();

        if (x == 0 || x == r - 1 || y == 0 || y == c - 1) {
            cout << j_dist[x][y] + 1 << "\n";
            return 0;
        }

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (maze[nx][ny] == -1 || j_dist[nx][ny] != -1) continue;

            if (f_dist[nx][ny] != -1 && f_dist[nx][ny] <= j_dist[x][y] + 1) continue;

            j_dist[nx][ny] = j_dist[x][y] + 1;
            j_q.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
