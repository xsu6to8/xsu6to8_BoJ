#include <bits/stdc++.h>
using namespace std;

int n;
char arr[3073][6145];

//	init 삼각형 그리기
void draw(int r, int c) {
	arr[r][c] = '*';

	arr[r + 1][c - 1] = '*';
	arr[r + 1][c + 1] = '*';

	for (int j = c - 2; j <= c + 2; j++) 
		arr[r + 2][j] = '*';
}

//	{init} : {n=3 인 삼각형}
//	n > 3 이면, (n/2) * 3개의 삼각형 그리기_
void func(int n, int x, int y) {	//	x : 행 & y : 열
	if (n == 3) {
		draw(x, y);
		return;
	}

	int half = n / 2;
	// 1) 윗부분
	func(half, x, y);

	// 2) 왼쪽 아래
	func(half, x + half, y - half);

	// 3) 오른쪽 아래
	func(half, x + half, y + half);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;	//	n = 3 * 2^k (0<k<11)	:	3, 6, 12, ...
	
	//	n : # of diagonal start
	//	adjacent(밑변) 길이 : 2n - 1
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < 2 * n - 1; j++)
			arr[i][j] = ' ';

	func(n, 0, n-1);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++) 
			cout << arr[i][j];

		cout << '\n';
	}
}
