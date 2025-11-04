#include <bits/stdc++.h>
using namespace std;

int win(int a, int b) {
    if (a == b) 
        return 0;
    if ((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2)) 
        return 1;
    return 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    for (int i = 0; i < n; i++) 
        cin >> b[i];

    int maxCnt = 0, cnt = 0, cur = 0;
    for (int i = 0; i < n; i++) {
        int r = win(a[i], b[i]);
        if (r == 0) 
            r = (cur == 1 ? 2 : 1);

        if (r == cur) 
            cnt++;
        else {
            cur = r;
            cnt = 1;
        }
        maxCnt = max(maxCnt, cnt);
    }

    cout << maxCnt << "\n";
}
