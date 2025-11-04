#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;

		list<char> letter;
		auto cursor = letter.begin();
		for (auto c : s) {
			if (c == '<' || c == '>' || c == '-') {
				if (c == '<') {
					if (cursor != letter.begin())
						cursor--;
				}
				else if (c == '>') {
					if (cursor != letter.end())
						cursor++;
				}
				else if (c == '-') {
					if (cursor != letter.begin()) {    // 지울 거 없을 때
						--cursor;
						cursor = letter.erase(cursor);
					}
				}
			}
			else {
				letter.insert(cursor, c);
			}
		}

		for (auto c : letter)
			cout << c;
		cout << '\n';
	}

	return 0;
}