#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	string map;
	cin >> map;

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0 && map[i] == 'W')
			cnt++;
		else if (i == n - 1 && map[i] == 'E')
			cnt++;

		else
		{
			if (map[i] == 'W' && map[i - 1] == 'E')
				cnt++;
		}
	}

	cout << cnt;

	return 0;
}