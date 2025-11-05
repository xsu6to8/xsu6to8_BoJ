#include <iostream>
#include <algorithm>

using namespace std;

int n;
long long ans = 0;
long long angry = 0;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	int b;
	for (int i = 0; i < n; i++) {
		cin >> b;
		if (b == 1) angry += 1;
		else angry -= 1;

		ans += angry;
	}

	cout << ans << endl;

}