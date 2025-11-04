#include <bits/stdc++.h>
using namespace std;

int t;
int a, b;
// [ D : *2 ] [ S : -1 ] [ L : ← ] [ R : → ]

int D(int curr) {
	return (curr * 2) % 10000;
}
int S(int curr) {
	if (curr == 0)
		return 9999;
	else
		return curr - 1;
}
int L(int curr) {
	int tail = curr / 1000;
	curr = (curr % 1000) * 10;
	return curr + tail;
}
int R(int curr) {
	int head = (curr % 10) * 1000;
	curr /= 10;
	return head + curr;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> t;
	while (t--) {
		cin >> a >> b;

		vector<bool> visited(10001, false);

		queue<pair<int, string>> q;
		visited[a] = true;
		q.push({ a, "" });

		while (!q.empty()) {
			int curr = q.front().first;
			string order = q.front().second;
			q.pop();

			if (curr == b) {
				cout << order << '\n';
				break;
			}

			int t_D = D(curr);
			if (!visited[t_D]) {
				visited[t_D] = true;
				q.push({ t_D, order + "D" });
			}
			int t_S = S(curr);
			if (!visited[t_S]) {
				visited[t_S] = true;
				q.push({ t_S, order + "S" });
			}
			int t_L = L(curr);
			if (!visited[t_L]) {
				visited[t_L] = true;
				q.push({ t_L, order + "L" });
			}
			int t_R = R(curr);
			if (!visited[t_R]) {
				visited[t_R] = true;
				q.push({ t_R, order + "R" });
			}
		}
	}
}
