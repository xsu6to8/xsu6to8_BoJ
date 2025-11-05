#include <iostream>

#include <vector>

#include <queue>

#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    cin.tie(0);

    int n, m, r;

    cin >> n >> m >> r;

    vector<vector<int>> graph(n + 1);

    vector<int> visited(n + 1, 0);

    queue<int> q;

    for (int i = 0; i < m; ++i) {

        int u, v;

        cin >> u >> v;

        graph[u].push_back(v);

        graph[v].push_back(u);

    }

    for (int i = 1; i <= n; ++i) {

        sort(graph[i].begin(), graph[i].end());

    }

    int order = 1;

    visited[r] = order++;

    q.push(r);

    while (!q.empty()) {

        int curr = q.front();

        q.pop();

        for (int next : graph[curr]) {

            if (!visited[next]) {

                visited[next] = order++;

                q.push(next);

            }

        }

    }

    for (int i = 1; i <= n; ++i) {

        cout << visited[i] << '\n';

    }

    return 0;

}