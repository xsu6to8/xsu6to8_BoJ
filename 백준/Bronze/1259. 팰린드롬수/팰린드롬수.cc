#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        string s;
        cin >> s;
        if (s == "0") break;

        string rev = s;
        reverse(rev.begin(), rev.end());

        if (s == rev) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}