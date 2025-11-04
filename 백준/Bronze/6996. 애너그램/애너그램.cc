#include <bits/stdc++.h>
using namespace std;
int ac[128], bc[128];
int main() {
    int n;
    cin >> n;
    while (n--) {
        string a, b;
        cin >> a >> b;
        if (a.size() != b.size()) {
            cout << a << " & " << b << " are NOT anagrams.\n";
            continue;
        }
        for (int i = 0; i < a.size(); i++) {
            ac[a[i]]++;
            bc[b[i]]++;
        }
        bool end = false;
        for (int i = 0; i < 128; i++) {
            if (ac[i] != bc[i]) {
                cout << a << " & " << b << " are NOT anagrams.\n";
                end = true;
                break;
            }
        }
        if (!end) {
            cout << a << " & " << b << " are anagrams.\n";
        }
    }
}