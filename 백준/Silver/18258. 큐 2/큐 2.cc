#include <bits/stdc++.h>

using namespace std;

int n, t;
string com;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;

	queue<int> q;
	while (n--) {
		cin >> com;
		if (com == "push") {
			cin >> t;
			q.push(t);
		}
		if (com == "pop") {
			if (q.empty())
				cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		if (com == "size") {
			cout << q.size() << '\n';
		}
		if (com == "empty") {
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		if (com == "front") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}

		if (com == "back") {
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
	}

	return 0;
}
