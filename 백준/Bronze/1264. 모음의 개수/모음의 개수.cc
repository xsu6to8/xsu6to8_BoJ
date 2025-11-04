#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_set<char> vowelSet = { 'a', 'e', 'i', 'o', 'u' , 'A', 'E', 'I', 'O', 'U'};
	// 대문자도

	string s;
	while (true) {
		getline(cin, s);
		if (s == "#")
			break;

		int cnt = 0;
		for (auto c : s) {
			if (vowelSet.find(c) != vowelSet.end())
				cnt++;
		}

		cout << cnt << endl;
	}
	

	return 0;
}
