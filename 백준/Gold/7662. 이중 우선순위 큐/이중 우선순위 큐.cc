#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> t;
	while (t--) {
		multiset<int> ms;

		int k;
		cin >> k;
		while (k--) {
			char op;
			int curr;
			cin >> op >> curr;

			if (op == 'I') 
				ms.insert(curr);
			
			else if (op == 'D') {
				if (!ms.empty()) {
					if (curr == 1) {
						// Max
						ms.erase(prev(ms.end()));
					}
					else if (curr == -1) {
						// min
						ms.erase(ms.begin());
					}
				}
			}
		}

		if (ms.empty()) {
			cout << "EMPTY\n";
		}
		else {
			cout << *prev(ms.end()) << " " << *ms.begin() << "\n";
		}
	}
}
