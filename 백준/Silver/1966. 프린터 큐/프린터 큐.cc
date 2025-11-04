#include <iostream>

#include <queue>

using namespace std;

int main() {

    int test_cases;

    cin >> test_cases;

    while (test_cases--) {

        int n, m; 

        cin >> n >> m;

        queue<pair<int, int>> q; 

        priority_queue<int> pq;

        for (int i = 0; i < n; ++i) {

            int importance;

            cin >> importance;

            q.push({i, importance});

            pq.push(importance);

        }

        int print_order = 0;

        while (!q.empty()) {

            int idx = q.front().first;

            int val = q.front().second;

            q.pop();

            if (val == pq.top()) {

                pq.pop();

                ++print_order;

                if (idx == m) {

                    cout << print_order << '\n';

                    break;

                }

            } else {

                q.push({idx, val});

            }

        }

    }

    return 0;

}

