#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, question;
vector<int> v;
ll fact[21];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	fact[0] = 1;
	for (int i = 1; i <= 20; ++i)
		fact[i] = fact[i - 1] * i;

	cin >> n;
	for (int i = 1; i <= n; i++)
		v.push_back(i);

	cin >> question;
	if (question == 1) {
		ll k; cin >> k;
		k--;

		while (v.size() != 0) {
			ll block_size = fact[n - 1];
			n--;
			int idx = k / block_size;

			cout << v[idx] << ' ';
			v.erase(v.begin() + idx);

			k %= block_size;
		}

		return 0;
	}

	else if (question == 2) {
		ll order = 1; 

		for (int i = 0; i < n; ++i) {
			int curr;
			cin >> curr;

			for (int j = 0; j < v.size(); ++j) {
				if (v[j] == curr) {
					order += (ll)j * fact[v.size() - 1];

					v.erase(v.begin() + j);

					break;
				}
			}
		}

		cout << order;
		
		return 0;
	}

}