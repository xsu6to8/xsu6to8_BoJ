#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005];
int d[1005];
int pre[1005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (int j = i - 1; j > 0; j--)
		{
			if (a[i] > a[j] && d[j] >= d[i]) {  
				d[i] = d[j];
				pre[i] = j;
			}
		}
		d[i]++;
	}

	cout << *max_element(d, d + n +1) << '\n';
	
	deque<int> dq;
	int st_idx = max_element(d, d + n + 1) - d;
	while (st_idx != 0) {
		dq.push_front(a[st_idx]);
		st_idx = pre[st_idx];
	}
	
	for (auto i : dq)
		cout << i << ' ';
}