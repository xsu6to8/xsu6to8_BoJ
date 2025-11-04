#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;

	int cnt_zero = 0, cnt_one = 0;

	if (str[0] == '0')
		cnt_zero++;
	else
		cnt_one++;

	for (int i = 1; i < str.length(); i++) {
		if (str[i] != str[i - 1]) {
			if (str[i] == '0')
				cnt_zero++;
			else
				cnt_one++;
		}
	}

	cout << min(cnt_one, cnt_zero);

	return 0;
}
