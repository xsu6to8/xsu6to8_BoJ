#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  cin >> a >> b >> c;
  int mult = a * b * c;

  string mult_str = to_string(mult);

  vector<int> cnt(10, 0);
  for (auto c : mult_str)
	  cnt[c - '0']++;

  for (auto i : cnt)
	  cout << i << '\n';
  
  return 0;
}