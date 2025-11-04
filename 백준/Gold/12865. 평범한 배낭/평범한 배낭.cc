#include <bits/stdc++.h>
using namespace std;

#define w first
#define v second

int n, k;
pair<int, int> things[105];
int dp[105][100005];    //  개수 & 무게

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> things[i].w >> things[i].v;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= k; j++)
		{
			if (j < things[i - 1].w)	// 물건 넣을 수 없는 경우
				dp[i][j] = dp[i - 1][j];

			else						// 넣을 수 있는 경우: 넣거나 안 넣거나 중 최대값 선택
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - things[i - 1].w] + things[i - 1].v);
		}
	}

	cout << dp[n][k];
}
