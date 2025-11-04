#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[1005][1005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 1001; i++)
        fill(arr[i], arr[i] + 1001, INT_MAX);

    cin >> n >> m;
    while (m--) {
        int from, to, dist;
        cin >> from >> to >> dist;
        arr[from][to] = min(arr[from][to], dist);
    }

    int start, end;
    cin >> start >> end;

    vector<int> dist(n + 1, INT_MAX);
    vector<bool> visited(n + 1, false);

    dist[start] = 0;

    for (int i = 0; i < n; i++) {
        int u = -1;

        for (int v = 1; v <= n; v++) {
            if (!visited[v] && (u == -1 || dist[v] < dist[u])) {
                u = v;
            }
        }

        if (dist[u] == INT_MAX) 
            break;
        visited[u] = true;

        for (int v = 1; v <= n; v++) {
            if (arr[u][v] != INT_MAX && dist[u] + arr[u][v] < dist[v]) {
                dist[v] = dist[u] + arr[u][v];
            }
        }
    }

    cout << dist[end];
}
