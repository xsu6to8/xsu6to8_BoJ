#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1000000007;

int n;
ll fib[1000005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
    }

    cout << fib[n];
}
