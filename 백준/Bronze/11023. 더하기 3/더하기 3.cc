#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);

    stringstream ss(line);
    int sum = 0, x;

    while (ss >> x)
        sum += x;

    cout << sum << '\n';
}
