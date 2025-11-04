#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_set<char> vowelSet = { 'a', 'e', 'i', 'o', 'u' };

	string s;
	getline(cin, s);

	int cnt = 0;
	for (auto c : s) {
		if (vowelSet.find(c) != vowelSet.end())
			cnt++;
	}

	cout << cnt;


	return 0;
}
