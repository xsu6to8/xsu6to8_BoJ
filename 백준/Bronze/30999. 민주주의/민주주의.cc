#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int total_cnt = 0;
	int limit = m / 2;
	while (n--) {
		string s;
		cin >> s;
		
		int cnt = 0;
		for (int i = 0; i < m; i++) {
			if (s[i] == 'O')
				cnt++;
		}
		if (cnt > limit)
			total_cnt++;
	}

	cout << total_cnt;

	return 0;
}