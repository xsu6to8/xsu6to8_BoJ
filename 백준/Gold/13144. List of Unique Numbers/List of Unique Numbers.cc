#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
using ll = long long;

int n;
int a[100005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	ll cnt = 0;
	int left = 0;
	unordered_set<int> seen;
	
	for (int right = 0; right < n; right++) {
		while (seen.count(a[right])) {
			seen.erase(a[left]);
			left++;
		}
		
		seen.insert(a[right]);

		cnt += (right - left + 1);
	}

	cout << cnt;
}
