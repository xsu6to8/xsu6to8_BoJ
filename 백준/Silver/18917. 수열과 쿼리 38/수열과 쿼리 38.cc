#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> m;

    long long total_sum = 0;
    int total_xor = 0;  

    while (m--) {
        int query;
        cin >> query;

        if (query == 1) {
            int x;
            cin >> x;
            total_sum += x;
            total_xor ^= x;
        }
        else if (query == 2) {
            int x;
            cin >> x;
            total_sum -= x;
            total_xor ^= x;
        }
        else if (query == 3) {
            cout << total_sum << "\n";
        }
        else if (query == 4) {
            cout << total_xor << "\n";
        }
    }
}