#include <bits/stdc++.h>

using namespace std;

char arr[2188][2188];

void paint(int n, int x, int y) {
	if (n == 1) {
		arr[x][y] = '*';
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)	//	5번째 ' ' 유지 <- 애초에 ' '
				continue;
			paint(n / 3, x + n / 3 * i , y + n / 3 * j);
		}
	}
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++)
		fill(arr[i], arr[i] + n, ' ');
	
	paint(n, 0, 0);

	for (int i = 0; i < n; i++)
		cout << arr[i] << '\n';

}