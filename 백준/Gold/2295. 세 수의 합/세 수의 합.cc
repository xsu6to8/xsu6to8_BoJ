#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005];
vector<int> two_sum;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			two_sum.push_back(a[i] + a[j]);
	sort(two_sum.begin(), two_sum.end());

	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (binary_search(two_sum.begin(), two_sum.end(), a[i] - a[j])) {
				cout << a[i];
				return 0;
			}
		}
	}

}