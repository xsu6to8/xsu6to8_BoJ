#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t, n, m;
int a[1005]; int sa[1005];
int b[1005]; int sb[1005];

vector<ll> sumA;
vector<ll> sumB;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> t;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sa[i] += sa[i - 1] + a[i];
	}
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> b[i];
		sb[i] += sb[i - 1] + b[i];
	}

	for (int start = 1; start <= n; start++) 
		for (int end = start; end <= n; end++) 
			sumA.push_back(sa[end] - sa[start - 1]);
	sort(sumA.begin(), sumA.end());

	for (int start = 1; start <= m; start++)
		for (int end = start; end <= m; end++)
			sumB.push_back(sb[end] - sb[start - 1]);
	sort(sumB.begin(), sumB.end());
	
	ll tot = 0;	// 부분합 개수 고려
	for (auto i : sumA) {
		ll target = t - i;
		tot += upper_bound(sumB.begin(), sumB.end(), target) - lower_bound(sumB.begin(), sumB.end(), target);
	}

	cout << tot;
}