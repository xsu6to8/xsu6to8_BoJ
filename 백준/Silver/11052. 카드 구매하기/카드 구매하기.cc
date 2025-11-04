#include <bits/stdc++.h>
using namespace std;

int n;
int c[1005];
int dp[1005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> c[i];
		dp[i] = c[i];
		for (int j = 0; j <= i; j++)
		{
			if (dp[i] < dp[j] + dp[i - j])
				dp[i] = dp[j] + dp[i - j];
		}
	}
	//	O(N^2)	-> 1000*1000 = 1,000,000 < 1초
	
	cout << dp[n];
}
