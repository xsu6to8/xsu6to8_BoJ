#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<vector<int>> A(N, vector<int>(N));
	vector<vector<int>> B(N, vector<int>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) 
			cin >> A[i][j];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) 
			cin >> B[i][j];
	}

	int count = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			bool result = false;
			for (int k = 0; k < N; k++) {
				if (A[i][k] & B[k][j]) {
					result = true;
					break; 
				}
			}
			if (result) 
				count++;
		}
	}

	cout << count;

	return 0;
}
