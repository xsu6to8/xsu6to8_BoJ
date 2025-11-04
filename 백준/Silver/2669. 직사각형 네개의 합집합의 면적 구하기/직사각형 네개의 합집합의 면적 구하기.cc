#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool cord[100][100] = { };
    for (int i = 0; i < 4; i++) {
        int sX, sY, eX, eY; cin >> sX >> sY >> eX >> eY;
        for (int y = sY; y < eY; y++) {
            for (int x = sX; x < eX; x++)
                cord[y][x] = true;
        }
    }

    int s = 0;
    for (int y = 0; y < 100; y++) {
        for (int x = 0; x < 100; x++)
            s += cord[y][x];
    }

    cout << s << "\n";

    return 0 ;
}