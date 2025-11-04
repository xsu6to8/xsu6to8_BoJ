#include "bits/stdc++.h"

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int m = 101;
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		int temp;
		cin >> temp;
		if (temp % 2 == 1) {
			sum += temp;
			m = min(temp, m);
		}
	}

	if (sum == 0)
		cout << "-1";
	else
	{
		cout << sum << '\n' << m;
	}

	return 0;
}