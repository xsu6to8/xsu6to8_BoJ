#include <bits/stdc++.h>
using namespace std;

vector<bool> visited(100001, false);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    if (n == k) {
        cout << 0;
        return 0;
    }

    queue<pair<int, int>> q;
    q.push({ n, 0 });
    visited[n] = true;

    while (!q.empty()) {
        int curr_pos = q.front().first;
        int cnt = q.front().second;
        q.pop();

        for (int nxt : {curr_pos - 1, curr_pos + 1, curr_pos * 2}) {
            if (nxt < 0 || nxt > 100000)
                continue; 
            if (visited[nxt]) 
                continue;           
            if (nxt == k) {
                cout << cnt + 1;
                return 0;
            }
            visited[nxt] = true;
            q.push({nxt, cnt + 1});
        }
    }
}
