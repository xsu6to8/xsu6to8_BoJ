#include <bits/stdc++.h>
using namespace std;

int n;
int wine[10005];
int d[10005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> wine[i];

	d[1] = wine[1];
	if (n > 1)
		d[2] = wine[1] + wine[2];

	for (int i = 3; i <= n; i++)
		d[i] = max({ 
			d[i - 1],							//	이번 idx 제외 (3연속)
			d[i - 2] + wine[i],					//	바로 앞 idx 제외
			d[i - 3] + wine[i - 1] + wine[i]	//	2 칸 앞 idx 제외
			});

	cout << d[n];
}