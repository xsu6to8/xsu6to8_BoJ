#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];
int result[9];
bool isused[10];

void func(int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            cout << result[i] << ' ';
        cout << '\n';
        return;
    }

    int tmp = 0; 
    for (int i = 0; i < n; ++i) {
        if (!isused[i] && tmp != arr[i]) { 
            isused[i] = true;
            result[cnt] = arr[i];
            tmp = result[cnt];
            func(cnt + 1);
            isused[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n); 

    func(0);
}
