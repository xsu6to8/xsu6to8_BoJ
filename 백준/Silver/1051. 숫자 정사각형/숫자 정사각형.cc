#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
int a[51][51];
int area = 1;

void calc() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int curr = a[i][j];

			for (int k = j + 1; k < m; k++) {
				if (a[i][k] == curr) {
					int len = k - j;
                    
                    // idx 범위
					if (i + len < n) 
						if (a[i + len][j] == curr && a[i + len][k] == curr) 
							area = max(area, (len + 1) * (len + 1));
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string row;
		cin >> row;
		for (int j = 0; j < m; j++) {
			a[i][j] = row[j] - '0';
		}
	}

	calc();

	cout << area;
}