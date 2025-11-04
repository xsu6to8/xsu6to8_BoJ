#include <iostream>
using namespace std;

int dp[1001];

int main() {
	int n;
	cin >> n;

	dp[0] = 1;	// 기본 init
	dp[1] = 1;	// 세로 한 칸

	for (int i = 2; i <= n; i++) 
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
				//	세로 1칸 || 2칸 깔기
	
	cout << dp[n] << endl;
}
