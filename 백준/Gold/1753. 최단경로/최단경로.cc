#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

vector<vector<pair<int, int>>> graph;
vector<int> dist;

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) {
        int current_dist = pq.top().first;
        int current_node = pq.top().second;
        pq.pop();

        if (current_dist > dist[current_node]) continue;

        for (auto &edge : graph[current_node]) {
            int next_node = edge.first;
            int weight = edge.second;

            if (dist[next_node] > current_dist + weight) {
                dist[next_node] = current_dist + weight;
                pq.push({dist[next_node], next_node});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int V, E, K;
    cin >> V >> E >> K;

    graph.assign(V + 1, vector<pair<int, int>>());
    dist.assign(V + 1, INF);

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }

    dijkstra(K);

    for (int i = 1; i <= V; i++) {
        if (dist[i] == INF)
            cout << "INF" << '\n';
        else
            cout << dist[i] << '\n';
    }

    return 0;
}