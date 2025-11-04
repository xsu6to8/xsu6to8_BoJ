#include <bits/stdc++.h>
using namespace std;

int n, m;
int seat[45];
int dp[45];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	cin >> m;
	for (int i = 0; i < m; i++) {
		int vip;
		cin >> vip;
		seat[vip] = 1;
	}

	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2]; // {i-1 유지 + 마지막 1개}, {i-2,마지막 2명 반대로} 

	int answer = 1;
	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (seat[i] == 1) {
			answer *= dp[count];
			count = 0;
		}
		else
			count++;
	}

	answer *= dp[count];

	cout << answer;
}
