#include <bits/stdc++.h>
using namespace std;

int num[9], result[7];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = n; i > 1; i--)
	{
		for (int j = n - i; j > 0; j--)
			cout << ' ';
		for (int k = 0; k < 2 * i - 1; k++)
			cout << '*';

		cout << '\n';
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i; j > 0; j--)
			cout << ' ';
		for (int k = 0; k < 2 * i - 1; k++)
			cout << '*';

		cout << '\n';
	}

	return 0;
}