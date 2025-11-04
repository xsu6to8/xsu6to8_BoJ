#include <iostream>
using namespace std;

const int MAX = 1001;

int N, M;
bool adj[MAX][MAX]; 
bool visited[MAX];

void dfs(int node) {
    visited[node] = true;
    for (int i = 1; i <= N; i++) {
        if (adj[node][i] && !visited[i]) 
            dfs(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = adj[v][u] = true;
    }

    int componentCount = 0;

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            dfs(i);
            componentCount++;
        }
    }

    cout << componentCount;
    return 0;
}
