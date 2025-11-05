#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;

int n, k;
int a[200005];
int cnt[100005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int max_l = 0;
	int curr_l = 0;

	int l = 0;
	for (int r = 0; r < n; r++)
	{
		curr_l++;
		cnt[a[r]]++;
		if (r == n)
			break;

		while (cnt[a[r]] > k) {
			cnt[a[l++]]--;
			curr_l--;
		}

		max_l = max(max_l, curr_l);
	}

	cout << max_l;
}
