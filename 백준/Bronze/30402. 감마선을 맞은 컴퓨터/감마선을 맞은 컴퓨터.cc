#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool chunbae = false;
	bool nabi = false;
	bool yeongcheol = false;
	int rep = 15;
	while (rep--) {
		string s;
		getline(cin, s);
		cin.ignore();

		if (s.find('w') != string::npos) {
			chunbae = true;
			break;
		}
		if (s.find('b') != string::npos) {
			nabi = true;
			break;
		}
		if (s.find('g') != string::npos) {
			yeongcheol = true;
			break;
		}
	}

	if (chunbae)
		cout << "chunbae";
	if (nabi)
		cout << "nabi";
	if (yeongcheol)
		cout << "yeongcheol";

	return 0;
}