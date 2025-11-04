#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	while (true) {
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;

		if (n > m)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
