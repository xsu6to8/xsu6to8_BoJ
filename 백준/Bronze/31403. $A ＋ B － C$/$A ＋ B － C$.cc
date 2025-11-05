#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	cout << a + b - c << endl;

	string aS = to_string(a);
	string bS = to_string(b);
	string str = aS + bS;

	cout << stoi(str) - c;

	return 0;
}
