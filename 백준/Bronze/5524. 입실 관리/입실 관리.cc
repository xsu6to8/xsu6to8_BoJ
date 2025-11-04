#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string s;
		getline(cin, s);

		string ans = "";
		for(auto c : s)
			ans += tolower(c);

		cout << ans << endl;
	}

	return 0;
}
