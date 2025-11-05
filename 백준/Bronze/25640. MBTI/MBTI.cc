#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string MBTI;
	cin >> MBTI;

	int n;
	cin >> n;

	int cnt = 0;
	while (n--) {
		string temp;
		cin >> temp;

		if (MBTI.compare(temp) == 0)
			cnt++;
	}

	cout << cnt;

	return 0;
}