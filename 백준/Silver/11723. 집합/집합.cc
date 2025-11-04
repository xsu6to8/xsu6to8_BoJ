#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m;
	cin >> m;

	int S = 0;
	string str;
	int temp;

	for (int i = 0; i < m; i++) {
		cin >> str;
		if (str == "add") {
			cin >> temp;
			S |= (1 << temp);
		} else if (str == "remove") {
			cin >> temp;
			S &= ~(1 << temp);
		} else if (str == "check") {
			cin >> temp;
			cout << ((S & (1 << temp)) ? 1 : 0) << '\n';
		} else if (str == "toggle") {
			cin >> temp;
			S ^= (1 << temp);
		} else if (str == "all") {
			S = (1 << 21) - 2;
		} else if (str == "empty") {
			S = 0;
		}
	}
}
