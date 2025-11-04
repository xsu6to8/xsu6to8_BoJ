#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (getline(cin, s) && s != "*") {
    bitset<26> seen;
    for (char c : s)
      if (isalpha(c)) seen[c - 'a'] = 1;
    cout << (seen.all() ? "Y" : "N") << "\n";
  }

  return 0;
}