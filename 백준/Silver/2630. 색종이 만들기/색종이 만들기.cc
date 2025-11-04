#include <bits/stdc++.h>

using namespace std;

int white = 0;
int blue = 0;

bool check(int n, int x, int y, vector<vector<int>>& arr) {
	int fir = arr[x][y];
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++) {
			if (arr[i][j] != fir)
				return false;
		}
	}
	return true;
}

void func(int n, int x, int y, vector<vector<int>>& arr) {
	if (check(n, x, y, arr))
	{
		if (arr[x][y] == 0)
			white++;
		if (arr[x][y] == 1)
			blue++;

		return;
	}

	int next_n = n / 2;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			func(next_n, x + i * next_n, y + j * next_n, arr);
		}
	}

}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	vector<vector<int>> arr(n, vector<int>(n));
	for (auto i = 0; i < n; i++)
	{
		for (auto j = 0; j < n; j++)
			cin >> arr[i][j];
	}

	func(n, 0, 0, arr);

	cout << white << '\n' << blue;
}