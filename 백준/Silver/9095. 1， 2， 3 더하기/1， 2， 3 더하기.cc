#include <bits/stdc++.h>
using namespace std;

int t;
int d[12];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	d[1] = 1; d[2] = 2; d[3] = 4;
	for (int i = 4; i < 11; i++)
		d[i] = d[i - 1] + d[i - 2] + d[i - 3];

	cin >> t;
	while (t--) {
		int curr; 
		cin >> curr;
		cout << d[curr] << '\n';
	}
}
