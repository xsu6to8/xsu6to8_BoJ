#include <bits/stdc++.h>
using namespace std;

int m, n;
vector<int> snack;

bool solve(int x) {
    int curr = 0;
    for (int i = 0; i < n; i++)
        curr += snack[i] / x;
    return curr >= m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> m >> n;
    snack.resize(n);
    for (int i = 0; i < n; i++)
        cin >> snack[i];
    sort(snack.begin(), snack.end());

    int st = 1;
    int en = snack[n - 1];
    int ans = 0;

    while (st <= en) {
        int mid = (st + en) / 2;
        if (solve(mid)) {
            ans = mid;
            st = mid + 1;
        }
        else {
            en = mid - 1;
        }
    }
    cout << ans;
}
