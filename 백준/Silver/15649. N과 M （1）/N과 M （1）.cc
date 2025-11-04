#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool visited[10];

void func(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (!visited[i]) {
			arr[cnt] = i;
			visited[i] = true;
			func(cnt + 1);
			visited[i] = false;
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	func(0);
}
