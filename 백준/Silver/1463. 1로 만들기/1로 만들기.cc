#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    queue<pair<int, int>> q;
    vector<bool> visited(n + 1, false);

    q.push({ n, 0 });
    visited[n] = true;

    while (!q.empty()) {
        auto [curr, step] = q.front();
        q.pop();

        if (curr == 1) {
            cout << step;
            return 0;
        }

        if (curr % 3 == 0 && !visited[curr / 3]) {
            visited[curr / 3] = true;
            q.push({ curr / 3, step + 1 });
        }
        if (curr % 2 == 0 && !visited[curr / 2]) {
            visited[curr / 2] = true;
            q.push({ curr / 2, step + 1 });
        }
        if (curr - 1 >= 1 && !visited[curr - 1]) {
            visited[curr - 1] = true;
            q.push({ curr - 1, step + 1 });
        }
    }
}
