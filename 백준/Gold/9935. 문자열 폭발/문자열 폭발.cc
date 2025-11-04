#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string s, bomb;
	cin >> s;
	cin >> bomb;

	int bomb_len = bomb.length();
	string result = "";

	for (char c : s) {
		result.push_back(c);

		if (result.length() >= bomb_len) {
			if (result.substr(result.length() - bomb_len) == bomb) {
				for (int i = 0; i < bomb_len; i++) {
					result.pop_back();
				}
			}
		}
	}

	if (result.empty()) {
		cout << "FRULA" << endl;
	} else {
		cout << result << endl;
	}

	return 0;
}