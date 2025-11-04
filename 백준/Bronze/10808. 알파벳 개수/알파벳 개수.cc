#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	
	vector<int> arr(26, 0);
	for (auto c : s) {
		arr[c - 'a']++;
	}

	for (auto i : arr)
		cout << i << " ";

	return 0;
}
