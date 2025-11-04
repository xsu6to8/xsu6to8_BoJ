#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll t;
ll d[1000005];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	d[1] = 1;
	d[2] = 2;
	d[3] = 4;

	for (ll i = 4; i < 1000001; i++)
	{
		// 연산자 우선순위 & int 범위 고려
		d[i] += (d[i - 1] + d[i - 2]+ d[i - 3]) % 1000000009;
	}


	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		cout << d[n] << '\n';
	}
}