#include <bits/stdc++.h>
using namespace std;

int n, s;
int a[100005];
int result = INT_MAX;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int en = 0;
	int tot = a[0];
	for (int st = 0; st < n; st++)
	{
		while (en < n && (tot < s)) {
			en++;
			if (en != n)
				tot += a[en];
		}

		if (en == n)
			break;
		
		result = min(result, en - st + 1);
		tot -= a[st];
	}

	if (result == INT_MAX)
		result = 0;

	cout << result;
}
