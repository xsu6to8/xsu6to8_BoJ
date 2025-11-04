#include <bits/stdc++.h>
using namespace std;

const int mod = 10007;
int n;
int comb[1010][10];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i = 1; i <= 9; i++)
    comb[i][i] = 1;
  
  for (int i = 1; i <= n + 9; i++) {
    comb[i][0] = 1;
    for (int j = 1; j < min(i, 10); j++)
      comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % mod;
  }

  cout << comb[n + 9][9];
}