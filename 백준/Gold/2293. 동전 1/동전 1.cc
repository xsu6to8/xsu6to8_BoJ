#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, k;
int c[101];
ll dp[10001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> c[i];

	dp[0] = 1;
	for (int i = 0; i < n; i++)
	{
		int curr_c = c[i];
		for (int j = curr_c; j <= k; j++)
			dp[j] += dp[j - curr_c];
		
	}
	
	cout << dp[k];
}