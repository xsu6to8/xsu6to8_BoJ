#include <bits/stdc++.h>
using namespace std;

#define ADD 1
#define MINUS -1
#define MUL 2
#define START 9

const int MAX = 200001;

bool visited[MAX];
int mov[MAX];
int n, k;

bool check(int n) {
    return 0 <= n && n < MAX;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    visited[n] = true;
    mov[n] = START;

    queue<int> q;
    q.push(n);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        if (curr == k)
            break;

        int fir = curr + 1;
        if (check(fir) && !visited[fir]) {
            visited[fir] = true;
            mov[fir] = ADD;
            q.push(fir);
        }

        int sec = curr - 1;
        if (check(sec) && !visited[sec]) {
            visited[sec] = true;
            mov[sec] = MINUS;
            q.push(sec);
        }

        int thi = curr * 2;
        if (check(thi) && !visited[thi]) {
            visited[thi] = true;
            mov[thi] = MUL;
            q.push(thi);
        }
    }

    int cur = k;
    vector<int> path = { cur };
    while (mov[cur] != START) {
        if (mov[cur] == ADD)
            cur -= 1;
        else if (mov[cur] == MINUS)
            cur += 1;
        else if (mov[cur] == MUL)
            cur /= 2;
        path.push_back(cur);
    }

    reverse(path.begin(), path.end());

    cout << path.size() - 1 << '\n';
    for (int p : path)
        cout << p << ' ';
    cout << '\n';
}
