#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005];

int head[1005];
int tail[1005];
int result[1005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	head[0] = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (a[i] > a[j]) {
				head[i] = max(head[i], head[j] + 1);
			}
		}
	}

	tail[n - 1] = 0;
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j]) {
				tail[i] = max(tail[i], tail[j] + 1);
			}
		}
	}

	for (int i = 0; i < n; i++)
		result[i] = head[i] + tail[i];

	cout << *max_element(result, result + n) + 1;
}
