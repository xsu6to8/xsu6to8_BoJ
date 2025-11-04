#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100005];

bool solve(int limit) {
	int s = 0;
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > limit) 
			return true;

		if (s + a[i] > limit) {
			s = a[i];
			cnt++;
		}
		else {
			s += a[i];
		}
	}

	if (cnt > m)
		return true; // 실패
	else
		return false; // 성공
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	int max_val = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > max_val)
			max_val = a[i];
	}

	int st = max_val;
	int en = 1000000000; 

	while (st < en) {
		int mid = st + (en - st) / 2;
		if (solve(mid)) 
			st = mid + 1; 
		else 
			en = mid;    
	}

	cout << st;
}