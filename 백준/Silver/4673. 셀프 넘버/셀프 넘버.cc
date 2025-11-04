#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> arr(10001, 1);
	for (int i = 1; i <= 10000; i++)
	{
		int sum = i;

		auto s = to_string(i);
		for (auto j : s) {
			sum += j - '0';
		}
		if (sum < 10001)
			arr[sum] = 0;

	}

	for (int i = 1; i < 10001; i++)
	{
		if (arr[i])
			cout << i << endl;
	}

	return 0;
}
