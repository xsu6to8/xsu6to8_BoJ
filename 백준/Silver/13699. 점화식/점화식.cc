#include <bits/stdc++.h>
using namespace std;

int n;
long long t[40];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    t[0] = 1;
    t[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            t[i] += t[j] * t[i - (j + 1)];
        }
    }

    cout << t[n];
}
