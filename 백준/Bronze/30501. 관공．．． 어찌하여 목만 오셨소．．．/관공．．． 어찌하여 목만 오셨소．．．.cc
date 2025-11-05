#include <iostream>
#include <string>

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
		if (s.find('S') != string::npos)
			cout << s << '\n';
	}

	return 0;
}
