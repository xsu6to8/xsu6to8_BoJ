#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	vector<int> lis;
	for (int i = 0; i < n; i++) {
		int x = a[i];
		auto it = lower_bound(lis.begin(), lis.end(), x);
		if (it == lis.end())
			lis.push_back(x);
		else
			*it = x;
	}

	cout << lis.size();
}
