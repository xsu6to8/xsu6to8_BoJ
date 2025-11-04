#include <bits/stdc++.h>
using namespace std;

#define ll long long

int t;
ll p[1000005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> p[i];

		ll total = 0;
		int max_p = p[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			if (p[i] > max_p)
				max_p = p[i];
			else
				total += max_p - p[i];
		}
		cout << total << '\n';
	}
}