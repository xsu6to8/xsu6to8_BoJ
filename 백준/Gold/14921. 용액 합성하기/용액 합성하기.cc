#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = INT_MAX;
    int st = 0, en = n - 1;
    while (st < en) {
        int val = a[st] + a[en];
        if (abs(val) < abs(ans)) 
            ans = val;

        if (val < 0) 
            st++;
        else 
            en--;
    }

    cout << ans;
}