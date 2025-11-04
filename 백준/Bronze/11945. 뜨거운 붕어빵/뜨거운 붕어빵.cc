#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	while (n--) {
		string s;
		cin >> s;
		reverse(s.begin(), s.end());
		cout << s << endl;
	}

	return 0;
}
