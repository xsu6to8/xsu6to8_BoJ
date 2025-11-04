#include <bits/stdc++.h>
using namespace std;

int arr[8][8];
vector<pair<int, int>> room;
vector<int> orders;

int n, m;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> q;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 2)
                q.push({ i,j });
            if (arr[i][j] == 0)
                room.push_back({ i,j });
        }
    }

    orders.resize(room.size());
    fill(orders.end() - 3, orders.end(), 1);

    int safe_area = -1;

    do
    {
        int temp_arr[8][8];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                temp_arr[i][j] = arr[i][j];

        for (int i = 0; i < orders.size(); i++) {
            if (orders[i] == 1)
                temp_arr[room[i].first][room[i].second] = 1;
        }

        queue<pair<int, int>> temp_q = q;
        while (!temp_q.empty()) {
            auto [x, y] = temp_q.front();
            temp_q.pop();

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                    continue;
                if (temp_arr[nx][ny] != 0)
                    continue;

                temp_arr[nx][ny] = 2;
                temp_q.push({ nx, ny });
            }
        }

        int temp_safe = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (temp_arr[i][j] == 0)
                    temp_safe++;

        safe_area = max(safe_area, temp_safe);

    } while (next_permutation(orders.begin(), orders.end()));

    cout << safe_area;
}
