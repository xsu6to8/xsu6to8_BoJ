#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1000005];
int pre[1000005];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	dp[1] = 0; pre[1] = 0;
	dp[2] = 1; pre[2] = 1;
	dp[3] = 1; pre[3] = 1;

	for (int i = 4; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;
		pre[i] = i - 1;

		if (i % 2 == 0 && dp[i] > dp[i / 2] + 1)
		{
			dp[i] = dp[i / 2] + 1;
			pre[i] = i / 2;
		}

		if (i % 3 == 0 && dp[i] > dp[i / 3] + 1)
		{
			dp[i] = dp[i / 3] + 1;
			pre[i] = i / 3;
		}
	}

	cout << dp[n] << '\n';
	int curr = n;
	while (true) {
		cout << curr << ' ';
		if (curr == 1)break;
		curr = pre[curr];
	}
}
