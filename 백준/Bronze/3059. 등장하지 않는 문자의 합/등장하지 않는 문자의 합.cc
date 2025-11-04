#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int total_sum = 2015;

	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;

		unordered_set<char> seen;
		int sum = 0;
		for (char c : s) 
			seen.insert(c);

		int missing_sum = total_sum;
		for (char c : seen) 
			missing_sum -= c;

		cout << missing_sum << endl;
	}

	return 0;
}
// 중복 가능성