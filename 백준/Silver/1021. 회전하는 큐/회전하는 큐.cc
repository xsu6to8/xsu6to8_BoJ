#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	deque<int> dq;
	vector<int> order(m);

	for (int i = 1; i <= n; i++)
		dq.push_back(i);
	for (int i = 0; i < m; i++)
		cin >> order[i];

	int total = 0;
	for (auto now_target : order) {
		int idx_dq = 0;
		for (int i = 0; i < dq.size(); i++)
		{
			if (now_target == dq[i]) {
				idx_dq = i;
				break;
			}
		}

		if (idx_dq <= (dq.size() / 2)) {
			while (idx_dq--) {
				dq.push_back(dq.front());
				dq.pop_front();
				total++;
			}
		}
		else {
			int right = dq.size() - idx_dq;
			while (right--) {
				dq.push_front(dq.back());
				dq.pop_back();
				total++;
			}
		}

		dq.pop_front();
	}

	cout << total;

	return 0;
}
