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

	vector<string> names(n);
	vector<vector<int>> births(n, vector<int>(3));

	for (int i = 0; i < n; i++) 
		cin >> names[i] >> births[i][0] >> births[i][1] >> births[i][2];

	vector<pair<vector<int>, string>> birthInfo(n);
	for (int i = 0; i < n; i++)
		birthInfo[i] = { births[i], names[i] };

	sort(birthInfo.begin(), birthInfo.end(), [](const pair<vector<int>, string>& a, const pair<vector<int>, string>& b) {
		if (a.first[2] != b.first[2])
			return a.first[2] < b.first[2]; // 년
		if (a.first[1] != b.first[1])
			return a.first[1] < b.first[1]; // 월
		return a.first[0] < b.first[0]; // 일
	});

	cout << birthInfo[n - 1].second << endl;  
	cout << birthInfo[0].second << endl;   

	return 0;
}
