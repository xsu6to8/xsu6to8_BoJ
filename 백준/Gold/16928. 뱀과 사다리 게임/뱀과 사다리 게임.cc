#include <bits/stdc++.h>
using namespace std;

int n, m;
map<int, int> teleport;

queue<pair<int, int>> q;
vector<bool> visited(101, false);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;

	// 사다리 
	for (int i = 0; i < n; i++) {
		int from, to;
		cin >> from >> to;
		teleport[from] = to;
	}
	// 뱀
	for (int i = 0; i < m; i++) {
		int from, to;
		cin >> from >> to;
		teleport[from] = to;
	}

	q.push({ 1, 0 });
	visited[1] = true;

	while (!q.empty()) {
		int curr = q.front().first;
		int count = q.front().second;
		q.pop();

		if (curr == 100) {
			cout << count;
			return 0;
		}

		for (int dice = 1; dice <= 6; dice++) {
			int next = curr + dice;

			if (next > 100)
				continue;

			if (teleport.find(next) != teleport.end())
				next = teleport[next];

			if (!visited[next]) {
				visited[next] = true;
				q.push({ next, count + 1 });
			}
		}
	}
}
