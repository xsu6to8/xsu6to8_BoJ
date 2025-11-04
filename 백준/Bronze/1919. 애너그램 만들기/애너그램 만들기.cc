#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;

	int alphabets[26] = {};
	for (auto c : s1)
		alphabets[c - 'a']++;
	for (auto c : s2)
		alphabets[c - 'a']--;

	int cnt = 0;
	for (auto i : alphabets)
	{
		if (i != 0)
			cnt += abs(i);
	}

	cout << cnt;

	return 0;
}