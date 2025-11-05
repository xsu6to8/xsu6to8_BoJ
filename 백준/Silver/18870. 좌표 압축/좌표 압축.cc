#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000005];
vector<int> uni;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		uni.push_back(a[i]);
	}
	sort(uni.begin(), uni.end());
	uni.erase(unique(uni.begin(), uni.end()), uni.end());
	for (int i = 0; i < n; i++)
	{
		cout << lower_bound(uni.begin(), uni.end(), a[i]) - uni.begin() << ' ';
	}
}