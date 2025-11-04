#include <iostream>
#include <queue>

using namespace std;

int n, k;
int dist[200001];
bool visited[200001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	fill(dist, dist + 200001, -1);
	cin >> n >> k;

	queue<pair<int, int>> q;
	dist[n] = 0;
	visited[n] = true;
	q.push({ n, 0 });

	while (!q.empty()) {
		int pos = q.front().first;
		int cnt = q.front().second;
		q.pop();

		if (pos == k) {
			cout << cnt;
			return 0;
		}

		if (2 * pos < 200001 && !visited[2 * pos]) {
			visited[2 * pos] = true;
			dist[2 * pos] = cnt;
			q.push({ 2 * pos, cnt });
		}

		if (pos - 1 >= 0 && !visited[pos - 1]) {
			visited[pos - 1] = true;
			dist[pos - 1] = cnt + 1;
			q.push({ pos - 1, cnt + 1 });
		}

		if (pos + 1 < 200001 && !visited[pos + 1]) {
			visited[pos + 1] = true;
			dist[pos + 1] = cnt + 1;
			q.push({ pos + 1, cnt + 1 });
		}
	}
}
