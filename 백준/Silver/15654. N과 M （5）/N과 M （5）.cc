#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> arr;
int result[9];
bool visited[9];

void func(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << result[i] << ' ';
		cout << '\n';
	}

	for (int i = 0; i < n; i++)
	{
		if (!visited[i]) {
			result[cnt] = arr[i];
			visited[i] = true;
			func(cnt + 1);
			visited[i] = false;
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());

	func(0);
}