#include <bits/stdc++.h>
using namespace std;

int n;
double arr[10001];
double dp[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    dp[0] = arr[0];
    double answer = dp[0];

    for (int i = 1; i < n; i++) {
        dp[i] = max(arr[i], dp[i - 1] * arr[i]);
        answer = max(answer, dp[i]);
    }

    cout << fixed << setprecision(3) << answer;
}
