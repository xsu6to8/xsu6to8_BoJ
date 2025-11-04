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

    int l = 0;
    int r = n - 1;
    int val1 = a[l], val2 = a[r];
    int v = abs(val1 + val2);

    while (l < r) {
        int sum = a[l] + a[r];

        if (abs(sum) < v) {
            v = abs(sum);
            val1 = a[l];
            val2 = a[r];
        }

        if (sum == 0) 
            break; 

        else if (sum < 0)
            l++;  // 합이 음수면 왼쪽 포인터 이동
        else r--;               // 합이 양수면 오른쪽 포인터 이동
    }

    cout << val1 << ' ' << val2 ;
}
