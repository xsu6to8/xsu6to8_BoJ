#include <bits/stdc++.h>
using namespace std;

int h, w;
char area[101][101];
int cloud[101][101];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> h >> w;

    for (int i = 0; i < h; i++)
        fill(cloud[i], cloud[i] + w, -1);

    queue<pair<int, int>> q;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> area[i][j];
            if (area[i][j] == 'c') {
                cloud[i][j] = 0;
                q.push({ i,j });
            }
        }
    }

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        int ny = y + 1;
        if (ny >= w)
            continue;

        if (cloud[x][ny] == -1) {
            cloud[x][ny] = cloud[x][y] + 1;
            q.push({ x,ny });
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << cloud[i][j] << ' ';
        }
        cout << '\n';
    }
}
