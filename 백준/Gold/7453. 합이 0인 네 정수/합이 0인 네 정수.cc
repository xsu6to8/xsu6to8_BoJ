#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[4005];
int b[4005];
int c[4005];
int d[4005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	sort(a, a + n);
	sort(b, b + n);
	sort(c, c + n);
	sort(d, d + n);

	vector<int> ab;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			ab.push_back(a[i] + b[j]);
	sort(ab.begin(), ab.end());

	vector<int> cd;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cd.push_back(c[i] + d[j]);
	sort(cd.begin(), cd.end());

	ll cnt = 0; // n^2 = 16,000,000 에 대한 ^2 -> ll 갯수
	for (int i = 0; i < n * n; i++)
	{
		int curr = -ab[i];

		auto ub = upper_bound(cd.begin(), cd.end(), curr);
		auto lb = lower_bound(cd.begin(), cd.end(), curr);

		cnt += (ub - lb); // 중복 데이터 처리
	}

	cout << cnt;
}
