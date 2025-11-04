#include "bits/stdc++.h"

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, x;
	cin >> n >> x;

	while (n--) {
		int temp;
		cin >> temp;
		if (temp < x)
			cout << temp << " ";
	}

	return 0;
}