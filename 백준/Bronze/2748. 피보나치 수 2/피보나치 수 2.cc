#include <iostream>

using namespace std;

long long fib[91];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fib[0] = 0;
    fib[1] = 1;

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    cout << fib[n];

    return 0;
}