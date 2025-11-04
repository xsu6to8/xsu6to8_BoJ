#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // 메모리 초과 해결
    int maxPrev[3], maxCur[3];
    int minPrev[3], minCur[3];

    cin >> maxPrev[0] >> maxPrev[1] >> maxPrev[2];
    minPrev[0] = maxPrev[0];
    minPrev[1] = maxPrev[1];
    minPrev[2] = maxPrev[2];

    for (int i = 1; i < n; i++) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        maxCur[0] = max(maxPrev[0], maxPrev[1]) + a[0];
        maxCur[1] = max({ maxPrev[0], maxPrev[1], maxPrev[2] }) + a[1];
        maxCur[2] = max(maxPrev[1], maxPrev[2]) + a[2];

        minCur[0] = min(minPrev[0], minPrev[1]) + a[0];
        minCur[1] = min({ minPrev[0], minPrev[1], minPrev[2] }) + a[1];
        minCur[2] = min(minPrev[1], minPrev[2]) + a[2];

        for (int j = 0; j < 3; j++) {
            maxPrev[j] = maxCur[j];
            minPrev[j] = minCur[j];
        }
    }

    int maxResult = max({ maxPrev[0], maxPrev[1], maxPrev[2] });
    int minResult = min({ minPrev[0], minPrev[1], minPrev[2] });

    cout << maxResult << ' ' << minResult;
}
