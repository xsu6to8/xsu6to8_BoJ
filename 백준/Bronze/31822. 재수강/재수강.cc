#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string subject;
	cin >> subject;

	string codes = subject.substr(0, 5);

	int n;
	cin >> n;

	int cnt = 0;
	while (n--) {
		string temp;
		cin >> temp;

		string temp_codes = temp.substr(0, 5);

		if (!temp_codes.compare(codes))
			cnt++;
	}

	cout << cnt;

	return 0;
}