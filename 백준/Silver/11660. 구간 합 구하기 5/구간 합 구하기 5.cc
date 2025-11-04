#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1030][1030];
int sumArr[1030][1030];  

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n; j++) 
            cin >> a[i][j];
        
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n; j++) 
            sumArr[i][j] = a[i][j] + sumArr[i - 1][j] + sumArr[i][j - 1] - sumArr[i - 1][j - 1];

    while (m--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int result = sumArr[x2][y2] - sumArr[x1 - 1][y2] - sumArr[x2][y1 - 1] + sumArr[x1 - 1][y1 - 1];
        cout << result << '\n';
    }
}
