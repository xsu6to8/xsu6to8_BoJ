#include <bits/stdc++.h>
using namespace std;

int na, nb;
vector<int> a, b;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> na >> nb;
	for (int i = 0; i < na; i++) {
		int ta; cin >> ta;
		a.push_back(ta);
	}
	sort(a.begin(), a.end());

	for (int i = 0; i < nb; i++) {
		int tb; cin >> tb;
		b.push_back(tb);
	}
	sort(b.begin(), b.end());

	vector<int> result;
	for (int i = 0; i < na; i++)
	{
		if (binary_search(b.begin(), b.end(), a[i]))
			continue;
		else
			result.push_back(a[i]);
	}

	cout << result.size() << '\n';
	if (!result.size()) 
		return 0;
	
	for (auto i : result)
		cout << i << ' ';

}