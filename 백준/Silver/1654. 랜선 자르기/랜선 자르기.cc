#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int k, n;
int l[10005];

bool solve(ll x) {
	ll cur = 0;
	for (size_t i = 0; i < k; i++)
		cur += l[i] / x;
	
	return cur >= n;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> k >> n;
	for (int i = 0; i < k; i++)
		cin >> l[i];

	ll st = 1;
	ll en = (1LL << 31) - 1;
	while (st < en) {
		ll mid = (st + en + 1) / 2;
		if (solve(mid))
			st = mid;
		else
			en = mid - 1;
	}

	cout << st;
}