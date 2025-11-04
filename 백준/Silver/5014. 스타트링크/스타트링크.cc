#include <bits/stdc++.h>
using namespace std;

int f, s, g, u, d;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> f >> s >> g >> u >> d;

	if (s == g) {
		cout << 0;
		return 0;
	}

	queue<pair<int,int>>q;
	vector<bool> visited(f+1, false);
	visited[s] = true;
	q.push({s,0});
	while (!q.empty()) {
		auto [curr, cnt] = q.front();
		q.pop();
		
		int up = curr + u;
		int down = curr - d;

		if (up == g)
		{
			cout << cnt + 1;
			return 0;
		}
		if (down == g)
		{
			cout << cnt + 1;
			return 0;
		}

		if (up <= f && !visited[up]) {
			visited[up] = true;
			q.push({ up, cnt + 1 });
		}
		if (down >= 1 && !visited[down]) {
			visited[down] = true;
			q.push({ down, cnt + 1 });
		}
	}

	cout << "use the stairs";
}