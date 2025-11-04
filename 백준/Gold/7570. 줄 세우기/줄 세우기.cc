#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000005];
int d[1000005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	// order
	for (int i = 0; i < n; i++)
		cin >> a[i];
	// 전체 배열 중 증가순열 길이
	for (int i = 0; i < n; i++)
		d[a[i]] = d[a[i] - 1] + 1;
	// 나머지 앞뒤로 잘
	int maxLen = 0;
	for (int i = 1; i <= n; i++)
		maxLen = max(maxLen, d[i]);
	cout << n - maxLen;

}