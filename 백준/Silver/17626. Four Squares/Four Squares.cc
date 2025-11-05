#include <iostream>
using namespace std;

int dp[50001];
int n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

    cin >> n;

    dp[0] = 0; 
    for (int i = 1; i <= n; i++) {
        dp[i] = 100; 
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    cout << dp[n];
}
