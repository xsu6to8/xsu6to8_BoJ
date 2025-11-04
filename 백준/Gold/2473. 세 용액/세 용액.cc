#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n;
ll a[5005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    ll min_v = LLONG_MAX;
    vector<ll> result(3);

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            ll target = -(a[i] + a[j]);
            int idx = lower_bound(a + j + 1, a + n, target) - a;

            if (idx < n) {
                ll sum = a[i] + a[j] + a[idx];
                if (abs(sum) < abs(min_v)) {
                    min_v = sum;
                    result[0] = a[i];
                    result[1] = a[j];
                    result[2] = a[idx];
                }
            }

            if (idx > j + 1) {
                ll sum = a[i] + a[j] + a[idx - 1];
                if (abs(sum) < abs(min_v)) {
                    min_v = sum;
                    result[0] = a[i];
                    result[1] = a[j];
                    result[2] = a[idx - 1];
                }
            }
        }
    }

    cout << result[0] << " " << result[1] << " " << result[2];
}
