#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    vector<pair<int, int>> lectures(n);

    for (int i = 0; i < n; i++) {
        cin >> lectures[i].first >> lectures[i].second;
    }

    sort(lectures.begin(), lectures.end());

    priority_queue<int, vector<int>, greater<>> pq;

    for (const auto& [start, end] : lectures) {
        if (!pq.empty() && pq.top() <= start) {
            pq.pop();
        }
        pq.push(end);
    }

    cout << pq.size() << '\n';
}
