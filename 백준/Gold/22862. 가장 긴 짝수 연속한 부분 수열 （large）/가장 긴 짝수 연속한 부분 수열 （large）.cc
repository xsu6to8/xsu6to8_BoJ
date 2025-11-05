#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;

int n, k;
int a[1000005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int st = 0, en = 0;
	int max_len = 0;
	int cnt = 0;
	for (int en = 0; en < n; en++)
	{
		if (a[en] % 2)
			cnt++;
		while (cnt > k) {
			if (a[st++] % 2)
				cnt--;
		}

		int now_len = (en - st + 1) - cnt;
		max_len = max(max_len, now_len);
	}

	cout << max_len;
}
