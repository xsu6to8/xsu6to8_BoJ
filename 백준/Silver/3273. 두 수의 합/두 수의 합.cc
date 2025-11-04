#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int x;
    cin >> x;

    int cnt = 0;
    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left] + arr[right];
        if (temp == x)
        {
            cnt++;
            left++;
            right--;
            continue;
        }
        else if (temp < x)
            left++;
        else if (temp > x)
            right--;
    }

    cout << cnt;

	return 0;
}