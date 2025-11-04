#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> girl(7, 0);
	vector<int> boy(7, 0);

	while (n--) {
		int sex, grade;
		cin >> sex >> grade;

		if (sex == 0)
			girl[grade]++;
		else
			boy[grade]++;
	}

	int room = 0;
	for (int j = 0; j < 7; j++) {
		if (girl[j]) {
			room++;
			room += (girl[j] - 1)/ k;
		}
		if (boy[j]) {
			room++;
			room += (boy[j] - 1) / k;
		}
	}

	cout << room;

	return 0;
}