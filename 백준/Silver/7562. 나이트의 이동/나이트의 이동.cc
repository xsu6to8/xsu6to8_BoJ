#include <bits/stdc++.h>
using namespace std;

int t, l;
pair<int, int> init, goal;

int dx[8] = { -1,-2,-2,-1,1,2,2,1 };
int dy[8] = { -2,-1,1,2,2,1,-1,-2 };


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> t;
	while (t--) {
		cin >> l;
		vector<vector<int>> board(l, vector<int>(l, 0));
		vector<vector<int>> visited(l, vector<int>(l, -1));
		cin >> init.first >> init.second;
		visited[init.first][init.second] = 0;
		cin >> goal.first >> goal.second;

		bool goal_matched = false;

		queue<pair<int, int>> q;
		q.push({ init.first, init.second });
		while (!q.empty() && !goal_matched) {
			auto curr = q.front();
			q.pop();

			for (int i = 0; i < 8; i++)
			{
				int nx = curr.first + dx[i];
				int ny = curr.second + dy[i];

				if (nx < 0 || nx >= l || ny < 0 || ny >= l)
					continue;
				if (visited[nx][ny] != -1)
					continue;

				visited[nx][ny] = visited[curr.first][curr.second] + 1;

				if (nx == goal.first && ny == goal.second)
					goal_matched = true;

				q.push({ nx, ny });
			}
		}

		cout << visited[goal.first][goal.second] << '\n';

	}

}