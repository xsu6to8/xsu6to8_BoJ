#include <bits/stdc++.h>

using namespace std;

unordered_map<string, string> pw_pairs;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    while (n--) {
        string site, pw;
        cin >> site >> pw;
        pw_pairs.insert({ site, pw });
    }

    while (m--) {
        string finding;
        cin >> finding;
        cout << pw_pairs[finding] << '\n';
    }

    return 0;
}
