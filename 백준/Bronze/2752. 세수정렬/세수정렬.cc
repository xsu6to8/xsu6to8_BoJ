#include "bits/stdc++.h"

using namespace std;

vector<int> arr(3);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr.begin(), arr.end());

	for (auto i : arr)
		cout << i << ' ';

	return 0;
}