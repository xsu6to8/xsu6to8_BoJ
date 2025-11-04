#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<pair<int, int>> players;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int s, p; cin >> s >> p;
		players.push_back({ s,p });
	}

	sort(players.begin(), players.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
		if (a.first != b.first) 
		{
			return a.first > b.first; 
		}
		return a.second < b.second; 
		});

	int rank5_solved_count = players[4].first;

	int chicken_count = 0;

	for (int i = 5; i < n; ++i) {
		if (players[i].first == rank5_solved_count) 
		{
			chicken_count++;
		}
		else 
		{
			break;
		}
	}

	cout << chicken_count << endl;

}