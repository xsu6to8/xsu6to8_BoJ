#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int dfs(int start, const vector<int>& graph, vector<bool>& visited) {
    int cnt = 0;
    int curr = start;
    while (!visited[curr]) {
        visited[curr] = true;
        curr = graph[curr];
        cnt++;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> graph(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> graph[i];

    int answer = 0;
    int maxCnt = 0;
    for (int i = 1; i <= n; ++i) {
        vector<bool> visited(n + 1, false);
        int cnt = dfs(i, graph, visited);
        if (cnt > maxCnt || (cnt == maxCnt && i < answer)) {
            maxCnt = cnt;
            answer = i;
        }
    }

    cout << answer;
    return 0;
}
