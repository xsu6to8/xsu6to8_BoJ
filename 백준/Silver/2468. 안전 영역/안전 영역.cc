#include <bits/stdc++.h>
using namespace std;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;

	int max_h = -1;
	vector<vector<int>> area(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cin >> area[i][j];
			max_h = max(max_h, area[i][j]);
		}
	}

	int total_amount = 0;
	for (int curr_h = 0; curr_h < max_h; curr_h++)
	{
		queue<pair<int, int>> q;
		vector<vector<bool>> visit(n, vector<bool>(n, false));
		int temp_amount = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++) {
				if (area[i][j] > curr_h && !visit[i][j]) {
					visit[i][j] = true;;
					q.push({ i,j });

					while (!q.empty()) {
						auto [x, y] = q.front();
						q.pop();

						for (int k = 0; k < 4; k++)
						{
							int nx = x + dx[k];
							int ny = y + dy[k];

							if (nx < 0 || nx >= n || ny < 0 || ny >= n)
								continue;
							if (area[nx][ny] <= curr_h || visit[nx][ny])
								continue;

							visit[nx][ny] = true;
							q.push({ nx,ny });
						}
					}
					temp_amount++;
				}
			}

		}
		total_amount = max(total_amount, temp_amount);
	}

	cout << total_amount;
}