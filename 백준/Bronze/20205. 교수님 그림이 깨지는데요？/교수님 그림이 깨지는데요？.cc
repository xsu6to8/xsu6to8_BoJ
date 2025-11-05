#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	int pixel[10][10];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> pixel[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int r = 0; r < k; r++) {
			for (int j = 0; j < n; j++) {
				for (int s = 0; s < k; s++) {
					cout << pixel[i][j];
					cout << ' ';
				}
			}
			cout << endl;
		}
	}

	return 0;
}