#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;

int n, d, k, c;
int a[30005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> d >> k >> c;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	vector<int> each_idx(d + 1, 0);
	int curr_cnt = 0;
	for (int i = 0; i < k; i++)
	{
		if (each_idx[a[i]]++ == 0)
			curr_cnt++;
	}

	int max_cnt = curr_cnt;
	if (each_idx[c] == 0)
		max_cnt++;

	for (int i = 1; i < n; i++)
	{
		int rmv = a[i - 1];
		if (--each_idx[rmv] == 0)
			curr_cnt--;

		int add = a[(i + k - 1) % n];
		if (each_idx[add]++ == 0)
			curr_cnt++;

		if (each_idx[c] == 0) 
			max_cnt = max(max_cnt, curr_cnt + 1);
		else 
			max_cnt = max(max_cnt, curr_cnt);
		
	}

	cout << max_cnt;
}

// 이전 코드 -> O(n*k + ...) 대략 1억으로 시간초과
// 현재 코드 -> O(n+k)