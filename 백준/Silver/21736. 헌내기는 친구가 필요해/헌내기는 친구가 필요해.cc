#include <bits/stdc++.h>
using namespace std;

int n, m;
char arr[601][601];
bool visited[601][601];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

queue<pair<int, int>> q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'I') {
                visited[i][j] = true;
                q.push({ i,j });
            }
        }
    }

    int friends = 0;
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (arr[nx][ny] == 'X' || visited[nx][ny])
                continue;

            if (arr[nx][ny] == 'P') {
                visited[nx][ny] = true;
                q.push({ nx,ny });
                friends++;
            }
            else
            {
                visited[nx][ny] = true;
                q.push({ nx,ny });
            }
        }
    }

    if (friends)
        cout << friends;
    else
        cout << "TT";
}
