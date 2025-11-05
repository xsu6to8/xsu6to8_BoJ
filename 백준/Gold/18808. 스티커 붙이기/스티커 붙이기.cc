#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int laptop[41][41];

int r, c;
int sticker[11][11];

bool paste(int x, int y) {
	//	한 칸이라도 이미 '1'이면 false
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (laptop[x + i][y + j] == 1 && sticker[i][j] == 1)
				return false;
		}
	}
	//	스티커 온전히 붙일 수 있으면 노트북에 반영
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (sticker[i][j] == 1)
				laptop[x + i][y + j] = 1;
		}
	}
	return true;
}

// 본 스티커 자체 돌리기
void rotate() {
	int tmp[11][11];

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			tmp[i][j] = sticker[i][j];

	for (int i = 0; i < c; i++)
		for (int j = 0; j < r; j++)
			sticker[i][j] = tmp[r - 1 - j][i];

	swap(r, c);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m >> k;
	while (k--) {
		cin >> r >> c;
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				cin >> sticker[i][j];

		for (int rot = 0; rot < 4; rot++) {
			bool is_paste = false;
			for (int x = 0; x <= n - r; x++) {
				if (is_paste) 
					break;
				for (int y = 0; y <= m - c; y++) {
					if (paste(x, y)) {
						is_paste = true;
						break;
					}
				}
			}
			if (is_paste) 
				break;
			rotate();
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cnt += laptop[i][j];
	cout << cnt;
}

