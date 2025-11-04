#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string x;   //   1,000,000 <자릿수>
    cin >> x;

    int times = 0;

    while (x.length() > 1) {
        int sum = 0;
        for (char c : x)
            sum += c - '0';
        x = to_string(sum);
        times++;
    }

    cout << times << '\n';
    if (x == "3" || x == "6" || x == "9")
        cout << "YES\n";
    else
        cout << "NO\n";
}
