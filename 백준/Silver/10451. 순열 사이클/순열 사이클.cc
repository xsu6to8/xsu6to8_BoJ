#include <iostream>
#include <vector>

using namespace std;

void dfs(int current, vector<int>& permutation, vector<bool>& visited) {
    visited[current] = true;
    int next = permutation[current];
    if (!visited[next]) {
        dfs(next, permutation, visited);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> permutation(n + 1);
        for (int i = 1; i <= n; i++) 
            cin >> permutation[i];
        vector<bool> visited(n + 1, false);

        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                dfs(i, permutation, visited);
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
