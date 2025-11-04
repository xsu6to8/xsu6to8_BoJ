#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
pair<int, int> lines[105];
int incr[105];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> lines[i].X >> lines[i].Y;
	sort(lines, lines + n);

	fill(incr, incr + n, 1);
	for (int i = 1; i < n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (lines[i].Y > lines[j].Y)
				incr[i] = max(incr[i], incr[j] + 1);
		}

	}
	cout << n - *max_element(incr, incr + n);
}