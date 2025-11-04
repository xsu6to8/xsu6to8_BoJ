#include <bits/stdc++.h>
using namespace std;

int n, m, p;
char arr[1001][1001];
bool visited[1001][1001];
int player_s[10];
int castle[10];
int total_sum = 0;

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

queue<pair<int, int>> q[10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> p;
    for (int i = 1; i <= p; i++)
        cin >> player_s[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if ('1' <= arr[i][j] && arr[i][j] <= '9') {
                int player = arr[i][j] - '0';
                castle[player]++;
                visited[i][j] = true;
                q[player].push({ i, j }); 
                total_sum++;
            }
        }
    }

    bool expanded = true;
    while (expanded) {
        expanded = false;
        for (int curr_p = 1; curr_p <= p; curr_p++) {
            queue<pair<int, int>> tmp_q;

            for (int step = 0; step < player_s[curr_p]; step++) {
                int qsize = q[curr_p].size();
                if (qsize == 0) 
                    break;

                for (int i = 0; i < qsize; i++) {
                    auto [x, y] = q[curr_p].front(); 
                    q[curr_p].pop();

                    for (int dir = 0; dir < 4; dir++) {
                        int nx = x + dx[dir];
                        int ny = y + dy[dir];

                        if (nx < 0 || ny < 0 || nx >= n || ny >= m) 
                            continue;
                        if (visited[nx][ny]) 
                            continue;
                        if (arr[nx][ny] != '.') 
                            continue;

                        visited[nx][ny] = true;
                        arr[nx][ny] = curr_p + '0';
                        castle[curr_p]++;
                        total_sum++;
                        tmp_q.push({ nx, ny });
                        expanded = true;
                    }
                }
                
                swap(q[curr_p], tmp_q);
                while (!tmp_q.empty()) 
                    tmp_q.pop();
            }
        }
    }

    for (int i = 1; i <= p; i++) 
        cout << castle[i] << " ";
}
