#include <bits/stdc++.h>
using namespace std;

int n;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	vector<vector<int>> apt(n, vector<int>(n));
	vector<vector<bool>> dist(n, vector<bool>(n, false));
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < n; j++)
			apt[i][j] = s[j] - '0';
	}

	vector<int> each_num;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (apt[i][j] == 1 && !dist[i][j]) {
				queue<pair<int, int>> q;
				dist[i][j] = true;
				q.push({ i,j });
				int temp_size = 1;

				while (!q.empty()) {
					auto [x, y] = q.front();
					q.pop();

					for (int k = 0; k < 4; k++) {
						int nx = x + dx[k];
						int ny = y + dy[k];

						if (nx < 0 || nx >= n || ny < 0 || ny >= n)
							continue;
						if (apt[nx][ny] == 0 || dist[nx][ny])
							continue;

						dist[nx][ny] = true;
						q.push({ nx,ny });
						temp_size++;
					}
				}
				each_num.push_back(temp_size);
			}
		}
	}

	sort(each_num.begin(), each_num.end());
	cout << each_num.size() << '\n';
	for (int num : each_num)
		cout << num << '\n';
}