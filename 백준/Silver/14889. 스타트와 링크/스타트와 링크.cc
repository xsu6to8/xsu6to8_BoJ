#include <bits/stdc++.h>
using namespace std;

int n;
int arr[21][21];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
		
	vector<int> order;
	for (int i = 0; i < n / 2; i++)
		order.push_back(0);
	for (int i = 0; i < n / 2; i++)
		order.push_back(1);

	int ans = INT_MAX;

	do {
		vector<int> teamStart, teamLink;

		for (int i = 0; i < n; i++) {
			if (order[i] == 0) teamStart.push_back(i);
			else teamLink.push_back(i);
		}

		int startScore = 0, linkScore = 0;

		for (int i = 0; i < n / 2; i++) {
			for (int j = i + 1; j < n / 2; j++) {
				startScore += arr[teamStart[i]][teamStart[j]] + arr[teamStart[j]][teamStart[i]];
				linkScore += arr[teamLink[i]][teamLink[j]] + arr[teamLink[j]][teamLink[i]];
			}
		}

		ans = min(ans, abs(startScore - linkScore));

	} while (next_permutation(order.begin(), order.end()));

	cout << ans;
}
