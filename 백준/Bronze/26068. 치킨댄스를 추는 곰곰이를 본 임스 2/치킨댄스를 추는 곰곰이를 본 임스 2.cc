#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	int cnt = 0;
	while (n--) {
		string temp;
		cin >> temp;

		string day = "";
		for (int i = 2; i < temp.length(); i++)
			day += temp[i];

		int D = stoi(day);
		if (D <= 90)
			cnt++;
	}

	cout << cnt;

	return 0;
}