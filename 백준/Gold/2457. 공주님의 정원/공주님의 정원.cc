#include <bits/stdc++.h>
using namespace std;

int n;
vector <pair <pair<int, int>, pair<int, int>> >f(100005);

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> f[i].first.first >> f[i].first.second >> f[i].second.first >> f[i].second.second;

	sort(f.begin(), f.begin() + n,
		[](auto& a, auto& b) {
			// 시작일 (오름차순)
			int sa = a.first.first * 100 + a.first.second;
			int sb = b.first.first * 100 + b.first.second;
			if (sa != sb) 
				return sa < sb;

			// 시작일 같음 -> 종료일 (내림차순)
			int ea = a.second.first * 100 + a.second.second;
			int eb = b.second.first * 100 + b.second.second;
			return ea > eb;
		}
	);

	int cnt = 0;
	int cur = 3 * 100 + 1;       // 3월 1일
	int end = 11 * 100 + 30;   // 11월 30일
	int i = 0;

	while (cur <= end) {
		int farthest = 0;
		while (i < n && (f[i].first.first * 100 + f[i].first.second) <= cur) {
			int e = f[i].second.first * 100 + f[i].second.second;
			farthest = max(farthest, e);
			i++;
		}
		if (farthest < cur) {
			cout << 0;
			return 0;
		}
		cur = farthest;
		cnt++;
	}
	cout << cnt;
}
