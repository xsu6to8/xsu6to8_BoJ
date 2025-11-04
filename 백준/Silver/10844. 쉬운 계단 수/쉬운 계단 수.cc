#include <iostream>

using namespace std;

const int MOD = 1000000000;

int dp[101][10];

int main() {

    int N;

    cin >> N;

    for (int i = 1; i <= 9; ++i)

        dp[1][i] = 1;

    for (int i = 2; i <= N; ++i) {

        for (int j = 0; j <= 9; ++j) {

            if (j > 0) dp[i][j] += dp[i - 1][j - 1];

            if (j < 9) dp[i][j] += dp[i - 1][j + 1];

            dp[i][j] %= MOD;

        }

    }

    int res = 0;

    for (int i = 0; i <= 9; ++i)

        res = (res + dp[N][i]) % MOD;

    cout << res;

    return 0;

}