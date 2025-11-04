#include <bits/stdc++.h>
using namespace std;

int n;
int t[20];
int p[20];
int dp[20];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> t[i] >> p[i];
		
	for (int i = n; i >= 1; i--) {
		if (i + t[i] <= n + 1)   
			dp[i] = max(dp[i + 1], p[i] + dp[i + t[i]]); // 상담을 할 수 있는 경우
		else   
			dp[i] = dp[i + 1]; // 상담을 할 수 없는 경우
	}

	cout << dp[1];
}
