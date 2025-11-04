#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L; 
    cin >> L;
    string s; 
    cin >> s;

    const int r = 31;
    const int M = 1234567891;

    long long hash_val = 0;
    long long power = 1; // r^0

    for (int i = 0; i < L; i++) {
        int a = s[i] - 'a' + 1;
        hash_val = (hash_val + a * power) % M;
        power = (power * r) % M;
    }

    cout << hash_val;
    return 0;
}
