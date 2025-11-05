#include <iostream>
#include <vector>
#include <queue> // BFS - Queue

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, k;
	cin >> a >> k;

	vector<int> dist(k * 2 + 1, -1);

	queue<int> q;
	q.push(a);
    dist[a] = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur == k) {
            cout << dist[cur];
            return 0;
        }

        if (cur + 1 <= k && dist[cur + 1] == -1) {
            dist[cur + 1] = dist[cur] + 1;
            q.push(cur + 1);
        }

        if (cur * 2 <= k && dist[cur * 2] == -1) {
            dist[cur * 2] = dist[cur] + 1;
            q.push(cur * 2);
        }
    }

	return 0;
}
