#include <bits/stdc++.h>

using namespace std;

int n;
stack<int> s;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	while (n--) {
		string com;
		int arg;
		cin >> com;

		if (com == "push") {
			cin >> arg;
			s.push(arg);
		}
		else if (com == "pop") {
			if (!(s.empty())) {
				cout << s.top() << '\n';
				s.pop();
			}
			else
				cout << "-1\n";
		}
		else if (com == "size") {
			cout << s.size() << '\n';
		}
		else if (com == "empty") {
			if (!(s.empty())) 
				cout << "0\n";
			else
				cout << "1\n";
		}
		else if (com == "top") {
			if (!(s.empty()))
				cout << s.top() << '\n';
			else
				cout << "-1\n";
		}
	}
}