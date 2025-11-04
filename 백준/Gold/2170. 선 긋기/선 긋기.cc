#include <bits/stdc++.h>
using namespace std;

int n;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        pq.push({ s, e });
    }

    int dist = 0;

    int start = pq.top().first;
    int end = pq.top().second;
    pq.pop();

    while (!(pq.empty())) {
        int temp_s = pq.top().first;
        int temp_e = pq.top().second;
        pq.pop();

        if (temp_s <= end) {
            if (temp_e > end)
                end = temp_e;
        }

        else {
            dist += (end - start);
            start = temp_s;
            end = temp_e;
        }
    }

    dist += (end - start);
    
    cout << dist;
}
