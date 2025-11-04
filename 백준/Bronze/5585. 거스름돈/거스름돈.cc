#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int income;
	cin >> income;
	int change = 1000 - income;

	int change_list[6] = { 500, 100, 50, 10, 5, 1};
	int cnt = 0;
	for (int i = 0; i < 6; i++)
	{	
		if (change == 0)
			break;

		cnt += change / change_list[i];
		change %= change_list[i];
	}

	cout << cnt;
}