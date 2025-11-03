#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long X, Y;
    cin >> X >> Y;

    long long Z = (Y * 100) / X; 

    if (Z >= 99) { 
        cout << -1;
        return 0;
    }

    long long lo = 1, hi = 1e9, ans = -1;
    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        long long newZ = ((Y + mid) * 100) / (X + mid);

        if (newZ > Z) {
            ans = mid;
            hi = mid - 1; 
        }
        else {
            lo = mid + 1;
        }
    }

    cout << ans;
}
