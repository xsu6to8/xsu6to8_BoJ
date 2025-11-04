#include <bits/stdc++.h>
using namespace std;

int n;
int a[10005];
int m;

bool solve(int x) {
    long long tmp = 0;  
    for (int i = 0; i < n; i++) {
        if (a[i] <= x)
            tmp += a[i];
        else
            tmp += x;
        if (tmp > m)  
            return false;
    }
    return tmp <= m;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    long long tot = 0;  
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tot += a[i];
    }
    sort(a, a + n);
    cin >> m;

    if (tot <= m) {
        cout << a[n - 1];
        return 0;
    }

    int st = 0;            
    int en = a[n - 1];
    while (st < en) {
        int mid = (st + en + 1) / 2;
        if (solve(mid))
            st = mid;
        else
            en = mid - 1;
    }

    cout << st;
}
