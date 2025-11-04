#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, dest;
	cin >> n >> dest;

	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		int temp = i;
		while (temp != 0) {
			int t2 = temp % 10;
			if (t2 == dest)
				cnt++;
			temp /= 10;
		}
	}

	cout << cnt;

	return 0;
}
