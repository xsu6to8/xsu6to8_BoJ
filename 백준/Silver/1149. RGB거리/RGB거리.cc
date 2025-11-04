#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<vector<int>> matrix(n, vector<int>(3));
	for (int i = 0; i < n; i++)
		cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2];

	vector<vector<int>> dp(n, vector<int>(3));

	dp[0][0] = matrix[0][0];
	dp[0][1] = matrix[0][1];
	dp[0][2] = matrix[0][2];

	for (int i = 1; i < n; i++)
	{
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + matrix[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + matrix[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + matrix[i][2];
	}

	cout << min({ dp[n - 1][0], dp[n - 1][1], dp[n - 1][2] }) << endl;

	return 0;
}