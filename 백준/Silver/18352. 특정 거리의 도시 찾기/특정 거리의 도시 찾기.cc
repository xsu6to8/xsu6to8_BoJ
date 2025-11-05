#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#define endl '\n'
using namespace std;

//백준 18352번 코드
vector<int> v[300001];
int visit[300001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);   cout.tie(NULL);

    int city, road, min, start;
    cin >> city >> road >> min >> start;
    for (int i = 0; i < road; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    queue<pair<int, int>> q;
    q.push(make_pair(start, 0));
    while (!q.empty()) {
        int now = q.front().first;
        int k = q.front().second;
        q.pop();

        if (now != start && visit[now] == 0) {
            visit[now] = k;
        }

        for (int i = 0; i < v[now].size(); i++) {
            if (visit[v[now][i]] == 0) {
                q.push(make_pair(v[now][i], k + 1));
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i <= city; i++) {
        if (visit[i] == min) {
            cout << i << endl;
            cnt++;
        }
    }
    if (cnt == 0) {
        cout << -1 << endl;
    }
}