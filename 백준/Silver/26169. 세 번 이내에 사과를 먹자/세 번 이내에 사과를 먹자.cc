#include <iostream>
#include <vector>

using namespace std;

int dy[] = { 0, 1, 0, -1 };
int dx[] = { 1, 0, -1, 0 };

bool DFS(vector<vector<int>>& arr, int r, int c, int cnt_apple, int rep) {
	if (rep > 3)
		return false;
	if (arr[r][c] == 1)
		cnt_apple++;
	if (cnt_apple >= 2)
		return true;

	int temp = arr[r][c];  
	arr[r][c] = -1;       

	for (int dir = 0; dir < 4; dir++) {
		int ny = r + dy[dir];
		int nx = c + dx[dir];
		if (ny >= 0 && ny < 5 && nx >= 0 && nx < 5 && arr[ny][nx] != -1) {
			if (DFS(arr, ny, nx, cnt_apple, rep + 1)) {
				arr[r][c] = temp; 
				return true;
			}
		}
	}

	arr[r][c] = temp;  
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<vector<int>> arr(5, vector<int>(5));
	for (int i = 0; i < 5; i++)
	for (int j = 0; j < 5; j++)
		cin >> arr[i][j];

	int r, c;
	cin >> r >> c;

	cout << DFS(arr, r, c, 0, 0);
	return 0;
}
