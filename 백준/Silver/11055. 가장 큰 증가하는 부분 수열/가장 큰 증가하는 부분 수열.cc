#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005];
int dp[1005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        dp[i] = a[i]; 
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                dp[i] = max(dp[i], dp[j] + a[i]);
            }
        }
    }
    
    int tot = *max_element(dp, dp + n);
    cout << tot;
}
