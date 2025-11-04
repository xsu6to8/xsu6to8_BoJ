#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    int m, temp;
    cin >> m;
    while (m--) {
        cin >> temp;
        cout << binary_search(a, a + n, temp) << '\n';
    }
}
