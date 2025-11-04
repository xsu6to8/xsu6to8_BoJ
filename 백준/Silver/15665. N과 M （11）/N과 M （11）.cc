#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];
int result[9];

void func(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << result[i] << ' ';
		cout << '\n';

		return;
	}

	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		if (tmp != arr[i]) {
			result[cnt] = arr[i];
			tmp = arr[i];
			func(cnt + 1);
		}
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);
	func(0);
}